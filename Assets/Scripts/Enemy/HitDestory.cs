using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitDestory : MonoBehaviour
{
    public GameObject broken;
    public void OnHit()
    {
        transform.GetComponentInParent<ShieldZam>().BrokenZam(gameObject);
        Instantiate(broken, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }
}
