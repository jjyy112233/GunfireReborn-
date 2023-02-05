using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Level : MonoBehaviour
{
    [SerializeField]
    static float dmgLevel = 100;
    public float DmgLevel => dmgLevel / 100f;

    [SerializeField]
    static float defLevel = 100;
    public float DefLevel => defLevel / 100f;

    [SerializeField]
    static float fireLevel = 100;
    public float FireLevel => fireLevel / 100f;

    public void AddDmg(float d)
    {
        dmgLevel += d;
        dmgLevel = Mathf.Min(500, dmgLevel);
    }
    public void AddDef(float d)
    {
        defLevel += d;
        defLevel = Mathf.Min(90, defLevel);
    }
    public void MinAmmo(float f)
    {
        fireLevel -= f;
        fireLevel = Mathf.Max(30, fireLevel);
    }

    public void Init()
    {
        dmgLevel = 100;
        defLevel = 100;
        fireLevel = 100;
    }
}
