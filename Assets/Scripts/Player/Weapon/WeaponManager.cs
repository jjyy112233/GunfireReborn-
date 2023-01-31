using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//¹«±â º¯°æ, È¹µæ µî
public class WeaponManager : MonoBehaviour
{
    public GameObject[] weaponPrefabs;
    Dictionary<string, GameObject> weapons = new Dictionary<string, GameObject>();
    PlayerController player;

    private void Awake()
    {
        weapons["GUN000"] = weaponPrefabs[0];
        weapons["GUN001"] = weaponPrefabs[1];
        weapons["GUN002"] = weaponPrefabs[2];
    }

    private void Start()
    {
        player = FindObjectOfType<PlayerController>();
    }

    public void ChangeWeapon(string code)
    {
        if(player.gun != null)
            player.gun.gameObject.SetActive(false);
        player.guns[code].gameObject.SetActive(true);
    }
    public void GetWeapon(string code)
    {
        if (player.gun != null)
        {
            Destroy(player.gun.gameObject);
            player.guns.Remove(player.gun.data.code);
        }
        player.gun = Instantiate(weapons[code], player.handR).GetComponent<Gun>();
        player.gun.transform.localRotation = Quaternion.Euler(0,90,90);
        player.guns[code] = player.gun;
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
