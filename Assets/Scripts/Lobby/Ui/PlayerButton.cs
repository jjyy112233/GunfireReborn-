using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerButton : MonoBehaviour
{
    public GameObject selectChar;
    public GameObject nowChar;
    public Image ring;

    private void Awake()
    {
        selectChar.GetComponent<PlayerController>().enabled = false;
        nowChar.GetComponent<PlayerController>().enabled = false;
        selectChar.GetComponent<PlayerInput>().enabled = false;
        nowChar.GetComponent<PlayerInput>().enabled = false;
    }
}
