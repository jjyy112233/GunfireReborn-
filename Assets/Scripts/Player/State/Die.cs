using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Die : ObjectAction
{
    Transform player;
    Animator playerAnimator;

    public Die(Transform p)
    {
        player = p;
        playerAnimator = p.GetComponent<Animator>();
    }
    public void Update()
    {

    }
}
