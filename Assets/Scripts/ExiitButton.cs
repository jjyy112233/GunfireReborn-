using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExiitButton : MonoBehaviour
{
    public void OnClikcExit()
    {
        Application.Quit();
    }
    public void OnClikcLobby()
    {
        GameManager.instance.LoadScene("Lobby");
    }
    public void Cancle(GameObject gameObject)
    {
        gameObject.SetActive(false);
    }
}
