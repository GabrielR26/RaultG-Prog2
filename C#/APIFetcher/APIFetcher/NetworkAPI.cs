using System;
using System.Net.Http;
using System.Windows;
using Newtonsoft.Json;

namespace APIFetcher
{
    internal class NetworkAPI
    {
        static HttpClient _request = new HttpClient();
        public static event Action<Quote> OnRandomQuote = null;
        public static event Action<Quote[]> OnSeveralRandomQuotes = null;
        public static async void GetRandomQuote()
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetRandomQuote);
            string _res = await _msg.Content.ReadAsStringAsync();
            
            Quote _finaleQuote = JsonConvert.DeserializeObject<Quote>(_res);
            OnRandomQuote?.Invoke(_finaleQuote);
        }
        public static async void GetSeveralRandomQuotes(int _number)
        {
            HttpResponseMessage _msg = await _request.GetAsync(API.GetSeveralRandomQuotes(_number.ToString()));
            string _res = await _msg.Content.ReadAsStringAsync();
            
            Quote[] _finaleQuotes = JsonConvert.DeserializeObject<Quote[]>(_res);
            OnSeveralRandomQuotes?.Invoke(_finaleQuotes);
        }
    }
}
