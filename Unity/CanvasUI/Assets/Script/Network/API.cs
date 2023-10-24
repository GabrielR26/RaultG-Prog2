using System;

public class API
{
    public const string DOMAIN = "https://www.cheapshark.com/api/1.0";
    public static string Deals => $"{DOMAIN}/deals";
    public static string Stores => $"{DOMAIN}/stores";
    public static string Details(string _id) => $"{DOMAIN}/games?id={_id}";
}
