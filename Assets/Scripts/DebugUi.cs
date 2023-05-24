using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DebugUi : MonoBehaviour
{
    public KeyCode KeyCode;
    Button btn;
    private void Awake()
    {
        btn = GetComponent<Button>();
    }
    private void FixedUpdate()
    {
        if(Input.GetKeyDown(KeyCode))
        {
            if(KeyCode == KeyCode.Tab)
            {
                Debug.Log("TEST");
            }
            btn.onClick.Invoke();
        }
    }
}
