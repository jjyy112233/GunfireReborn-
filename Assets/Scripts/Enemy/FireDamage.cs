using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDamage : MonoBehaviour
{
    Enemy enemy;
    Coroutine dmgCoroutine;
    private void Awake()
    {
        enemy = transform.parent.GetComponent<Enemy>();
    }
    private void OnEnable()
    {
        StartCoroutine(SetActive(false, 1f));
        dmgCoroutine = StartCoroutine(SetActive());
    }

    IEnumerator SetActive(bool state, float timer)
    {
        var prevTime = Time.time;
        while(true)
        {
            yield return null;
            if( Time.time - prevTime > timer)
            {
                break;
            }
        }
        gameObject.SetActive(false);
        StopCoroutine(dmgCoroutine);
    }

    IEnumerator SetActive()
    {
        while(true)
        {
            enemy.Hit(2);
            yield return new WaitForSeconds(0.1f);
        }
    }
}
