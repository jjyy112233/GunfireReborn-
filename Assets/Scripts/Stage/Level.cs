using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.InteropServices.WindowsRuntime;
using Unity.VisualScripting;
using UnityEngine;

public class Level : MonoBehaviour
{
    [SerializeField]
    float dmgLevel = 100;
    public float DmgLevel => dmgLevel / 100f;

    [SerializeField]
    float fireLevel = 100;
    public float FireLevel => fireLevel / 100f;

    [SerializeField]
    float speedLevel = 100;
    public float SpeedLevel => speedLevel / 100f;

    public List<ChestData> myScroll;
    public bool IsScroll(Scroll s)
    {
        var result = myScroll.Find(t => t.scroll == s);
        return result != null;
    }

    public void AddDmg(float d)
    {
        dmgLevel += d;
        dmgLevel = Mathf.Min(500, dmgLevel);
        FindObjectOfType<StageManager>().userState.Dmg = DmgLevel;

    }

    public void AddFire(float f)
    {
        fireLevel -= f;
        fireLevel = Mathf.Max(50, fireLevel);
        FindObjectOfType<StageManager>().userState.Fire = FireLevel;
    }

    public void AddSpeed(float s)
    {
        speedLevel += s;
        speedLevel = Mathf.Max(50, speedLevel);
        FindObjectOfType<StageManager>().userState.Speed = SpeedLevel;
    }

    public void Init()
    {
        dmgLevel = 100;
        fireLevel = 100;
        speedLevel = 100;
    }

    public void GetUpGrade(Upgrade u)
    {
        switch (u)
        {
            case Upgrade.None:
                break;
            case Upgrade.DmgUp:
                AddDmg(20);
                break;
            case Upgrade.FireSpeedUp:
                AddFire(10f);
                break;
            case Upgrade.SpeedUp:
                AddSpeed(10f);
                break;
            case Upgrade.Count:
                break;
            default:
                break;
        }
    }
    public void GetScroll(ChestData s)
    {
        myScroll.Add(s);
        FindObjectOfType<StageManager>().userState.AddScroll(s);

    }
}
