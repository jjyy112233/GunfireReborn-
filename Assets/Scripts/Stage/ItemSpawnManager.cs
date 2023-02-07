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

    [Header("[�Ѿ� ������]")]
    public Item[] ammo;

    [Space,Header("[���� ������]")]
    public Item[] money;

    [Space, Header("[���� ������]")]
    public Item[] food;

    [Space,Header("[��ȥ ������]")]
    public Item[] soul;

    [Space,Header("[��ũ�� ������]")]
    public Item[] scrollsN;

    [Space, Header("[��ũ�� ������]")]
    public Item[] scrollsR;

    [Space, Header("[��ũ�� ������]")]
    public Item[] scrollsL;

    [Space, Header("[���� ������]")]
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
