#define Debug

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

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
#if Debug2
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
        if (fireTimer > data.delay)
        {
            fireTimer = 0f;
            playerAnimator.SetTrigger("FireSingle");

            {
                var hits = Physics.RaycastAll(Camera.main.transform.position, Camera.main.transform.forward, Mathf.Infinity);
                for (int i = 0; i < hits.Length; i++)
                {
                    if (Input.GetKey(KeyCode.Space))
                        hits[i].transform.name = "TEST_RAY";
                    Debug.Log(hits[i].transform.name);
                }
            }

            RaycastHit hit;
            var ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

            if (Physics.Raycast(ray, out hit, Mathf.Infinity, layer))
                {
                var forward = hit.point - transform.position;
                forward.y = 0;
                forward.Normalize();

                var enemy = hit.transform.GetComponent<Enemy>();
                if (enemy != null)
                {
                    enemy.Hit(player, data.dmg, hit.collider.transform.CompareTag("EnemyHead"));
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
