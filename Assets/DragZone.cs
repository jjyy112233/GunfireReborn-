using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class DragZone : MonoBehaviour
{
    public bool isTouch;
    public Image dragezone;
    public PlayerController player;
    public int idx;

    public void MouseDrag()
    {
        isTouch = true;
        Debug.Log("MouseDrag");
        player.drageMath(Input.GetTouch(idx).deltaPosition);
    }
    public void MouseDown()
    {
        idx = Input.touchCount - 1;
        isTouch = true;
        Debug.Log("MouseDown");
    }

    public void MouseUp()
    {
        Debug.Log("MouseUp");
        isTouch = false;
        idx = -1;
    }
    public void MouseExit()
    {
        Debug.Log("MouseExit");
        isTouch = false;
        idx = -1;
    }
}
