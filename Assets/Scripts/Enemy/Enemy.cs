using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour, EnemyInterface
{
    LayerMask targetMask;
    NavMeshAgent pathFinder; // 경로계산 AI 에이전트

    Animator animator;
    PlayerController target;

    public float findDis;
    public float attackDis;
    public float attack2_Dis;

    public enum EnemyState
    {
        None,
        Idle,
        Move,
        Hit,
        Attack,
        Attack2,
        Die,
    }

    EnemyState state;
    public EnemyState State {
        set {
            if (state == value)
                return;

            state = value;
            switch (state)
            {
                case EnemyState.Idle:
                    animator.SetTrigger("Idle");
                    nowUpdate = IdleUpdate;
                    break;
                case EnemyState.Move:
                    if (target == null)
                        return;
                    pathFinder.isStopped = false;
                    animator.SetTrigger("Move");
                    nowUpdate = MoveUpdate;
                    break;
                case EnemyState.Hit:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Hit");
                    nowUpdate = null;
                    break;
                case EnemyState.Attack:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Attack");
                    nowUpdate = null;
                    break;
                case EnemyState.Attack2:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Attack2");
                    nowUpdate = null;
                    break;
                case EnemyState.Die:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Die");
                    OnDie();
                    Destroy(gameObject, 1f);
                    nowUpdate = DieUpdate;
                    break;

            }
        }
    }

    Action nowUpdate;
    Action OnDie;


    private void Awake()
    {
        animator = GetComponent<Animator>();
        targetMask = LayerMask.GetMask("Player");
        pathFinder = GetComponent<NavMeshAgent>();
        State = EnemyState.Idle;
        nowUpdate = IdleUpdate;
    }
    private void Update()
    {
        if(nowUpdate != null)
            nowUpdate();
    }

     void Attack()
    {

    }

    public void Die()
    {
        var cols = GetComponentsInChildren<Collider>();
        foreach (var col in cols)
        {
            col.enabled = false;
        }

        State = EnemyState.Die;
        animator.SetTrigger("Die");
    }

    public void Hit(PlayerController nowTarget, bool stop)
    {
        State = EnemyState.Hit;
        if (target == null)
        {
            target = nowTarget;
        }
    }

    public void HitEnd()
    {
        pathFinder.isStopped = false;
        State = EnemyState.Move;
    }

    void Targeting()
    {
        var players = GameObject.FindGameObjectsWithTag("Player").Where(t => Vector3.Distance(transform.position, t.transform.position) <= findDis);
        if (players.Count() == 0)
            return;

        PlayerController targetPlayer = players
            .OrderBy(t => Vector3.Distance(transform.position, t.transform.position)).First().GetComponent<PlayerController>();

        if (targetPlayer != null)
        {
            target = targetPlayer;
            State = EnemyState.Move;
        }
    }
        
    void IdleUpdate()
    {
        Targeting();
    }
    void MoveUpdate()
    {
        pathFinder.SetDestination(target.transform.position);
        if(Vector3.Distance(transform.position, target.transform.position) < attackDis)
        {
            animator.SetTrigger("Attack");
            State = EnemyState.Attack;
        }
    }


    void EnemyInterface.AttackEnd()
    {
        Targeting();

        if (target != null)
            State = EnemyState.Idle;
        else
            State = EnemyState.Move;
    }
    void DieUpdate()
    {

    }

}
