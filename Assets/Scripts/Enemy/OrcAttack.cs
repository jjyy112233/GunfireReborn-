using DungeonArchitect.Samples.ShooterGame;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class OrcAttack : MonoBehaviour
{
    Rigidbody rb;
    public GameObject destoryEffect;
    public HealthObject healthInfo;

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
        if (!collision.collider.CompareTag("EnemyBody"))
        {
            var d = Instantiate(destoryEffect);
            d.transform.position = transform.position;

            var players = Physics.SphereCastAll(transform.position, 3, Vector3.up, 0).
                Where(t => t.collider.transform.GetComponent<PlayerController>()).
                Select(t => t.collider.transform.GetComponent<PlayerController>());

            Debug.Log(players.Count());
            foreach (var p in players)
            {
                Debug.Log(p.transform.name);
                p.Hit(null, healthInfo.damage1);
            }
            transform.GetComponentInChildren<Collider>().enabled = false;
        }
        Destroy(gameObject);
    }
}
