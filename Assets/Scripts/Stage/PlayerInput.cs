using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInput : MonoBehaviour
{
    public VariableJoystick move_joystick;
    public VariableJoystick shot_joystick;

    public bool fire { get; set; }

    private void Awake()
    {
        move_joystick = GameObject.FindGameObjectWithTag("LeftJoyStick").GetComponent<VariableJoystick>();
        shot_joystick = GameObject.FindGameObjectWithTag("RightJoyStick").GetComponent<VariableJoystick>();
    }
}
