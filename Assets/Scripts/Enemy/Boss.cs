using DungeonArchitect.Flow.Exec;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class Boss : MonoBehaviour, BossInterface
{
    NavMeshAgent pathFind;
    PlayerController[] players;
    PlayerController target;
    Animator animator;

    public GameObject attack1_Effect;
    public Transform attack1_Pos;

    public GameObject attack2_Effect;
    public Transform attack2_Pos;

    public ParticleSystem attack3_Effect;
    public Transform attack3_Pos;
    ParticleSystem nowAttack3Effect;

    public GameObject InvEffect;
    public Transform InvPos;
    GameObject nowInvEffect;


    public HealthObject healthInfo;

    public float hp;
    public Image hpBar;
    float HP {
        set {
            hp = Mathf.Max(value, 0);
            hpBar.fillAmount = hp / healthInfo.maxHp;
        }
    }

    public float def;
    public Image defBar;
    public float defScalePer {
        get {
            return healthInfo.defScale / 100.0f;
        }
    }
    float DEF {
        get {
            return def;
        }
        set {
            def = value;
            defBar.fillAmount = def / healthInfo.maxDef;
        }
    }
    public bool isNonDef => def <= 0;
    public bool isDie => hp <= 0;


    [SerializeField]
    float attackDelay;
    [SerializeField]
    float attackTimer;
    bool IsAttack
    {
        get {
            if (attackTimer >= attackDelay)
            {
                attackTimer = 0f;
                return true;
            }
            else
                return false;
        }
    }

    [SerializeField]
    float attack3_Delay;
    [SerializeField]
    float attack3_Timer;
    bool IsAttack3 {
        get {
            if (attack3_Timer >= attack3_Delay)
            {
                attack3_Timer = 0f;
                return true;
            }
            else
                return false;
        }
    }

    [SerializeField]
    float InvDelay;
    [SerializeField]
    float InvTimer;
    bool IsInv {
        get {
            if (InvTimer >= InvDelay)
            {
                InvTimer = 0f;
                return true;
            }
            else
                return false;
        }
    }

    public enum BossState
    {
        Move,
        Attack, //ÈÖµÎ¸£±â 
        Attack2, //ÈÖµÎ¸£±â 
        Attack3, //È¸Àü
        Aoe, //»þ¿ìÆÃ
        Invincible,
        Die,

    }

    Action NowUpdate;
    [SerializeField]
    BossState state;
    public BossState State {
        get { return state; }
        set {
            if (state == value)
                return;
            state = value;

            switch (state)
            {
                case BossState.Move:
                    animator.SetTrigger("Move");
                    pathFind.speed = healthInfo.speed;
                    pathFind.stoppingDistance = 25;
                    pathFind.isStopped = false;
                    NowUpdate = MoveUpdate;
                    break;
                case BossState.Attack:
                    pathFind.isStopped = true;
                    animator.SetTrigger("Attack");
                    NowUpdate = AttackUpdate;
                    break;
                case BossState.Attack2:
                    pathFind.isStopped = true;
                    animator.SetTrigger("Attack2");
                    NowUpdate = AttackUpdate;
                    break;
                case BossState.Attack3:
                    pathFind.isStopped = false;
                    pathFind.speed = healthInfo.speed * 2;
                    pathFind.stoppingDistance = 1;
                    animator.SetTrigger("Attack3");
                    NowUpdate = MoveAttackUpdate;
                    break;
                case BossState.Aoe:
                    pathFind.isStopped = true;
                    animator.SetTrigger("Aoe");
                    NowUpdate = AoeUpdate;
                    break;
                case BossState.Invincible:
                    pathFind.isStopped = true;
                    animator.SetTrigger("Invincible");
                    NowUpdate = InvincibleUpdate;
                    break;
                case BossState.Die:
                    pathFind.isStopped = true;
                    animator.SetTrigger("Die");
                    NowUpdate = DieUpdate;
                    break;

            }

        }
    }


    private void Awake()
    {
        animator = GetComponent<Animator>();
        pathFind = GetComponent<NavMeshAgent>();
        InitHealth();
    }
    private void Start()
    {
        players = GameObject.FindGameObjectsWithTag("Player").Select(t=>t.GetComponent<PlayerController>()).ToArray();
        FindPlayer();
        NowUpdate = MoveUpdate;
    }

    public void FindPlayer()
    {
        target = players.OrderBy(t => Vector3.Distance(transform.position, t.transform.position)).First();
    }

    private void FixedUpdate()
    {
        animator.SetFloat("speed", pathFind.velocity.magnitude);
        attackTimer += Time.deltaTime;
        attack3_Timer += Time.deltaTime;

        if(State != BossState.Invincible)
            InvTimer += def <= 0 ? Time.deltaTime : 0;

        NowUpdate();

        if(Input.GetKeyDown(KeyCode.Space))
        {
            DEF -= 10;
        }

    }

    public void MoveUpdate()
    {
        if(IsInv)
        {
            State = BossState.Invincible;
            return;
        }
        if (target != null)
        {
            pathFind.SetDestination(target.transform.position);
            transform.LookAt(target.transform);
        }

        if(IsAttack3)
        {
            State = BossState.Attack3;
            Debug.Log("A3");
        }
        else if(IsAttack)
        {
            Debug.Log("A12");
            var dis = Vector3.Distance(target.transform.position, transform.position);
            if (dis <= pathFind.stoppingDistance * 0.7f)
                State = BossState.Attack2;
            else if (dis <= pathFind.stoppingDistance)
                State = BossState.Attack;

        }
    }

    private void AoeUpdate()
    {
        if (target != null)
        {
            pathFind.SetDestination(target.transform.position);
        }
    }

    private void MoveAttackUpdate()
    {
        if (target != null)
        {
            pathFind.SetDestination(target.transform.position);
        }
    }

    private void AttackUpdate()
    {
        transform.LookAt(target.transform);
    }

    private void DieUpdate()
    {
    }

    private void InvincibleUpdate()
    {
        //DEF += Time.deltaTime * 10;
    }

    public void Hit(float dmg)
    {
    }

    public void Invincible()
    {
        nowInvEffect = Instantiate(InvEffect, InvPos);
    }

    public void Die()
    {
    }

    public void DieEnd()
    {
    }

    public void Attack()
    {
        var a = Instantiate(attack1_Effect, attack1_Pos.position,Quaternion.identity);
        a.transform.LookAt(target.transform);
    }

    public void Attack2()
    {
        var a = Instantiate(attack2_Effect, attack2_Pos.position, Quaternion.identity);
        a.transform.LookAt(target.transform);
        a.transform.Rotate(new Vector3(0, -90, 0));
    }

    public void Attack3()
    {
        nowAttack3Effect = Instantiate(attack3_Effect, attack3_Pos);
    }

    public void Aoe()
    {
    }

    public void SetMove()
    {
        Debug.Log("Move");
        State = BossState.Move;
        if (nowAttack3Effect != null)
        {
            var main = this.nowAttack3Effect.main;
            main.loop = false;
            main.stopAction = ParticleSystemStopAction.Destroy;
            nowAttack3Effect = null;
        }

        if (nowInvEffect != null)
        {
            Destroy(nowInvEffect);
            nowInvEffect = null;
        }
    }

    public void BorkenShield()
    {
        attack3_Timer = 0;
        State = BossState.Move;
    }
    public void InitHealth()
    {
        hp = healthInfo.maxHp;
        def = healthInfo.maxDef;
    }
}
