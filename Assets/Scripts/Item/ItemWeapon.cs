using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using static ItemSpawnManager;
using static WeaponData;

public class ItemWeapon : Item
{
    public WeaponData data;
    public int lastAmmo;

    public ItemWeapon(WeaponType weaponType)
    {
        itemType = ItemType.Weapon;
    }

    public override void ItemEffect(PlayerController playerController = null)
    {

    }

    public void OnMouseDown()
    {
        var dis = Vector3.Distance(Camera.main.transform.position, transform.position);
        if (dis > 3)
            return;
        GameObject.FindObjectOfType<WeaponManager>().GetWeapon(data.code, lastAmmo);

        Destroy(gameObject);
    }
}
