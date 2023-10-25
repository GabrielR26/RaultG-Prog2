using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    public Speed Speed { get; set; } //TODO check
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
    public string Name { get; set; }
    public string Desc { get; set; }
    public string Size { get; set; }
    public string Type { get; set; }
    public string Subtype { get; set; }
    public string Group { get; set; }
    public string Alignment { get; set; }
    public string Armor_class { get; set; }
    public string Armor_desc { get; set; }
    public string Hit_points { get; set; }
    public string Hit_dice { get; set; }
    public Speed Speed { get; set; }
    public string Strength { get; set; }
    public string Dexterity { get; set; }
    public string Constitution { get; set; }
    public string Intelligence { get; set; }
    public string Wisdom { get; set; }
    public string Charisma { get; set; }
    public string Strength_save { get; set; }
    public string Dexterity_save { get; set; }
    public string Constitution_save { get; set; }
    public string Intelligence_save { get; set; }
    public string Wisdom_save { get; set; }
    public string Charisma_save { get; set; }
    public string Perception { get; set; }
    //public Skill Skills { get; set; }
    public string Damage_vulnerabilities { get; set; }
    public string Damage_resistances { get; set; }
    public string Damage_immunities { get; set; }
    public string Condition_immunities { get; set; }
    public string Senses { get; set; }
    public string Languages { get; set; }
    public string Challenge_rating { get; set; }
    public int Cr { get; set; }
    public Action[] Actions { get; set; }
    public Action[] Reactions { get; set; } //name + desc
    public string Legendary_desc { get; set; }
    public Action[] Legendary_actions { get; set; } //name + desc
    public Action[] Special_abilities { get; set; } //name + desc
    public string[] Spell_list { get; set; } //url -> spells
    public string[] Environments { get; set; }
    public string img_main { get; set; } //url
}

public class Speed
{
    public int Walk { get; set; }
    public int Swim { get; set; }
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