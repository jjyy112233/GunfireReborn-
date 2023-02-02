using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ItemCoin : Item
{
    int coin;
    public ItemCoin()
    {
        itemType = ItemSpawnManager.ItemType.Coin;
    }

    public override void ItemEffect(PlayerController playerController = null)
    {
        coin = Random.Range(10, 100);
        playerController.AddCoin(coin);
    }
}
