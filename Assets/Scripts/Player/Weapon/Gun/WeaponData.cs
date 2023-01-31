using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "WeaponData.asset", menuName = "WeaponScriptable/WeaponData")]
public class WeaponData : ScriptableObject
{
    public enum WeponType
    {
        Wepon1,
        Wepon2,
        Wepon3,
        Wepon4,
        Wepon5,
    }

    public string code;
    public float dmg;
    public float ran;
    public float speed;
    public float delay;
    public float aim;
    public int ammo;
    public string aimPoint;
    public WeponType type;
}
