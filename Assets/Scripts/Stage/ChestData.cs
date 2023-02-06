using UnityEngine;

public enum ChestType
{
    Upgrade,
    Scroll
}
public enum Upgrade
{
    None = -1,
    DmgUp,
    FireSpeedUp,
    SpeedUp,
    Count
}

public enum Scroll
{
    None = -1,
    GoldMaster,
    FireBullet,
    RollingMaster,
    Count
}

[CreateAssetMenu(fileName = "ChestData.asset", menuName = "ChestDatas/Data")]
public class ChestData : ScriptableObject
{
    public Sprite img;
    public string comment;

    public ChestType type;

    public Upgrade upgrade;
    public Scroll scroll;
}
