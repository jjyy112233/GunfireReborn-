using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "HealthObject.asset", menuName = "ObjectScriptable/HealthObject")]
public class HealthObject : ScriptableObject
{
    public int hp;
    public int def;
    public float speed;

    public bool isNonDef => def <= 0;
    public bool isAlive => hp <= 0;

    public event System.Action OnDie;
    public event System.Action OnVictory;

}
