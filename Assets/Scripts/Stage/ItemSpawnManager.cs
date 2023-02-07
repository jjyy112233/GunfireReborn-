using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ItemSpawnManager : MonoBehaviour
{
    public enum ItemType
    { 
        Ammo,
        Coin,
        Food,
        Soul,
        NormalScroll,
        RareScroll,
        LegendScroll,
        Weapon,
    }

    [Header("[ÃÑ¾Ë ÇÁ¸®ÆÕ]")]
    public Item[] ammo;

    [Space,Header("[µ¿Àü ÇÁ¸®ÆÕ]")]
    public Item[] money;

    [Space, Header("[À½½Ä ÇÁ¸®ÆÕ]")]
    public Item[] food;

    [Space,Header("[¿µÈ¥ ÇÁ¸®ÆÕ]")]
    public Item[] soul;

    [Space,Header("[½ºÅ©·Ñ ÇÁ¸®ÆÕ]")]
    public Item[] scrollsN;

    [Space, Header("[½ºÅ©·Ñ ÇÁ¸®ÆÕ]")]
    public Item[] scrollsR;

    [Space, Header("[½ºÅ©·Ñ ÇÁ¸®ÆÕ]")]
    public Item[] scrollsL;

    [Space, Header("[¹«±â ÇÁ¸®ÆÕ]")]
    public Item[] weapons;


    Dictionary<ItemType, Item[]> allItems = new Dictionary<ItemType, Item[]>();

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        allItems[ItemType.Ammo] = ammo;
        allItems[ItemType.Coin] = money;
        allItems[ItemType.Food] = food;
        allItems[ItemType.Soul] = soul;
        allItems[ItemType.NormalScroll] = scrollsN;
        allItems[ItemType.RareScroll] = scrollsR;
        allItems[ItemType.LegendScroll] = scrollsL;
        allItems[ItemType.Weapon] = weapons;
    }

    public void MakeItem(ItemType type, Vector3 pos,int idx = -1)
    {
        var dropItems = allItems[type];
        if (idx == -1)
            idx = UnityEngine.Random.Range(0, dropItems.Length);

        var item = Instantiate(dropItems[idx], pos, Quaternion.identity);
        if(type == ItemType.Weapon)
        {
            var weapon = item.GetComponent<ItemWeapon>();
            weapon.lastAmmo = weapon.data.reloadAmmo;
        }
    }

    public void DropWeapon(Vector3 pos, Quaternion dir, string code, int lastAmmo)
    {
        var weapon =Instantiate(Array.Find(allItems[ItemType.Weapon], 
            t=>t.GetComponent<ItemWeapon>().data.code == code), pos, dir);
        weapon.VelocityStop();
        weapon.PlayerDrop();
        weapon.GetComponent<ItemWeapon>().lastAmmo = lastAmmo;
    }
}
