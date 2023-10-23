using System;
using System.IO;
namespace ExoGamePrice_Corr.Data
{
    internal class API
    {
        public const string DOMAIN = "https://www.cheapshark.com/api/1.0";
        public static string Deals(int _page = 0) => $"{DOMAIN}/deals?pageNumber={_page.ToString()}";
        public static string Stores=> $"{DOMAIN}/stores";
        public static string Details(string _id) => $"{DOMAIN}/games?id={_id}";

    }
}
