using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;

[CreateAssetMenu(fileName = "WeaponData.asset", menuName = "WeaponScriptable/WeaponData")]
public class WeaponData : ScriptableObject
{
    public enum WeaponType
    {
        None,
        Wepon1,
        Wepon2,
        Wepon3,
        Count
    }

    public string code;
    public float dmg;
    public float ran;
    public float speed;
    public float delay;
    public float aim;

    public int reloadAmmo;
    public int useAmmo;

    public string aimPoint;
    public WeaponType type;
}
