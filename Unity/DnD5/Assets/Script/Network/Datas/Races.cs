using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Newtonsoft.Json;
using UnityEngine.UIElements;

public class RaceResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Race[] Results { get; set; }
}
public class Race
{
    public string Name { get; set; }
    public string Desc { get; set; }
    public string Asi_desc { get; set; }
    public Asi[] Asi { get; set; }
    public string Age { get; set; }
    public string Alignment { get; set; }
    public string Size { get; set; }
    public string Size_raw { get; set; }
    public Speed Speed { get; set; }
    public string Languages { get; set; }
    public string Vision { get; set; }
    public string Traits { get; set; }
    public Race[] Subraces { get; set; } //name + Desc + asi + traits + asi_desc
}
public class Asi
{
    public string[] Attributes { get; set; }
    public int Value { get; set; }
}

public class MonsterResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Monster[] Results { get; set; }
}
public class Monster
{
    #region Var
    string group = string.Empty;
    string armor_desc = string.Empty;
    string img_main = string.Empty;
    #endregion
    #region Fields
    public string Name { get; set; }
    public string Desc { get; set; }
    public string Size { get; set; }
    public string Type { get; set; }
    public string Subtype { get; set; }
    public string Group
    {
        get => group;
        set
        {
            group = value == null ? "" : value;
        }
    }
    public string Alignment { get; set; }
    public int Armor_class { get; set; }
    public string Armor_desc
    {
        get => armor_desc;
        set => armor_desc = value == null ? "" : value;
    }
    public int Hit_points { get; set; }
    public string Hit_dice { get; set; }
    public Speed Speed { get; set; }
    public int Strength { get; set; }
    public int Dexterity { get; set; }
    public int Constitution { get; set; }
    public int Intelligence { get; set; }
    public int Wisdom { get; set; }
    public int Charisma { get; set; }
    public int? Strength_save { get; set; }
    public int? Dexterity_save { get; set; }
    public int? Constitution_save { get; set; }
    public int? Intelligence_save { get; set; }
    public int? Wisdom_save { get; set; }
    public int? Charisma_save { get; set; }
    public int? Perception { get; set; }
    //public Skill Skills { get; set; } //TODO
    public string Damage_vulnerabilities { get; set; }
    public string Damage_resistances { get; set; }
    public string Damage_immunities { get; set; }
    public string Condition_immunities { get; set; }
    public string Senses { get; set; }
    public string Languages { get; set; }
    public string Challenge_rating { get; set; }
    public Action[] Actions { get; set; }
    public Action[] Reactions { get; set; } //name + desc
    public string Legendary_desc { get; set; }
    public Action[] Legendary_actions { get; set; } //name + desc
    public Action[] Special_abilities { get; set; } //name + desc
    public string[] Spell_list { get; set; } //url -> spells
    public string[] Environments { get; set; }
    public string Img_main //url 
    {
        get => img_main;
        set
        {
            img_main = value == null ? "" : value;
        }
    }
    #endregion
}

public class Speed
{
    public int Fly { get; set; }
    public int Walk { get; set; }
    public int Climb { get; set; }
    public int Swim { get; set; }
    public int Burrow { get; set; }
    public bool Hover { get; set; }
}
public class Skill
{

}
public class Action
{
    public string Name { get; set; }
    public string Desc { get; set; }
    public int Attack_bonus { get; set; }
    public string Damage_dice { get; set; }
    public int Damage_bonus { get; set; }
}