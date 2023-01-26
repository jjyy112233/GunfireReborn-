#define Debug

using Newtonsoft.Json.Serialization;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerController : MonoBehaviour
{
    public enum STATE
    {
        Move,
        Jump,
        Die,
    }

    PlayerInput playerInput;

    public float moveSpeed = 10f;
    public float rotateSpeed = 180f;

    Rigidbody playerRigidBody;
    Animator playerAnimator;

    Camera camera;
    float aimSen = 2f;

    STATE m_state;
    STATE State {
        set {
            switch (value)
            {
                case STATE.Move:
                    break;
                case STATE.Jump:
                    break;
                case STATE.Die:
                    break;
                default:
                    break;
            }
        }
    }

    void Start()
    {
        playerInput = GetComponent<PlayerInput>();
        playerRigidBody = GetComponentInChildren<Rigidbody>();
        playerAnimator = GetComponent<Animator>();
        camera = Camera.main;

        playerAnimator.SetTrigger("Stage");
    }

    private void FixedUpdate() //물리 갱신 주기마다 업데이트
    {
        Move();
        LookJoystick();
    }

    private void Move()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Rolling();
        }

        var forward = Camera.main.transform.forward;
        forward.y = 0f;
        forward.Normalize();

        var side = Camera.main.transform.right;
        side.y = 0f;
        side.Normalize();

#if Debug
        var moveV = Input.GetAxisRaw("Vertical");
        var  moveH = Input.GetAxisRaw("Horizontal");
        var dir = forward * moveV;
            dir += side * moveH;
#else
        var dir = forward * playerInput.move_joystick.Vertical;
        dir += side * playerInput.move_joystick.Horizontal;
#endif
        if (dir.magnitude > 1)
        {
            dir.Normalize();
        }
        var delta = dir * moveSpeed * Time.deltaTime;

        playerRigidBody.MovePosition(playerRigidBody.position + delta);
        playerAnimator.SetFloat("Move", dir.magnitude);
    }

    // 카메라 x축 회전의 경우 회전 범위를 설정
    private float ClampAngle(float angle, float min, float max)
    {
        if (angle < -360)
        {
            angle += 360;
        }

        if (angle > 360)
        {
            angle -= 360;
        }

        return Mathf.Clamp(angle, min, max);
    }

    float camX = 0f;
    float camY = 0f;
    void LookJoystick()
    {
        var ver  = playerInput.shot_joystick.Vertical;
        var hor = playerInput.shot_joystick.Horizontal;
        //transform.Rotate(new Vector3(0, hor, 0));

        camX += ver;
        camX = Mathf.Clamp(camX, -30, 30);

        camY += hor;

        camera.transform.localRotation = Quaternion.Euler(-camX, 0, 0);
        transform.rotation = Quaternion.Euler(0, camY, 0);

        if (camY > 360)
            camY -= 360;
        if (camY < -360)
            camY += 360 ;
    }
    void Shot()
    {

    }

    void Rolling()
    {
        var hor = Mathf.Abs(playerInput.move_joystick.Horizontal);
        var ver = Mathf.Abs(playerInput.move_joystick.Vertical);

        var isVer = ver > hor;
        var isHor = ver < hor;
        var isFWD = playerInput.move_joystick.Vertical > 0;
        var isRight = playerInput.move_joystick.Horizontal > 0;

        ver = isVer ? (isFWD ? 1 : -1) : 0;
        hor = isHor ? (isRight ? 1 : -1) : 0;

        playerAnimator.SetFloat("Vertical", ver);
        playerAnimator.SetFloat("Horizontal", hor);
        playerAnimator.SetTrigger("Dash");
        return;
    }
}
