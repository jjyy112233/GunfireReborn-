using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponButton : MonoBehaviour
{
    public string code;
    WeaponManager weaponManager;

    private void Awake()
    {
        weaponManager = FindObjectOfType<WeaponManager>();
    }
    public void OnClick()
    {
        weaponManager.GetWeapon(code);
    }
}
