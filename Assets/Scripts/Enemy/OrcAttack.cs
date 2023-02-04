using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrcAttack : MonoBehaviour
{
    Rigidbody rb;
    public GameObject destoryEffect;
    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        Destroy(gameObject, 10f);
    }
    private void FixedUpdate()
    {
        rb.AddForce(transform.forward * 2);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(!collision.collider.CompareTag("EnemyBody"))
        {
            Debug.Log("Col");
            var d = Instantiate(destoryEffect);
            d.transform.position = transform.position + new Vector3(0,0.5f,0);
            //d.transform.rotation = transform.rotation;
            //d.transform.Rotate(new Vector3(180,0,0));

            //Hit Player
            Destroy(gameObject);
        }
    }
}
