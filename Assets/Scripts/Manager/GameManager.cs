using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.SubsystemsImplementation;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public int charactorIdx;
    public bool MapMove {
        get {
            return !Cursor.visible;
        }
    }

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(instance.gameObject);
        }
    }

    public void MouseLock(bool state)
    {
        Cursor.visible = !state;
        Cursor.lockState = state ? CursorLockMode.Locked : CursorLockMode.Confined;
    }
}
