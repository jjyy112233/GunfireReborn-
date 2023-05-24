using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldZam : MonoBehaviour
{
    public List<GameObject> zams;

    public void BrokenZam(GameObject zam)
    {
        zams.Remove(zam);
        if(zams.Count == 0)
        {
            transform.GetComponentInParent<Boss>().BorkenShield();
            Destroy(gameObject);
        }
    }
}
