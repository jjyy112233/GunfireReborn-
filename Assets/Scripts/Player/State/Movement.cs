#define Debug

using System.Runtime.InteropServices;
using UnityEngine;

public class Movement : ObjectAction 
{
    float moveSpeed = 10f;
    float MoveSpeed {
        get {
            return moveSpeed * playerController.level.SpeedLevel;
        }
    }
    bool isJump;
    public bool isReload;
    public bool isRolling;

    float rollingDelay = 3f;    
    float rollingTimer = 0;
    public float RollingScale {
        get {
           return rollingTimer / rollingDelay;
        }
    }

    Transform player;
    PlayerInput playerInput;
    PlayerController playerController;
    Rigidbody playerRigidBody;
    Animator playerAnimator;
    SphereCollider rollingCol;

    public Camera camera;

    float aimSen = 2f;
    float rotateSpeed = 180f;

    float camX = 0f;
    float camY = 0f;


    public Movement(Transform p)
    {
#if Debug
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
#endif
        player = p;
        playerInput = p.GetComponent<PlayerInput>();
        playerController = p.GetComponent<PlayerController>();
        playerRigidBody = p.GetComponent<Rigidbody>();
        playerAnimator = p.GetComponent<Animator>();
        rollingCol = player.GetComponent<SphereCollider>();

        playerAnimator.SetTrigger("Stage");
        rollingTimer = rollingDelay;
    }


    public void Rolling()
    {
        if (isRolling)
            return;
        if (rollingTimer < rollingDelay)
        {
            return;
        }

        isRolling = true;
        rollingTimer = 0f;
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
        isRolling = false;
        rollingCol.enabled = false;
    }

    void Move()
    {
        var forward =camera.transform.forward;
        forward.y = 0f;
        forward.Normalize();

        var side = camera.transform.right;
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
        var delta = dir * MoveSpeed * Time.deltaTime;
        delta.y = 0;

        playerRigidBody.AddForce(delta * 2000);
        //playerRigidBody.MovePosition(playerRigidBody.position + delta);
        playerAnimator.SetFloat("Move", dir.magnitude);
    }

    private float xRotate = 0.0f; // 내부 사용할 X축 회전량은 별도 정의 ( 카메라 위 아래 방향 )
    void LookJoystick()
    {

#if Debug

        var ver = Input.GetAxis("Mouse Y");
        var hor = Input.GetAxis("Mouse X");
#else
        if (!playerInput.shot_joystick.isDown)
            return;

        var ver = playerInput.shot_joystick.Vertical;
        var hor = playerInput.shot_joystick.Horizontal;
        
#endif
        camX += ver;
        camX = Mathf.Clamp(camX, -30, 30);

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
        if (GameManager.instance.MapMove)
        {
            Move();
            LookJoystick();
        }

        rollingTimer += Time.deltaTime * (playerController.level.IsScroll(Scroll.RollingMaster) ? 2f : 1);

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
        if (isReload)
            return;
        isReload = true;
        playerAnimator.SetTrigger("Reload");
    }
}
