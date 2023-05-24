using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class mCameraController : MonoBehaviour
{

    Vector3 FirstPoint;
    Vector3 SecondPoint;
    float xAngle;
    float yAngle;
    float xAngleTemp;
    float yAngleTemp;

    [HideInInspector]
    public bool isCanRotate = true;
    private bool isMouseDown = false;

    Camera mainCam;
    private void Awake()
    {
        mainCam = Camera.main;
    }
    void Start()
    {
        xAngle = mainCam.transform.rotation.x;
        yAngle = mainCam.transform.rotation.y;
    }

    void Update()
    {
        if (isCanRotate != false)
        {

#if (UNITY_ANDROID || UNITY_IPHONE) && !UNITY_EDITOR
            if (Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    FirstPoint = Input.GetTouch(0).position;
                    xAngleTemp = xAngle;
                    yAngleTemp = yAngle;
                }
                if (Input.GetTouch(0).phase == TouchPhase.Moved)
                {
                    SecondPoint = Input.GetTouch(0).position;
                    xAngle = xAngleTemp + (SecondPoint.x - FirstPoint.x) * 180 / Screen.width;
                    yAngle = yAngleTemp - (SecondPoint.y - FirstPoint.y) * 90 * 3f / Screen.height; // Y값 변화가 좀 느려서 3배 곱해줌.

                    // 회전값을 40~85로 제한
                    if (yAngle < 40f)
                        yAngle = 40f;
                    if (yAngle > 85f)
                        yAngle = 85f;

                    transform.rotation = Quaternion.Euler(yAngle, xAngle, 0.0f);
                }
            }
#else
            // 마우스가 눌림
            if (Input.GetMouseButtonDown(0))
            {
                FirstPoint = Input.mousePosition;
                xAngleTemp = xAngle;
                yAngleTemp = yAngle;
                isMouseDown = true;
            }

            // 마우스가 떼짐
            if (Input.GetMouseButtonUp(0))
            {
                isMouseDown = false;
            }

            if (isMouseDown)
            {
                SecondPoint = Input.mousePosition;
                xAngle = xAngleTemp + (SecondPoint.x - FirstPoint.x) * 180 / Screen.width;
                yAngle = yAngleTemp - (SecondPoint.y - FirstPoint.y) * 90 * 3f / Screen.height; // Y값 변화가 좀 느려서 3배 곱해줌.

                if (yAngle > 360)
                    yAngle -= 360;
                if (yAngle < -360)
                    yAngle += 360;

                mainCam.transform.rotation = Quaternion.Euler(yAngle, xAngle, 0.0f);
            }
#endif
        }
    }

}