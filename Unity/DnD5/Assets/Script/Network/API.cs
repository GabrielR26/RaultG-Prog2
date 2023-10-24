using UnityEngine;

public class API
{
    public const string DOMAIN = "https://api.open5e.com/v1/";

    public static string Races => $"{DOMAIN}races/";
    public static string Class => $"{DOMAIN}class/";
    public static string Backgrounds => $"{DOMAIN}backgrounds/";
    public static string Feats => $"{DOMAIN}feats/";
    public static string Spells => $"{DOMAIN}spells/";
    public static string ClassSpells => $"{DOMAIN}spelllist/";
    public static string Weapons => $"{DOMAIN}weapons/";
    public static string Armor => $"{DOMAIN}armor/";
    public static string MagicItems => $"{DOMAIN}magicitems/";
    public static string Monsters => $"{DOMAIN}monsters/";
    public static string Sections => $"{DOMAIN}sections/";
    public static string Search => $"{DOMAIN}search/";
}
