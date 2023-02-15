using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class DungeonRoom : MonoBehaviour
{
    public List<Enemy> enemies;
    public List<Door> doors;
    bool insertPlayer; 
    bool isClear;
    public Chest chest;

    Collider roomCollider;
    public Potal potal;

    bool firstTarget;

    private void Awake()
    {
        roomCollider = GetComponent<Collider>();
    }

    private void Start()
    {
        foreach(var enemy in enemies)
        {
            enemy.AddDieEvent(DeadEnemy);
        }
    }

    void DeadEnemy(Enemy enemy)
    {
        enemies.Remove(enemy);

        if(enemies.Count == 0)
        {
            ClearDungeon();
        }
    }


    private void FixedUpdate()
    {
        if (!insertPlayer)
            FindPlayer();

    }

    void FindPlayer()
    {
        var players = GameObject.FindGameObjectsWithTag("Player");
        foreach(var player in players)
        {
            var playerCol = player.GetComponent<Collider>();
            if (roomCollider.bounds.Contains(playerCol.bounds.min)
                && roomCollider.bounds.Contains(playerCol.bounds.max))
            {
                Debug.Log("Find!");
                roomCollider.enabled = false;
                insertPlayer = true;
                EnterPlayer(playerCol.GetComponent<PlayerController>());
            }
        }
    }

    public void EnterPlayer(PlayerController t)
    {
        foreach(var door in doors)
        {
            door.Close();
        }
        foreach(var enemy in enemies)
        {
            enemy.Targeting(t);
        }
    }

    public void ClearDungeon()
    {
        isClear = true;
        foreach (var door in doors)
        {
            door.Open();
        }
        chest.Openable = true;

        if (potal != null)
            potal.gameObject.SetActive(true);


        Destroy(roomCollider);
        Destroy(this);
    }


}
