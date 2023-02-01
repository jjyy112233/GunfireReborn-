using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Gun : MonoBehaviour
{
    public Transform pivot;
    public GameObject fireParticle;

    //��ũ���ͺ�� �����
    public float fireTimer = 0;
    public WeaponData data;

    public delegate void PlayerAnimation();
    public PlayerAnimation SingleFireAnimation;

    public PlayerController player;
    public PlayerInput playerInput;
    public Animator playerAnimator;

    private void Start()
    {
        player = gameObject.GetComponentInParent<PlayerController>();
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
        if (fireTimer > data.delay)
        {
            fireTimer = 0f;
            playerAnimator.SetTrigger("FireSingle");

            RaycastHit hit;
            Vector3 hitPos = Vector3.zero;
            var ray = new Ray(pivot.position, Camera.main.transform.forward);

            if (Physics.Raycast(ray, out hit, Mathf.Infinity))
            {
                var forward = hit.point - transform.position;
                forward.y = 0;
                forward.Normalize();

                var enemy = hit.transform.GetComponent<Enemy>();
                if (enemy != null)
                {
                    enemy.Hit(player, data.dmg, hit.collider.transform.CompareTag("EnemyHead"));
                    Debug.Log(hit.collider.name);
                }
            }
        }
    }
    public void FireBullet()
    {
        //Debug.Log("Test: " + Time.time);
        Instantiate(fireParticle, pivot.position, transform.rotation);
    }
}
