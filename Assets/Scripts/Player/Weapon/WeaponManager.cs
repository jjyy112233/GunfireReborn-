using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static WeaponData;

//���� ����, ȹ�� ��
public class WeaponManager : MonoBehaviour
{
    public Gun[] weaponPrefabs;
    Dictionary<string, Gun> weapons = new Dictionary<string, Gun>();

    public WeaponButton[] weaponButtons;
    public Dictionary<WeaponButton, Gun> connecntWeapon = new Dictionary<WeaponButton, Gun>();
    public Dictionary<WeaponType, int> allAmmoCount = new Dictionary<WeaponType, int>();

    PlayerController player;
    Gun nowWeapon;
    string defaultWeapon = "GUN000";

    private void Awake()
    {
        weapons["GUN000"] = weaponPrefabs[0];
        weapons["GUN001"] = weaponPrefabs[1];
        weapons["GUN002"] = weaponPrefabs[2];
    }

    private void Start()
    {
        player = FindObjectOfType<PlayerController>();

        for (var type = WeaponType.Wepon1; type < WeaponType.Count; type++)
        {
            allAmmoCount[type] = 100;
            var TypeWeapon = weaponButtons.Where(t => t.type == type);
            foreach(var t in TypeWeapon)
            {
                t.SetAllAmmo(allAmmoCount[type]);
            }
        }

        GetWeapon(defaultWeapon);
    }

    public void ChangeWeapon(WeaponButton button)
    {
        if (string.IsNullOrEmpty(button.code))
            return;
        if (player.gun != null)
            player.gun.gameObject.SetActive(false);

        var nowGun = connecntWeapon[button];
        player.gun = nowGun;
        nowGun.gameObject.SetActive(true);
    }
    public void GetWeapon(string code)
    {
        //����ִ� ����â Ž��
        var emptyBtns = weaponButtons.Where(t => string.IsNullOrEmpty(t.code)).ToArray();
        WeaponButton nowWeapon;

        //����ִ� ������ �����ÿ�
        if (emptyBtns.Length == 0)
        {
            WeaponButton deleteGunButton = player.gun.weaponButton.isDefault ?
                weaponButtons[1] : player.gun.weaponButton;

            nowWeapon = deleteGunButton;
            player.gun.gameObject.SetActive(false);

            Destroy(connecntWeapon[deleteGunButton].gameObject);
            connecntWeapon.Remove(deleteGunButton);
        }
        else
        {
            if (player.gun != null)
                player.gun.gameObject.SetActive(false);
            nowWeapon = emptyBtns.First();
        }

        player.gun = Instantiate(weapons[code], player.handR).GetComponent<Gun>();
        player.gun.transform.localRotation = Quaternion.Euler(0,90,90);

        nowWeapon.code = code;

        nowWeapon.type = player.gun.data.type;
        player.gun.weaponButton = nowWeapon;
        connecntWeapon[nowWeapon] = player.gun;
    }

    public void Reload()
    {
            
    }

    public void AddAllAmmo(WeaponType weaponType, int allAmmo)
    {
        allAmmoCount[weaponType] += allAmmo;
        var TypeWeapon = weaponButtons.Where(t => t.type == weaponType);
        foreach (var weapon in TypeWeapon)
        {
            weapon.SetAllAmmo(allAmmoCount[weaponType]);
        }
    }

    public void UseMyAmmo(WeaponType weaponType, int count)
    {
        allAmmoCount[weaponType] -= count;

        var TypeWeapon = weaponButtons.Where(t => t.type == weaponType);
        foreach (var weapon in TypeWeapon)
        {
            weapon.SetAllAmmo(allAmmoCount[weaponType]);
        }
    }

    public void SetAmmo(int ammo)
    {
        var button = player.gun.weaponButton;
        button.SetAmmoTxt(ammo, allAmmoCount[player.gun.data.type]);
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.F1))
        {
            GetWeapon("GUN000");
        }
        if (Input.GetKeyDown(KeyCode.F2))
        {
            GetWeapon("GUN001");
        }
        if (Input.GetKeyDown(KeyCode.F3))
        {
            GetWeapon("GUN002");
        }
    }
}
