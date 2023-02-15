using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using System.Threading;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.SubsystemsImplementation;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public StageManager stageManager;

    public int charactorIdx;
    bool isMove;
    public bool MapMove {
        get {
            return isMove;
        }
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        isMove = false;
        Debug.Log(scene.name + "으로 변경되었습니다.");
        if (stageManager != null)
        {
            Debug.Log("stageManager" + "init");
            if (string.Compare(scene.name, "Lobby") != 0)
                stageManager.Init();

            //if (EventSystem.current == null)
            //{
            //    var instance = new GameObject("EventSystem");
            //    EventSystem.current = instance.AddComponent<EventSystem>();

            //    instance.AddComponent<StandaloneInputModule>();
            //}
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
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void MouseLock(bool state)
    {
        //#if !UNITY_EDITOR
        //        Cursor.visible = !state;
        //        Cursor.lockState = state ? CursorLockMode.Locked : CursorLockMode.Confined;
        //#endif

        isMove = !state;
    }


    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

}
