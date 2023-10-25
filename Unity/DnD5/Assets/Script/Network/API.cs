using UnityEngine;
using UnityEngine.UI;

public class API
{
    public const string DOMAIN = "https://api.open5e.com/v1/";
    public const string IMAGE = "http://api.open5e.com/static/img/monsters/";

    public static string Races => $"{DOMAIN}races/";
    public static string Class => $"{DOMAIN}class/";
    public static string Backgrounds => $"{DOMAIN}backgrounds/";
    public static string Feats => $"{DOMAIN}feats/";
    public static string Spells => $"{DOMAIN}spells/";
    public static string SpellClass => $"{DOMAIN}spelllist/";
    public static string Weapons => $"{DOMAIN}weapons/";
    public static string Armors => $"{DOMAIN}armor/";
    public static string MagicItems => $"{DOMAIN}magicitems/";
    public static string Monsters => $"{DOMAIN}monsters/";
    public static string Conditions => $"{DOMAIN}conditions/";
    public static string Search => $"{DOMAIN}search/";
    public static string GetImage(string _name) => $"{IMAGE}{_name}.png";
    public static string RedirectPage(string _name) => $"{DOMAIN}{_name}"; //TODO redirect spell, equipement...
}
