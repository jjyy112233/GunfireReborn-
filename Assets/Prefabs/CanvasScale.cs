using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasScale : MonoBehaviour
{
    //Default �ػ� ����
    float fixedAspectRatio = 16f / 9f;

    //���� �ػ��� ����
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
