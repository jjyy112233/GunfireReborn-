using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WeaponButton : MonoBehaviour
{
    public string code;
    WeaponManager weaponManager;

    int ammo;
    int maxAmmo;

    string ammoTxtFormat = "{0} / {1}";
    TextMeshProUGUI ammoTxt;
    public int type;

    private void Awake()
    {
        weaponManager = FindObjectOfType<WeaponManager>();
    }
    public void OnClick()
    {
        weaponManager.GetWeapon(code);
    }

    public void SetMaxAmmo(int maxA)
    {
        maxAmmo = maxA;
        ammoTxt.text = string.Format(ammoTxtFormat, ammo, maxAmmo);
    }
    public void SetAmmo(int a)
    {
        ammo = a;
        ammoTxt.text = string.Format(ammoTxtFormat, ammo, maxAmmo);
    }
}
