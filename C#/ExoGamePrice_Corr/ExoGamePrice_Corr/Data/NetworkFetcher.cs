using System;
using System.Net.Http;
using System.Windows;
using Newtonsoft.Json;

namespace ExoGamePrice_Corr.Data
{
    internal class NetworkFetcher
    {
        static HttpClient request = new HttpClient();
        public static event Action<Deal[]> OnDealsDownload = null;
        public static event Action<Store[]> OnStoresDownload = null;
        public static event Action<GameInfo> OnDetailsDownload = null;

        public static event Action OnBeginDownload = null;
        public static event Action OnEndDownload = null;
        public static event Action OnFailDownload = null;

        static HttpClient dealRequest = new HttpClient();

        public static async void GetAllDeals(int _page = 0)
        {
            try
            {
                OnBeginDownload?.Invoke();
                HttpResponseMessage _msg = await dealRequest.GetAsync(API.Deals(_page));
                string _res = await _msg.Content.ReadAsStringAsync();
                Deal[] _deals = JsonConvert.DeserializeObject<Deal[]>(_res);
                if (_deals.Equals(null))
                    throw new Exception("WRONG DATA");
                OnDealsDownload?.Invoke(_deals);
                OnEndDownload?.Invoke();
            }
            catch (Exception _e)
            {
                OnFailDownload?.Invoke();
                MessageBox.Show(_e.Message);
            }
        }
        public static async void GetAllStores()
        {
            try
            {
                OnBeginDownload?.Invoke();
                HttpClient _request = new HttpClient();
                HttpResponseMessage _msg = await _request.GetAsync(API.Stores);
                string _res = await _msg.Content.ReadAsStringAsync();
                Store[] _stores = JsonConvert.DeserializeObject<Store[]>(_res);
                if (_stores.Equals(null))
                    throw new Exception("WRONG DATA");
                OnStoresDownload?.Invoke(_stores);
                OnEndDownload?.Invoke();
            }
            catch (Exception _e)
            {
                OnFailDownload?.Invoke();
                MessageBox.Show(_e.Message);
            }
        }        
        
        public static async void GetDealDetails(Deal _deal)
        {
            try
            {
                OnBeginDownload?.Invoke();
                HttpClient _request = new HttpClient();
                HttpResponseMessage _msg = await _request.GetAsync(API.Details(_deal.GameID));
                string _res = await _msg.Content.ReadAsStringAsync();
                GameInfo _gameInfo = JsonConvert.DeserializeObject<GameInfo>(_res);
                if (_gameInfo.Equals(null))
                    throw new Exception("WRONG DATA");
                OnDetailsDownload?.Invoke(_gameInfo);
                OnEndDownload?.Invoke();
            }
            catch (Exception _e)
            {
                OnFailDownload?.Invoke();
                MessageBox.Show(_e.Message);
            }
        }
    }
}
