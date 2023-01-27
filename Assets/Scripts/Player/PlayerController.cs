using System;
using System.Collections;
using System.Collections.Generic;
using TMPro.EditorUtilities;
using UnityEditor.SceneManagement;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Gun gun;
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

    ActionDelegate DJump;
    ActionDelegate DJumpEnd;
    ActionDelegate DRolling;

    STATE State {
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
    }
    Dictionary<STATE, ObjectAction> allStates = new Dictionary<STATE, ObjectAction>();

    private void Awake()
    {
        var movement = new Movement(transform);
        allStates[STATE.Move] = movement;
        allStates[STATE.Victory] = new Victory(transform);
        allStates[STATE.Die] = new Die(transform);

        currentAction = allStates[STATE.Move];
        DJump = movement.Jump;
        DJumpEnd = movement.JumpEnd;
        DRolling = movement.Rolling;
        FindGun();

    }

    private void Update()
    {
        currentAction.Update();

        if(Input.GetMouseButton(0))
        {
            Fire();
        }
    }
    public void JumpEnd() //Animaton Event
    {
        if(currentState == STATE.Move)
        {
            DJumpEnd();
        }
    }
    public void Jump()
    {
        DJump();
    }

    public void Rolling()
    {
        DRolling();
    }

    public void Fire() //사격 애니메이션
    {
        gun.Fire();
    }
    public void FireBullet() //애니메이션에서 불러오는 함수. 총알 생성
    {
        gun.FireBullet();
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
                gun.SingleFireAnimation = delegate { transform.GetComponent<Animator>().SetTrigger("FireSingle"); };
                break;
            }
        }
    }
}