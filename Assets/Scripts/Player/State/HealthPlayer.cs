using DungeonArchitect.Navigation;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "HealtPlayer.asset", menuName = "HealthObject/HealthPlayer")]
public class PlayerInfo : ScriptableObject
{
    public float maxHp;
    public float hp;

    float HP {
        set {
            hp = value;
            hpBar.fillAmount =hp / maxHp;
        }
    }

    Image hpBar;
    public float defScale = 0;
    public float defScalePer {
        get {
            return (100.0f - defScale) / 100.0f;
        }
    }
    public float maxDef;
    public float def;

    float DEF {
        set {
            def = value;
            defBar.fillAmount = def / maxDef;
        }
    }
    Image defBar;

    public float speed;

    public bool isNonDef => def <= 0;
    public bool isDie => hp <= 0;

    public void Init()
    {
        hp = maxHp;
        def = maxDef;
    }
    public void SetHpBar(Image sprite)
    {
        hpBar = sprite;
    }
    public void SetDefBar(Image sprite)
    {
        defBar = sprite;
    }
    public void Hit(float dmg)
    {
        float defDmg = dmg - dmg * defScalePer;
        if (!isNonDef)
        {
            if (defDmg >= def)
            {
                if (def != 0)
                {
                    var leftDef = Mathf.Abs(def - (dmg * defScalePer));
                    var leftDmg = leftDef * (100.0f / (100.0f - defScale));

                    DEF = 0;
                    HP = hp - leftDmg;
                }
            }
            else
            {
                DEF = def - defDmg;
            }
        }
        else
        {
            HP = hp - dmg;
        }
    }
}
