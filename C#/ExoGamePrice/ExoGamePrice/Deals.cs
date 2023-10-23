using System;
using System.Windows;

namespace ExoGamePrice
{
	public class Deals
	{
		public string Title { get; set; }
		public string SalePrice { get; set; }
		public string NormalPrice { get; set; }
		public string Savings { get; set; }
		public string TextSaving { get; set; }
		public string Thumb { get; set; }
		public string GameId { get; set; }
		public string DealID { get; set; }
		public void SetData()
		{
            //TODO tryparse ne marche pas
            SalePrice = SalePrice.Replace('.', ',');
            NormalPrice = NormalPrice.Replace('.', ',');
            bool _ok = float.TryParse(SalePrice.ToLower(), out float _sale);
			SalePrice = $"{SalePrice}$ ({(_sale * 0.94).ToString("0.00")}€)";
			float.TryParse(NormalPrice, out float _normal);
			NormalPrice = $"{NormalPrice}$ ({(_normal * 0.94).ToString("0.00")}€)";

            Savings = Savings.Replace('.', ',');
            float.TryParse(Savings, out float _save);
			Savings = _save.ToString();
            TextSaving = $"Saving {(int)_save}%";
		}
	}

	public class Game
	{
		public GameInfo GameInfo { get; set; }
		public CheaperStores[] CheaperStores { get; set; }
	}

	public class GameInfo
	{
		public string Name { get; set; }
		public string GameID { get; set; }
		public string MetacriticScore { get; set; }
		public string SteamRatingPercent { get; set; }
		public string SteamRatingText { get; set; }
		public string Thumb { get; set; }
	}
	public class CheaperStores
	{
		public string StoreID { get; set; }
		public string DealID { get; set; }
		public string SalePrice { get; set; }
		public string RetailPrice { get; set; }
		public string Savings {get; set; }
		public string TextSavings {get; set; }
		public string Name { get; set; }
		public string Logo { get; set; }

		public void SetData()
		{
            //TODO tryparse marche pas
            SalePrice = SalePrice.Replace('.', ',');
            RetailPrice = RetailPrice.Replace('.', ',');
			float.TryParse(RetailPrice, out float _r);
			float.TryParse(SalePrice, out float _p);
			float _res = ((_r - _p) / _r) * 100;
			Savings = _res.ToString();
            TextSavings = $"Saving {(int)_res}%";

            float.TryParse(SalePrice, out float _sale);
			SalePrice = $"{SalePrice}$ ({(_sale * 0.94).ToString("0.00")}€)";
		}
	}

	public class Store
	{
		public string StoreId { get; set; }
		public string StoreName { get; set; }
		public Images Images { get; set; }
	}

	public class Images
	{
		public string Logo { get; set; }
	}
}
