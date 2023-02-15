using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public Gun gun;
    public Transform handR;
    public Transform handL;

    public PlayerInfo healthInfo;
    public Level level;
    public Transform mainCamPos;

    public enum STATE
    {
        None = -1,
        Move,
        Victory,
        Die,
        Count,
    }

    ObjectAction currentAction;
    STATE currentState;

    delegate void ActionDelegate();

    // ���߿� �ؿ� �ִ� �Լ� �� �����ϰ� movement�� �ִ� �Լ��� ��ư�� ��������.
    ActionDelegate DJumpEnd;
    ActionDelegate DRollingEnd;

    StageManager stageManager;
    public STATE State {
        set {
            switch(value)
            {
                case STATE.Move:
                    currentState = value;
                    currentAction = allStates[currentState];
                    break;
                case STATE.Victory:
                    currentState = value;
                    currentAction = allStates[currentState];
                    break;
                case STATE.Die:
                    currentState = value;
                    currentAction = allStates[currentState];
                    break;
            }
        }
        get {
            return currentState;
        }
    }

    Dictionary<STATE, ObjectAction> allStates = new Dictionary<STATE, ObjectAction>();

    public TextMeshProUGUI coinTxt;
    public int coin;

    Movement movement;
    public Camera cam {
        get {
            return movement.camera;
        }
        set {
            movement.camera = value;
        }
    }

    Image rollingDelay;

    public bool isReload => movement.isReload;
    public bool isRolling => movement.isRolling;

    public Action<Vector3> drageMath;

    private void Awake()
    {
        DontDestroyOnLoad(this);
        movement = new Movement(transform);
        drageMath = movement.LookDrag;
        allStates[STATE.Move] = movement;
        allStates[STATE.Victory] = new Victory(transform);
        allStates[STATE.Die] = new Die(transform);

        currentAction = allStates[STATE.Move];
        DJumpEnd = movement.JumpEnd;
        DRollingEnd = movement.RollingEnd;

        healthInfo.SetHpBar(GameObject.FindGameObjectWithTag("PlayerHP").GetComponent<Image>());
        healthInfo.SetDefBar(GameObject.FindGameObjectWithTag("PlayerDEF").GetComponent<Image>());
        healthInfo.Init();

        FindGun();

        stageManager = GameObject.FindObjectOfType<StageManager>();
        stageManager.Reload.onClick.AddListener(movement.Reload);
        stageManager.Jump.onClick.AddListener(movement.Jump);
        stageManager.Rolling.onClick.AddListener(movement.Rolling);
        stageManager.Inven.onClick.AddListener(SetInven);
        rollingDelay = stageManager.RollingDelay;
    }
    private void FixedUpdate()
    {
        var rSacle = Mathf.Max(1 - movement.RollingScale, 0);
        rollingDelay.fillAmount = rSacle;
        currentAction.MoveUpdate();

        if(Input.GetKeyDown(KeyCode.Tab))
        {
            SetInven();
        }
    }
    public void SetInven()
    { 
            GameObject.FindObjectOfType<StageManager>().SetUserInven();
    }

    public void JumpEnd() //Animaton Event
    {
        DJumpEnd();
    }
    public void RollingEnd()
    {
        DRollingEnd();
    }
    public void Fire() //��� �ִϸ��̼�
    {
        gun.Fire();
    }
    public void FireBullet() //�ִϸ��̼ǿ��� �ҷ����� �Լ�. �Ѿ� ����
    {
        gun.FireBullet();
    }

    public void ReloadEnd()
    {
        movement.isReload = false;
        Debug.Log("ReloadEnd");
        gun.Reload();
    }
    public void Hit(GameObject attackObj, float damage)
    {
        healthInfo.Hit(damage);
        if(healthInfo.isDie)
        {
            GameManager.instance.LoadScene("Lobby");
        }
    }

    void FindGun()
    {
        var guns = GetComponentsInChildren<Gun>();
        Debug.Log(guns.Length);
        foreach(var gun in guns)
        {
            if(gun.gameObject.activeSelf)
            {
                this.gun = gun;
                break;
            }
        }
    }

    public void AddCoin(int g)
    {
        coin += g * (level.IsScroll(Scroll.GoldMaster) ? 1 : 2);
        coinTxt.text = coin.ToString();
    }
    public void AddFood(int h)
    {
        healthInfo.AddHp(h);
    }
}