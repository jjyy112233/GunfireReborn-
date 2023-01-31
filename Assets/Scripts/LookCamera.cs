using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookCamera : MonoBehaviour
{
    Transform cameraTr;
    public SpriteRenderer hpBar;
    public SpriteRenderer defBar;

    private void Awake()
    {
        cameraTr = Camera.main.transform;
    }
    private void Update()
    {
       transform.LookAt(cameraTr);
    }
}
