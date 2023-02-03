using System.Collections;
using System.Collections.Generic;
using UnityEditor.SearchService;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Potal : MonoBehaviour
{
    public string nextScene;
    ParticleSystem potarParticle;

    private void Awake()
    {
        potarParticle = GetComponent<ParticleSystem>();
    }

    private void OnMouseDown()
    {
        SceneManager.LoadScene(nextScene);
    }
}
