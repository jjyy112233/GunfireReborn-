using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DragZone : MonoBehaviour
{
    public bool isTouch;
    public Image dragezone;
    public Touch nowTouch;

    public void MouseDrag()
    {
        nowTouch = Input.GetTouch(Input.touchCount - 1);
    }
    public void MouseDown()
    {
        isTouch = true;
        nowTouch = Input.GetTouch(Input.touchCount - 1);
    }

    public void MouseUp()
    {
        isTouch = false;
        nowTouch = new Touch();
    }
    public void MouseExit()
    {
        isTouch = false;
        nowTouch = new Touch();
    }
}
