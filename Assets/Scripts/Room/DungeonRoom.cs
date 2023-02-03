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

    void DeadBoss(Enemy enemy)
    {
        foreach(var now_enemy in enemies)
        {
            now_enemy.Die();
        }
        enemies.Clear();
        ClearDungeon();
        chest.Openable = true;
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
                insertPlayer = true;
                EnterPlayer();
            }
        }
    }

    public void EnterPlayer()
    {
        foreach(var door in doors)
        {
            door.Close();
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

        Destroy(roomCollider);
        Destroy(this);
    }

}
