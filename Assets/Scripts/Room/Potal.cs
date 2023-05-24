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
    public void Update()
    {
        if(Input.GetKeyDown(KeyCode.KeypadEnter))
            GameManager.instance.LoadScene(nextScene);

    }

    private void OnMouseDown()
    {
        Debug.Log(nextScene); ;
        GameManager.instance.LoadScene(nextScene);
    }
}
