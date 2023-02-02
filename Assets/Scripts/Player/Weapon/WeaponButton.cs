using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using static WeaponData;

public class WeaponButton : MonoBehaviour
{
    public string code;
    WeaponManager weaponManager;
    public Image img;
    public Sprite[] gunTypeImgs;

    int ammo;
    int allAmmo;
    int maxAmmo;

    string ammoTxtFormat = "{0} / {1}";
    TextMeshProUGUI ammoTxt;
    public WeaponType type;
    public WeaponType Type {
        get { return type; }
        set {
            type = value;
            img.sprite = gunTypeImgs[(int)type + 1];        
        }
    }
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

    public void SetAmmoTxt(int ammo, char allAmmo)
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
