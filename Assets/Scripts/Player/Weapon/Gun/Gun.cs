#define Debug
#define Debug
using Newtonsoft.Json.Schema;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    public Transform pivot;
    public GameObject fireParticle;
    public WeaponButton weaponButton;

    float fireTimer = 0;
    public WeaponData data;

    PlayerController player;
    PlayerInput playerInput;
    Animator playerAnimator;
    WeaponManager weaponManager;

    public LayerMask layer;

    float Delay { get { return data.delay * player.level.FireLevel; } }
    float Damamge { get { return data.dmg * player.level.DmgLevel; } }

    [SerializeField]
    int ammo;
    public int Ammo {
        get { return ammo; }
        set {
            ammo = value;
            weaponManager.SetAmmo(ammo);
        }
    }
    private void Awake()
    {
        weaponManager = FindObjectOfType<WeaponManager>();
    }
    private void Start()
    {
        player = gameObject.GetComponentInParent<PlayerController>();
        playerInput = gameObject.GetComponentInParent<PlayerInput>();
        playerAnimator = playerInput.transform.GetComponent<Animator>();
    }
    private void Update()
    {
        fireTimer += Time.deltaTime;
#if Debug
        if (Input.GetMouseButton(0))
#else
        if (playerInput.shot_joystick.isDown)
#endif
            Fire();


        // Debug.DrawRay(Camera.main.transform.position, Camera.main.transform.localPosition + Camera.main.transform.forward * 1000);
    }
    public void Fire() //일정시간마다 애니메이션 반복
    {
        if (Ammo == 0)
            return;
        if (fireTimer > Delay)
        {
            fireTimer = 0f;
            playerAnimator.SetTrigger("FireSingle");

            RaycastHit hit;
            var ray = new Ray(player.cam.transform.position, player.cam.transform.forward);

            if (Physics.Raycast(ray, out hit, Mathf.Infinity, layer))
                {
                var forward = hit.point - transform.position;
                forward.y = 0;
                forward.Normalize();

                var enemy = hit.transform.GetComponent<Enemy>();
                if (enemy != null)
                {
                    Debug.Log(Damamge);
                    enemy.Hit(player, Damamge, hit.collider.transform.CompareTag("EnemyHead"));
                }

                var boss = hit.transform.GetComponent<Boss>();
                if(boss != null)
                {
                    boss.Hit(Damamge * (hit.collider.transform.CompareTag("EnemyHead") ? 2f : 1f));
                    Debug.Log(hit.collider.transform.tag);
                }

                var hitDesObj = hit.collider.transform.GetComponent<HitDestory>();
                if (hitDesObj != null)
                {
                    hitDesObj.OnHit();
                    Debug.Log(hit.collider.transform.tag);
                }
            }
        }
    }

    public void FireBullet()
    {
        //Debug.Log("Test: " + Time.time);
        Instantiate(fireParticle, pivot.position, transform.rotation);

        Ammo -= data.useAmmo;
        weaponManager.SetAmmo(Ammo);
    }
    public void Reload()
    {
        if(!weaponButton.isDefault)
            weaponManager.UseMyAmmo(data.type, data.reloadAmmo - Ammo);
        Ammo = data.reloadAmmo;
        weaponManager.SetAmmo(Ammo);
    }
}
