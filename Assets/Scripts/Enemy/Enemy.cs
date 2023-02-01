using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro.EditorUtilities;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour, EnemyInterface
{
    LayerMask targetMask;
    NavMeshAgent pathFinder; // 경로계산 AI 에이전트

    Animator animator;
    PlayerController target;

    public HealthObject healthInfo;

    public float damage;
    public float findDis;
    public float attackDis;
    public float skillDelay;
    public float skillTimer;
    public float skillDis;
    

    public enum EnemyState
    {
        None,
        Idle,
        Move,
        Hit,
        Critical,
        Attack,
        Skill,
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
                    pathFinder.speed = healthInfo.speed;
                    animator.SetTrigger("Move");
                    nowUpdate = MoveUpdate;
                    break;
                case EnemyState.Hit:
                    pathFinder.isStopped = false;
                    pathFinder.speed = healthInfo.speed;
                    animator.SetTrigger("Move");
                    nowUpdate = MoveUpdate;
                    break;
                case EnemyState.Critical:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Hit");
                    nowUpdate = null;
                    break;
                case EnemyState.Attack:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Attack");
                    nowUpdate = AttackUpdate;
                    break;
                case EnemyState.Skill:
                    pathFinder.isStopped = false;
                    pathFinder.speed = 200;
                    skillTimer = 0f;
                    animator.SetTrigger("Attack2");
                    nowUpdate = null;
                    break;
                case EnemyState.Die:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Die");
                    if(OnDie != null)
                        OnDie();
                    nowUpdate = DieUpdate;
                    break;

            }
        }
    }

    Action nowUpdate;

    //죽을때 템 드랍
    Action OnDie;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        targetMask = LayerMask.GetMask("Player");
        pathFinder = GetComponent<NavMeshAgent>();
        State = EnemyState.Idle;
        nowUpdate = IdleUpdate;

        healthInfo.SetHpBar(transform.GetComponentInChildren<LookCamera>().hpBar);
        healthInfo.SetDefBar(transform.GetComponentInChildren<LookCamera>().defBar);
        healthInfo.Init();
    }
    private void Update()
    {
        skillTimer += Time.deltaTime;
        if (nowUpdate != null)
            nowUpdate();
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
    public void DieEnd()
    {
        Destroy(gameObject, 1f);
    }

    public void Hit(PlayerController nowTarget, float dmg, bool stop)
    {
        healthInfo.Hit(dmg);
        if (healthInfo.isDie)
        {
            Die();
            return;
        }

        State = stop? EnemyState.Critical : EnemyState.Hit;
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
        if(skillTimer >= skillDelay && Vector3.Distance(transform.position, target.transform.position) < skillDis)
        {
            State = EnemyState.Skill;
        }
        else if(Vector3.Distance(transform.position, target.transform.position) < attackDis)
        {
            State = EnemyState.Attack;
        }
    }

    public void AttackOnDamage()
    {
        var players = GameObject.FindGameObjectsWithTag("Player").Where(t => Vector3.Distance(t.transform.position, transform.position) < attackDis);
        foreach(var player in players)
        {
            player.GetComponent<PlayerController>().Hit(gameObject, damage);
        }
    }

    public void AttackEnd()
    {
        Targeting();

        if (target == null)
        {
            Targeting();
            if(target == null)
                State = EnemyState.Idle;

        }
        else
            State = EnemyState.Move;
    }
    public void AttackUpdate()
    {
        transform.LookAt(target.transform);
    }
    void DieUpdate()
    {

    }

}
