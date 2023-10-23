using System;
using System.IO;
using System.Net.Http;
using System.Runtime.Remoting.Messaging;
using System.Windows;
using Newtonsoft.Json;

namespace ExoGamePrice
{
    internal class NetworkAPI
    {
        static HttpClient _request = new HttpClient();
        public static event Action<Deals[]> OnAllDeals = null;
        public static event Action<Deals[]> OnSearchDeals = null;
        public static event Action<Store[]> OnAllStore = null;
        public static event Action<Game> OnDealInfo = null;

        public static async void GetPageListOfDeals(string _page = "1")
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetPageListOfDeals(_page));
            string _res = await _msg.Content.ReadAsStringAsync();

            Deals[] _deals = JsonConvert.DeserializeObject<Deals[]>(_res);
            OnAllDeals?.Invoke(_deals);
        }
        public static async void GetListOfGames(string _title)
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetListOfGames(_title));
            string _res = await _msg.Content.ReadAsStringAsync();

            Deals[] _deals = JsonConvert.DeserializeObject<Deals[]>(_res);
            OnSearchDeals?.Invoke(_deals);
        }
        public static async void GetDealInfo(string _id)
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetDealInfo(_id));
            string _res = await _msg.Content.ReadAsStringAsync();

            Game _game = JsonConvert.DeserializeObject<Game>(_res);
            OnDealInfo?.Invoke(_game);
        }
        public static async void GetAllStores()
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetAllStores);
            string _res = await _msg.Content.ReadAsStringAsync();

            Store[] _stores = JsonConvert.DeserializeObject<Store[]>(_res);
            OnAllStore?.Invoke(_stores);
        }
    }
}
