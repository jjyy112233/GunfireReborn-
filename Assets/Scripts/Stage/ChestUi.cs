using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChestUi : MonoBehaviour
{
    public ChestSelect[] selects;

    public ChestData[] UpgradeDatas;
    public ChestData[] ScrollDatas;

    public Animator animator;
    public Chest nowChest;

    public PlayerController myPlayer;

    private void Start()
    {
        myPlayer = FindObjectOfType<PlayerController>();
    }
    public void SetUi(ChestData[] datas)
    {
        for(int i =0; i<3;i++)
        {
            selects[i].Image.sprite = datas[i].img;
            selects[i].comment.text = datas[i].comment;
            selects[i].type = datas[i].type;
            selects[i].upgrade = datas[i].upgrade;
            selects[i].scroll = datas[i].scroll;
            selects[i].data = datas[i];
        }
    }

    public void Close()
    {
        GameManager.instance.MouseLock(true);
        gameObject.SetActive(false);
    }
    public void Select(ChestSelect chestSelect)
    {
        GameManager.instance.MouseLock(true);
        gameObject.SetActive(false);

        switch (chestSelect.type)
        {
            case ChestType.Upgrade:
                myPlayer.level.GetUpGrade(chestSelect.upgrade);
                break;
            case ChestType.Scroll:
                myPlayer.level.GetScroll(chestSelect.data);
                break;
            default:
                break;
        }

        Destroy(nowChest);
    }
}
