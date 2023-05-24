using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static WeaponData;

//무기 변경, 획득 등
public class WeaponManager : MonoBehaviour
{
    public Gun[] weaponPrefabs;
    public WeaponButton[] weaponButtons;
    Dictionary<string, Gun> weapons = new Dictionary<string, Gun>();

    Dictionary<WeaponButton, Gun> connecntWeapon = new Dictionary<WeaponButton, Gun>();
    Dictionary<WeaponType, int> allAmmoCount = new Dictionary<WeaponType, int>();

    PlayerController player;
    Gun nowWeapon;
    string defaultWeapon = "GUN000";

    private void Awake()
    {
        DontDestroyOnLoad(this);
        weapons["GUN000"] = weaponPrefabs[0];
        weapons["GUN001"] = weaponPrefabs[1];
        weapons["GUN002"] = weaponPrefabs[2];
    }

    public void Init()
    {

    }

    private void Start()
    {
        player = FindObjectOfType<PlayerController>();

        for (var type = WeaponType.Wepon1; type < WeaponType.Count; type++)
        {
            allAmmoCount[type] = 100;
        }

        GetWeapon(defaultWeapon, weapons[defaultWeapon].data.reloadAmmo);
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
    public void GetWeapon(string code, int ammo)
    {
        //비어있는 무기창 탐색
        var emptyBtns = weaponButtons.Where(t => string.IsNullOrEmpty(t.code)).ToArray();
        WeaponButton nowWeapon;

        //비어있는 공간이 없을시에
        if (emptyBtns.Length == 0)
        {
            WeaponButton deleteGunButton = player.gun.weaponButton.isDefault ?
                weaponButtons[1] : player.gun.weaponButton;

            nowWeapon = deleteGunButton;
            player.gun.gameObject.SetActive(false);

            GameObject.FindObjectOfType<ItemSpawnManager>().DropWeapon(
                Camera.main.transform.position + Vector3.forward, Camera.main.transform.rotation, 
                connecntWeapon[deleteGunButton].data.code, connecntWeapon[deleteGunButton].Ammo);

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
        player.gun.transform.localPosition = new Vector3(0.1f, -0.05f, 0);
        player.gun.transform.localRotation = Quaternion.Euler(0,90,90);

        nowWeapon.code = code;

        nowWeapon.Type = player.gun.data.type;
        player.gun.weaponButton = nowWeapon;
        player.gun.Ammo = ammo;
        connecntWeapon[nowWeapon] = player.gun;
    }

    public void Reload()
    {
            
    }

    public void AddAllAmmo(WeaponType weaponType, int allAmmo)
    {
        allAmmoCount[weaponType] += allAmmo;
        var TypeWeapon = weaponButtons.Where(t => t.Type == weaponType);
        foreach (var weapon in TypeWeapon)
        {
            weapon.SetAllAmmo(allAmmoCount[weaponType]);
        }
    }

    public void UseMyAmmo(WeaponType weaponType, int count)
    {
        allAmmoCount[weaponType] -= count;

        var TypeWeapon = weaponButtons.Where(t => t.Type == weaponType);
        foreach (var weapon in TypeWeapon)
        {
            weapon.SetAllAmmo(allAmmoCount[weaponType]);
        }
    }

    public void SetAmmo(int ammo)
    {
        var button = player.gun.weaponButton;
        if(!button.isDefault)
            button.SetAmmoTxt(ammo, allAmmoCount[player.gun.data.type]);
        else
            button.SetAmmoTxt(ammo, '∞');
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.F1))
        {
            GetWeapon("GUN000",10);
        }
        if (Input.GetKeyDown(KeyCode.F2))
        {
            GetWeapon("GUN001",5);
        }
        if (Input.GetKeyDown(KeyCode.F3))
        {
            GetWeapon("GUN002",3);
        }
    }
}
