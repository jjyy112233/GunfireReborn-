using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Gun : MonoBehaviour
{
    public Transform pivot;
    public GameObject fireParticle;

    //스크립터블로 만들기
    public int damage;
    public float fireTimer = 0;
    public float shotDelay;
    public int speed;
    public int ammo;

    public delegate void PlayerAnimation();
    public PlayerAnimation SingleFireAnimation;

    private void Awake()
    {
    }
    private void Update()
    {
        fireTimer += Time.deltaTime;
    }
    public void FireStart()
    {

    }
    public void Fire() //일정시간마다 애니메이션 반복
    {
        if (fireTimer > shotDelay)
        {
            fireTimer = 0f;
            SingleFireAnimation();
        }
    }
    public void FireBullet()
    {
        Debug.Log("Test");
        Instantiate(fireParticle, pivot.position, Quaternion.identity);
    }
}
