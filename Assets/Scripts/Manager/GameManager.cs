using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.SubsystemsImplementation;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public int charactorIdx;

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
}
