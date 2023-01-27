using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Gun : MonoBehaviour
{
    public Transform pivot;
    public GameObject fireParticle;

    //��ũ���ͺ�� �����
    public int damage;
    public float fireTimer = 0;
    public float shotDelay;
    public int speed;
    public int ammo;

    public delegate void PlayerAnimation();
    public PlayerAnimation SingleFireAnimation;

    public PlayerInput playerInput;
    public Animator playerAnimator;

    private void Start()
    {
        playerInput = gameObject.GetComponentInParent<PlayerInput>();
        playerAnimator = playerInput.transform.GetComponent<Animator>();    
    }
    private void Update()
    {
        fireTimer += Time.deltaTime;
        if (playerInput.shot_joystick.isDown)
            Fire();
    }
    public void Fire() //�����ð����� �ִϸ��̼� �ݺ�
    {
        if (fireTimer > shotDelay)
        {
            fireTimer = 0f;
            playerAnimator.SetTrigger("FireSingle");
            Debug.Log(Time.time);
        }
    }
    public void FireBullet()
    {
        Debug.Log("Test: " + Time.time);
        Instantiate(fireParticle, pivot.position, Quaternion.identity);
    }
}
