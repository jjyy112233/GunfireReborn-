using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;

public abstract class Item : MonoBehaviour
{
    Rigidbody itemRiginbody;
    bool isTarget = false;

    PlayerController[] players;
    PlayerController target;

    public abstract void ItemEffect();
    private void Awake()
    {
        itemRiginbody = GetComponent<Rigidbody>();
    }
    private void Start()
    {
        var randX = Random.Range(-200, 200);
        var randZ = Random.Range(-200, 200);
        itemRiginbody.AddForce(new Vector3(randX, 300, randZ));

        players = GameObject.FindGameObjectsWithTag("Player").Select(t=>t.GetComponent<PlayerController>()).ToArray();
    }
    private void FixedUpdate()
    {
        if (isTarget)
            return;

        foreach(var player in players)
        {
            var dis = Vector3.Distance(player.transform.position, transform.position);

            if(dis < 10 )
            {
                isTarget = true;
                target = player;
                StartCoroutine(MoveToPlayer());
                return;
            }
        }
    }

    IEnumerator MoveToPlayer()
    {
        while(true)
        {
            transform.position = Vector3.MoveTowards
                (transform.position, target.transform.position, Time.deltaTime * 10);

            if (Vector3.Distance(transform.position, target.transform.position) < 1)
            {
                ItemEffect();
                Destroy(gameObject);
            }
            yield return null;
        }
    }

}
