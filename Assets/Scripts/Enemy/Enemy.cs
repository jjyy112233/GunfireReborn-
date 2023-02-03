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

    public float hp;
    SpriteRenderer hpBar;
    float HP {
        set {
            hp = Mathf.Max(value, 0);
            hpBar.size = new Vector2(hp / healthInfo.maxHp, 1);
        }
    }

    public float def;
    SpriteRenderer defBar;
    public float defScalePer {
        get {
            return healthInfo.defScale / 100.0f;
        }
    }
    float DEF {
        set {
            def = value;
            defBar.size = new Vector2(def / healthInfo.maxDef, 1);
        }
    }
    public bool isNonDef => def <= 0;
    public bool isDie => hp <= 0;

    public enum EnemyState
    {
        None,
        Idle,
        Move,
        Critical,
        Attack,
        Skill,
        Die,
    }

    EnemyState state;
    public EnemyState State {
        get {
            return state;
        }
        set {
            if (state == value)
                return;

            state = value;
            switch (state)
            {
                case EnemyState.Idle:
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
                case EnemyState.Critical:
                    pathFinder.isStopped = true;
                    animator.SetTrigger("Critical");
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
                    if(OnDie != null)
                        OnDie();
                    if (OnDieRoom != null)
                        OnDieRoom(this);

                    animator.SetTrigger("Die");
                    break;

            }
        }
    }

    Action nowUpdate;

    //죽을때 템 드랍
    Action OnDie;
    Action<Enemy> OnDieRoom;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        pathFinder = GetComponent<NavMeshAgent>();
        State = EnemyState.Idle;
        nowUpdate = IdleUpdate;

        SetHpBar(transform.GetComponentInChildren<LookCamera>().hpBar);
        SetDefBar(transform.GetComponentInChildren<LookCamera>().defBar);
        InitHealth();

        OnDie += ItemSpawn;
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
        Hit(dmg);
        if (target == null)
        {
            target = nowTarget;
        }
        if (isDie)
        {
            Die();
            return;
        }

        State = stop? EnemyState.Critical : (State == EnemyState.Idle ? EnemyState.Move : State);
        

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
    void HitUpdate()
    {
        pathFinder.SetDestination(target.transform.position);
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
    
    void ItemSpawn()
    {
        var itemSpawnManager = GameObject.FindObjectOfType<ItemSpawnManager>();

        if (UnityEngine.Random.value < 0.7f)
        {
            itemSpawnManager.MakeItem(ItemSpawnManager.ItemType.Ammo, transform.localPosition + Vector3.up);
        }
        if (UnityEngine.Random.value < 0.3f)
        {
            itemSpawnManager.MakeItem(ItemSpawnManager.ItemType.Weapon, transform.localPosition + Vector3.up);
        }
        itemSpawnManager.MakeItem(ItemSpawnManager.ItemType.Coin, transform.localPosition + Vector3.up);
        if (UnityEngine.Random.value < 0.99f)
        {
            itemSpawnManager.MakeItem(ItemSpawnManager.ItemType.Food, transform.localPosition + Vector3.up);
        }
    }

    #region Health Info


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
                    var leftDmg = leftDef * (100.0f / healthInfo.defScale);

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

    public void InitHealth()
    {
        hp = healthInfo.maxHp;
        def = healthInfo.maxDef;
    }
    public void SetHpBar(SpriteRenderer sprite)
    {
        hpBar = sprite;
    }
    public void SetDefBar(SpriteRenderer sprite)
    {
        defBar = sprite;
    }
    #endregion

    public void AddDieEvent(Action<Enemy> dieEvent)
    {
        OnDieRoom += dieEvent;
    }
}
