using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MovieScene : MonoBehaviour
{
    public string nextScene;

    public Transform[] spawns;
    public GameObject[] preCharactors;

    private void Awake()
    {
        //GameObject.FindObjectOfType<DontDestroyCanvas>().gameObject.SetActive(false);
    }
    public void NextScene()
    {
        GameManager.instance.LoadScene(nextScene);
    }
}
