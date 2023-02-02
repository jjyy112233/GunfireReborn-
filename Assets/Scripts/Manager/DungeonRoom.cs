using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DungeonRoom : MonoBehaviour
{
    public List<Enemy> enemies;
    bool isClear;
    public Chest chest;

    public void EnterPlayer()
    {

    }

    public void ClearDungeon()
    {

    }

    void DeadEnemy(Enemy enemy)
    {
        enemies.Remove(enemy);

        if(enemies.Count == 0)
        {
            chest.Openable = true;
        }
    }
    
}
