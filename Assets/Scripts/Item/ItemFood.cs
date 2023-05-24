using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemFood : Item
{
    [SerializeField]
    int health;
    public ItemFood()
    {
        itemType = ItemSpawnManager.ItemType.Food;
    }

    public override void ItemEffect(PlayerController playerController = null)
    {
        playerController.AddFood(health);
    }
}
