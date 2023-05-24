using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using Unity.VisualScripting;
using UnityEngine;

public class Chest : MonoBehaviour
{
    [SerializeField]
    GameObject lockEffect;
    [SerializeField]
    GameObject unLockEffect;
    [SerializeField]
    Animator chestUi;
    ChestUi chestUics;
    ChestData[] datas = new ChestData[3];

    Animator animator;

    bool openable = false;
    public bool Openable {
        get { return openable; }
        set {
            if (openable == value)
                return;
            openable = value;
            lockEffect.SetActive(false);
            unLockEffect.SetActive(true);

        }
    }

    private void Awake()
    {
        chestUi = GameManager.FindObjectOfType<DontDestroyCanvas>().chestUi.GetComponent<Animator>();
        animator = GetComponent<Animator>();
        chestUics = chestUi.GetComponent<ChestUi>();
    }

    private void Start()
    {
        SetChest();
    }

    private void OnMouseDown()
    {
       // if (GameManager.instance.MapMove)
        {
            if (openable)
            {
                GameManager.instance.MouseLock(false);
                chestUi.gameObject.SetActive(true);
                chestUi.SetTrigger("Open");
                chestUics.SetUi(datas);
                chestUics.nowChest = this;
            }
            else
            {
                animator.SetTrigger("Warning");
            }
        }
    }


    public void SetChest()
    {
        var type = (ChestType)Random.Range(0, 2);

        var chestData = type == ChestType.Upgrade ? chestUics.UpgradeDatas : chestUics.ScrollDatas;

        for (int i = 0; i< 3; i++)
        {
            var idx = Random.Range(0, chestData.Length);
            datas[i] = chestData[idx];
        }
    }

    public void OnDestroy()
    {
        var effects = unLockEffect.GetComponentsInChildren<ParticleSystem>();

        foreach(var effect in effects)
        {
            var main = effect.main;
            main.loop = false;
        }
    }
}
