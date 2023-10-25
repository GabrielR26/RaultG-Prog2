using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpellResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Spell[] Results { get; set; }
}
public class Spell
{
   public string Name { get; set; }
   public string Desc { get; set; }
   public string Higher_level { get; set; }
   public string Range { get; set; }
   public string Components { get; set; }
   public string Requires_verbal_components { get; set; }
   public string Requires_somatic_components { get; set; }
   public string Requires_material_components { get; set; }
   public string Material { get; set; }
   public string Ritual { get; set; }
   public string Duration { get; set; }
   public string Concentration { get; set; }
   public string Casting_time { get; set; }
   public string Level { get; set; }
   public string School { get; set; }
   public string[] Spell_lists { get; set; }
}
