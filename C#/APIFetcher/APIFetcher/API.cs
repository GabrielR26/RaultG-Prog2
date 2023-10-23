using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace APIFetcher
{
    internal class API
    {
        const string BASE_URL = "https://api.gameofthronesquotes.xyz/v1";

        public static string GetRandomQuote => $"{BASE_URL}/random";
        public static string GetSeveralRandomQuotes(string _number) => $"{BASE_URL}/random/{_number}";
        public static string GetSeveralRandomCharacterQuotes(string _character = "tyrion", string _number = "2") => $"{BASE_URL}/author/{_character}/{_number}";
    }
}
