using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BackgroundResponse : MonoBehaviour
{
    public int Count { get; set; }
    public string Previous { get; set; } //url
    public string Next { get; set; } //url
    public Background[] Results { get; set; }
}
public class Background
{
   public string Name { get; set; }
   public string Desc { get; set; }
   public string Skill_proficiencies { get; set; }
   public string Tool_proficiencies { get; set; }
   public string Languages { get; set; }
   public string Equipment { get; set; }
   public string Feature { get; set; }
   public string Feature_desc { get; set; }
   public string Suggested_characteristics { get; set; }
}
