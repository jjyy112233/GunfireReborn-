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
}
