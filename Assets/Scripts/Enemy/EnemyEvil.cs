using System;
using System.Linq;
using UnityEngine;
using UnityEngine.AI;

public class EnemyEvil : Enemy, EnemyInterface
{
    public MagicBall attackPref;
    public Transform attackPos;
    public MagicBall nowAttack;

    private void FixedUpdate()
    {
        if (nowUpdate != null)
            nowUpdate();
    }

    public override void MoveUpdate()
    {
        pathFinder.SetDestination(target.transform.position);
        if(Vector3.Distance(transform.position, target.transform.position) <= attackDis - 1f)
        {
            State = EnemyState.Attack;
        }
    }
    public void OnAttack()
    {
        nowAttack = Instantiate(attackPref, attackPos);
        nowAttack.SetParent(this);
        nowAttack.SetTarget(target.gameObject);
    }
    public override void AttackEnd()
    {
        base.Targeting();
        if (nowAttack != null)
        {
            nowAttack.transform.parent = null;
            nowAttack.OnFire();
            nowAttack = null;
        }
        if (target == null)
        {
            Targeting();
            if (target == null)
                State = EnemyState.Idle;

        }
        else
            State = EnemyState.Move;
    }
    public override void Die()
    {
        base.Die();
        if (nowAttack)
            Destroy(nowAttack);
    }

    public override void Hit(PlayerController nowTarget, float dmg, bool stop)
    {
        base.Hit(nowTarget, dmg, stop);
        if (nowAttack && stop)
        {
            Destroy(nowAttack.gameObject);
        }
    }
}
