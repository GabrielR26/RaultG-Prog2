using System;
using System.Windows.Controls.Primitives;
using System.Windows.Media.Imaging;

namespace ExoGamePrice_Corr
{
    public class Store
    {
        public int StoreID { get; set; }
        public string StoreName { get; set; }
        public Images Images { get; set; } = new Images();
    }

    public class Images
    {
        public string Logo { get; set; }
        public string LogoFormat => $"https://www.cheapshark.com{Logo}";
        public BitmapImage FinalLogo { get; set; } = new BitmapImage();
        public void GetLogo()
        {
            FinalLogo.BeginInit();
            FinalLogo.UriSource = new Uri(LogoFormat);
            FinalLogo.EndInit();
        }
    }
}
