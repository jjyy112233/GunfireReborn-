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
        Instantiate(preCharactors[GameManager.instance.charactorIdx],
            spawns[0].position, Quaternion.identity);
    }
    public void NextScene()
    {
        SceneManager.LoadScene(nextScene);
    }
}
