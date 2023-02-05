using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Experimental.GraphView.GraphView;

public class BossAttackHitZome : MonoBehaviour
{
    public HealthObject healthInfo;
    public  void OnParticleCollision(GameObject other)
    {
        var p = other.GetComponent<PlayerController>();
        p.Hit(null, healthInfo.damage2);
    }
}
