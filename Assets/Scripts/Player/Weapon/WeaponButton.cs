using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using static WeaponData;

public class WeaponButton : MonoBehaviour
{
    public string code;
    WeaponManager weaponManager;

    int ammo;
    int allAmmo;
    int maxAmmo;

    string ammoTxtFormat = "{0} / {1}";
    TextMeshProUGUI ammoTxt;
    public WeaponType type;
    public bool isDefault = false;

    private void Awake()
    {
        weaponManager = FindObjectOfType<WeaponManager>();
        ammoTxt = GetComponentInChildren<TextMeshProUGUI>();
    }
    public void OnClick()
    {
        if(string.IsNullOrEmpty(code))
        {
            return;
        }

        weaponManager.ChangeWeapon(this);
    }

    
    public void SetAmmoTxt(int ammo, int allAmmo)
    {
        this.ammo = ammo;
        this.allAmmo = allAmmo;
        ammoTxt.text = string.Format(ammoTxtFormat, ammo, allAmmo);
    }

    public void SetAllAmmo(int allAmmo)
    {
        this.allAmmo = allAmmo;
        ammoTxt.text = string.Format(ammoTxtFormat, ammo, allAmmo);
    }
}
