using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookCamera : MonoBehaviour
{
    Transform cameraTr;
    public SpriteRenderer hpBar;
    public SpriteRenderer defBar;

    private void Start()
    {
        cameraTr = FindObjectOfType<StageManager>().mainCam.transform;
    }
    private void Update()
    {
       transform.LookAt(cameraTr.transform);
    }
}
