using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class DontDestroyCanvas : MonoBehaviour
{
    public GameObject bossUi;
    public Image bossUiHp;
    public Image bossUiDef;
    public GameObject chestUi;
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }
    public void SetBossUi(bool state)
    {
        bossUi.SetActive(state);
    }
}
