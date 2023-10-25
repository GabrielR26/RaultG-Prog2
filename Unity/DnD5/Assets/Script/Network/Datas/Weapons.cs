using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Weapon[] Results { get; set; }
}
public class Weapon
{
    public string Name { get; set; }
    public string Category { get; set; }
    public string Cost { get; set; }
    public string Damage_dice { get; set; }
    public string Damage_type { get; set; }
    public string Weight { get; set; }
    public string[] Properties { get; set; }
}

public class ArmorResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Armor[] Results { get; set; }
}
public class Armor
{
    public string Name { get; set; }
    public string Category { get; set; }
    public string Plus_dex_mod { get; set; }
    public string Plus_con_mod { get; set; }
    public string Plus_wis_mod { get; set; }
    public string Plus_flat_mod { get; set; }
    public int Plus_max { get; set; }
    public string Ac_string { get; set; }
    public int Strength_requirement { get; set; }
    public string Cost { get; set; }
    public string Weight { get; set; }
    public string Stealth_disadvantage { get; set; }
}

public class MagicItemResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public MagicItem[] Results { get; set; }
}
public class MagicItem
{
    public string Name { get; set; }
    public string Type { get; set; }
    public string Desc { get; set; }
    public string Rarity { get; set; }
    public string Requires_attunement { get; set; }
}
