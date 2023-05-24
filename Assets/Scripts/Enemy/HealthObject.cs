using DungeonArchitect.Navigation;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting.Dependencies.NCalc;
using UnityEngine;

[CreateAssetMenu(fileName = "HealthObject.asset", menuName = "HealthObject/Health")]
public class HealthObject : ScriptableObject
{
    public float maxHp;
    public int hpCnt;
    public float defScale = 0;
    public float maxDef;
    public float speed;

    public float damage1;
    public float damage2;
    public float damage3;
    public float damage4;
    public float damage5;
}
