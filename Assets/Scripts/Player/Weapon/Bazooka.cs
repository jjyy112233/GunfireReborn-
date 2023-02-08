using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Bazooka : MonoBehaviour
{
    Rigidbody rb;
    public float speed;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    private void FixedUpdate()
    {
        rb.AddForce(transform.forward * speed);
    }
}
