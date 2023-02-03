#define Debug

using System.Runtime.InteropServices;
using UnityEngine;

public class Movement : ObjectAction 
{
    float moveSpeed = 10f;
    bool isJump;
    float fireDelay = 0.3f;
    float fireTimer = 0f;

    Transform player;
    PlayerInput playerInput;
    Rigidbody playerRigidBody;
    Animator playerAnimator;
    SphereCollider rollingCol;

    Camera camera;
    float aimSen = 2f;
    float rotateSpeed = 180f;

    float camX = 0f;
    float camY = 0f;


    public Movement(Transform p)
    {
        player = p;
        playerInput = p.GetComponent<PlayerInput>();
        playerRigidBody = p.GetComponent<Rigidbody>();
        playerAnimator = p.GetComponent<Animator>();
        rollingCol = player.GetComponent<SphereCollider>();
        camera = Camera.main;


        playerAnimator.SetTrigger("Stage");
    }


    public void Rolling()
    {
        rollingCol.enabled = true;
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

    public void RollingEnd()
    {
        rollingCol.enabled = false;
    }

    void Move()
    {
        var forward = Camera.main.transform.forward;
        forward.y = 0f;
        forward.Normalize();

        var side = Camera.main.transform.right;
        side.y = 0f;
        side.Normalize();

#if Debug
        var moveV = Input.GetAxisRaw("Vertical");
        var moveH = Input.GetAxisRaw("Horizontal");
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

        playerRigidBody.AddForce(delta * 2000);
        //playerRigidBody.MovePosition(playerRigidBody.position + delta);
        playerAnimator.SetFloat("Move", dir.magnitude);
    }

    private float xRotate = 0.0f; // 내부 사용할 X축 회전량은 별도 정의 ( 카메라 위 아래 방향 )
    void LookJoystick()
    {

#if Debug2
        var ver = Input.GetAxis("Mouse Y");
        var hor = Input.GetAxis("Mouse X");
#else
        if (!playerInput.shot_joystick.isDown)
            return;

        var ver = playerInput.shot_joystick.Vertical;
        var hor = playerInput.shot_joystick.Horizontal;
        
#endif
        camX += ver;
        //camX = Mathf.Clamp(camX, -30, 30);

        camY += hor;

        camera.transform.localRotation = Quaternion.Euler(-camX, 0, 0);
        playerAnimator.SetFloat("CamX", camX/90);

        player.transform.rotation = Quaternion.Euler(0, camY, 0);

        if (camY > 360)
            camY -= 360;
        if (camY < -360)
            camY += 360;
    }

    public void MoveUpdate()
    {
        Move();
        LookJoystick();
        fireTimer += Time.deltaTime;

        if (isJump)
            playerAnimator.SetFloat("JumpVelocity", playerRigidBody.velocity.y);
    }

    public void Jump()
    {
        if (isJump)
        {
            return;
        }
        playerAnimator.SetTrigger("Jump");
        isJump = true;
        playerRigidBody.AddForce(Vector3.up * 200);
    }
    public void JumpEnd() //Animaton Event
    {
        isJump = false;
    }

    public void Reload()
    {
        Debug.Log("Reload");
        playerAnimator.SetTrigger("Reload");
    }
}
