using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.Contracts;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LobbyManager : MonoBehaviour
{
    Camera mainCamera;
    Animator camAnimator;

    public Animator uiAnimator;
    string MoveTrigger = "Move";
    string ReturnTrigger = "Return";

    public PlayerButton[] charactors;
    public Sprite[] ring;

    int charIdx = 0;

    private void Awake()
    {
        mainCamera = Camera.main;
        camAnimator = mainCamera.GetComponent<Animator>();
        SetPlayer(0);

        if(FindObjectOfType<StageManager>())
            Destroy(FindObjectOfType<StageManager>().gameObject);
        if (FindObjectOfType<ItemSpawnManager>())
            Destroy(FindObjectOfType<ItemSpawnManager>().gameObject);
        if (FindObjectOfType<WeaponManager>())
            Destroy(FindObjectOfType<WeaponManager>().gameObject);


    }
    private void Start()
    {
        GameManager.instance.MouseLock(false);
        var players = GameObject.FindObjectsOfType<PlayerController>();
        
        foreach(PlayerController player in players)
        {
            Destroy(player.gameObject);
        }

        var canvas = FindObjectOfType<DontDestroyCanvas>();
        if(canvas)
            Destroy(canvas.gameObject);
    }
    [ContextMenu("CamMove")]
    public void SelectCharactor()
    {
        camAnimator.SetTrigger(MoveTrigger);
        uiAnimator.SetTrigger("Move");
    }

    [ContextMenu("CamReturn")]
    public void ReturnCharactor()
    {
        camAnimator.SetTrigger(ReturnTrigger);
        uiAnimator.SetTrigger(ReturnTrigger);
    }

    public void SetPlayer(int idx)
    {
        charactors[charIdx].selectChar.SetActive(false);
        charactors[charIdx].nowChar.SetActive(false);
        charactors[charIdx].ring.sprite = ring[0];
        charactors[charIdx].ring.color = Color.white;

        charIdx = idx;

        charactors[charIdx].selectChar.SetActive(true);
        charactors[charIdx].nowChar.SetActive(true);
        charactors[charIdx].ring.sprite = ring[1];
        charactors[charIdx].ring.color = Color.yellow;
        charactors[charIdx].nowChar.GetComponent<Animator>().SetTrigger("Lobby");
        charactors[charIdx].selectChar.GetComponent<Animator>().SetTrigger("Lobby");
    }

    public void SetReady()
    {
        GameManager.instance.charactorIdx = charIdx;
        //GameManager.instance.LoadScene("stage1_map0");
        GameManager.instance.LoadScene("stage1_map0");
    }
}
