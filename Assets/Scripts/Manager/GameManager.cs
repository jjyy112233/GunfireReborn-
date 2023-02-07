using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SubsystemsImplementation;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public StageManager stageManager;

    public int charactorIdx;
    public bool MapMove {
        get {
            return !Cursor.visible;
        }
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        Debug.Log(scene.name + "으로 변경되었습니다.");
        if (stageManager != null)
        {
            Debug.Log("stageManager" + "init");
            if(string.Compare(scene.name, "Lobby") != 0)
               stageManager.Init();
        }
    }
    private void OnDisable()
    {
        SceneManager.sceneLoaded-= OnSceneLoaded;
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
            Destroy(gameObject);
        }
    }

    public void MouseLock(bool state)
    {
        Cursor.visible = !state;
        Cursor.lockState = state ? CursorLockMode.Locked : CursorLockMode.Confined;
    }


    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }
}
