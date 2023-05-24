using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }
    public void Close()
    {
        animator.SetTrigger("Close");
    }

    public void Open()
    {
        animator.SetTrigger("Open");
    }
}
