using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MagicBall : MonoBehaviour
{
    public GameObject Charge;
    public GameObject Fire;
    public Enemy parent;
    public Rigidbody rb;

    GameObject target;

    bool isMove = false;

    public void OnFire()
    {
        Charge.SetActive(false); 
        Fire.SetActive(true);

        isMove = true;
        Destroy(gameObject, 3f);
    }

    private void FixedUpdate()
    {
        if(!isMove)
        {
            transform.LookAt(target.transform);
        }
        if (isMove)
        {
            rb.AddForce(transform.forward * 20);
        }
    }

    public void OnTriggerEnter(Collider other)
    {
        if(isMove && other.CompareTag("Player"))
        {
            other.GetComponent<PlayerController>().Hit(parent.gameObject, parent.healthInfo.damage1);
            Destroy(gameObject);
        }
    }

    public void SetTarget(GameObject target)
    {
        this.target = target;
    }

    public void SetParent(Enemy p)
    {
        parent = p;
    }
}
