using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media.Imaging;

namespace ExoGamePrice_Corr.Data
{
    public class Deal
    {
        public string Title { get; set; }
        public float SalePrice { get; set; }
        public float NormalPrice { get; set; }
        public float RetailPrice { get; set; }
        public int StoreId { get; set; }
        public string SalePriceFormat => $"{SalePrice} $ ({Utils.GetEurosFromDollarsToString(SalePrice)})";
        public string NormalPriceFormat => $"{NormalPrice} $ ({Utils.GetEurosFromDollarsToString(NormalPrice)})";
        public float Savings { get; set; }
        public string SavingsFormat => $"{Savings.ToString("0")} %";
        public string Thumb { get; set; }
        public BitmapImage Image { get; set; } = new BitmapImage();
        public string DealID { get; set; }
        public string GameID { get; set; }
        public Store Store { get; set; }
        public float Price { get; set; }
        public string PriceFormat => $"{Price} $ ({Utils.GetEurosFromDollarsToString(Price)})";
        public void GetImage()
        {
            Image.BeginInit();
            Image.UriSource = new Uri(Thumb);
            Image.EndInit();
        }
    }
}
