using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Victory : ObjectAction
{
    Transform player;
    Animator playerAnimator;
    Camera camera;

    public Victory(Transform p)
    {
        player = p;
        playerAnimator = p.GetComponent<Animator>();
        camera = Camera.main;
    }
    public void Update()
    {

    }
}
