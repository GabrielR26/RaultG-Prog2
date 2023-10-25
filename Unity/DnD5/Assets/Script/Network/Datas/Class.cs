using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class ClassResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Class[] Results { get; set; }
}
public class Class
{
    public string Name { get; set; }
    public string Desc { get; set; }
    public string Hit_dice { get; set; }
    public string Hp_at_1st_level { get; set; }
    public string Hp_at_higher_levels { get; set; }
    public string Prof_armor { get; set; }
    public string Prof_weapons { get; set; }
    public string Prof_tools { get; set; }
    public string Prof_saving_throws { get; set; }
    public string Prof_skills { get; set; }
    public string Equipment { get; set; }
    public string Table { get; set; }
    public string Spellcasting_ability { get; set; }
    public Class[] Archetypes { get; set; } //name + desc
}

public class SpellClassResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public SpellClass[] Results { get; set; }
}
public class SpellClass
{
    public string Name { get; set; }
    public string[] Spells { get; set; }
}


public class FeatResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Feat[] Results { get; set; }
}
public class Feat //& condition
{
    public string Name { get; set; }
    public string Desc { get; set; }
    public string Prerequisite { get; set; }
    public string[] Effects_desc { get; set; }
}
