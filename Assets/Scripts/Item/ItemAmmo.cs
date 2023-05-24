using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemAmmo : Item
{
    [SerializeField]
    WeaponData.WeaponType weaponType;

    [SerializeField]
    int count;

    public ItemAmmo(WeaponData.WeaponType weaponType, int count)
    {
        itemType = ItemSpawnManager.ItemType.Ammo;
        this.weaponType = weaponType;
        this.count = count;
    }

    public override void ItemEffect(PlayerController playerController = null)
    {
        GameObject.FindObjectOfType<WeaponManager>().AddAllAmmo(weaponType, count);
    }
}
