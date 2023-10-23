using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExoGamePrice
{
    internal class API
    {
        const string BASE_URL = "https://www.cheapshark.com";
        const string REDIRECT_TO_STORE = "/redirect?dealID="; //Add {id store}
        const string LIST_OF_DEAL = "/api/1.0/deals"; //Add filter
        const string DEAL_LOOKUP = "/api/1.0/deals?id="; //Add id deal
        const string LIST_OF_GAME = "/api/1.0/deals?title="; //Add title game
        const string LIST_STORES = "/api/1.0/stores";

        public static string GetListOfDeals => $"{BASE_URL}{LIST_OF_DEAL}";
        public static string GetPageListOfDeals(string _page) => $"{BASE_URL}{LIST_OF_DEAL}?pageNumber={_page}";
        public static string GetDealInfo(string _id) => $"{BASE_URL}{DEAL_LOOKUP}{_id}";
        public static string GetListOfGames(string _title) => $"{BASE_URL}{LIST_OF_GAME}{_title}";
        public static string GetAllStores => $"{BASE_URL}{LIST_STORES}";
        public static void GoToStore(string _id) => Process.Start($"{BASE_URL}{REDIRECT_TO_STORE}" + "{" + $"{_id}" + "}");
        public static string GetImage(string _path) => $"{BASE_URL}{_path}";
    }
}
