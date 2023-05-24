using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasScale : MonoBehaviour
{
    //Default 해상도 비율
    float fixedAspectRatio = 16f / 9f;

    //현재 해상도의 비율
    float currentAspectRatio = (float)Screen.width / (float)Screen.height;
    CanvasScaler thisCanvas;

    private void Awake()
    {
        thisCanvas = GetComponent<CanvasScaler>();

        if (currentAspectRatio > fixedAspectRatio)
            thisCanvas.matchWidthOrHeight = 0;
        else if (currentAspectRatio < fixedAspectRatio) 
            thisCanvas.matchWidthOrHeight = 1;
    }
}
