using System.Collections;
using System.Collections.Generic;
using UnityEditor.SearchService;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Potal : MonoBehaviour
{
    public List<DungeonRoom> rooms;
    public string nextScene;
    ParticleSystem potarParticle;
    Collider potalCol;

    private void Awake()
    {
        potalCol = GetComponent<Collider>();
        potarParticle = GetComponent<ParticleSystem>();
    }
    public void ClearRoom(DungeonRoom room)
    {
        rooms.Remove(room);
        if(rooms.Count == 0)
        {
            potalCol.enabled = true;
        }
    }

    private void OnMouseDown()
    {
        SceneManager.LoadScene(nextScene);
    }
}
