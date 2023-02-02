using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chest : MonoBehaviour
{
    [SerializeField]
    GameObject lockEffect;
    [SerializeField]
    GameObject unLockEffect;
    [SerializeField]
    Animator chestUi;

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
        animator = GetComponent<Animator>();
    }
    private void OnMouseDown()
    {
        if(openable)
        {
            chestUi.gameObject.SetActive(true);
            chestUi.SetTrigger("Open");
        }
        else
        {
            animator.SetTrigger("Warning");
        }
    }
}
