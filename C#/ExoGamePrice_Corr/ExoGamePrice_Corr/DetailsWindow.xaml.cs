using ExoGamePrice_Corr.Data;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace ExoGamePrice_Corr
{
    /// <summary>
    /// Interaction logic for DetailsWindow.xaml
    /// </summary>
    public partial class DetailsWindow : Window
    {
        public DetailsWindow()
        {
            InitializeComponent();
        }
        public DetailsWindow(Deal _deal)
        {
            InitializeComponent();
            NetworkFetcher.OnDetailsDownload += ReadDetails;
            NetworkFetcher.GetDealDetails(_deal);
            GamePicture.Source = _deal.Image;
            GameTitle.Content = _deal.Title;
        }

        void ReadDetails(GameInfo _gameInfo)
        {
            for (int i = 0; i < _gameInfo.Deals?.Length; i++)
            {
                Store _store = DataBase.AllStoresDB[_gameInfo.Deals[i].StoreId];
                _gameInfo.Deals[i].Store = _store;
            }
            DetailsGrid.ItemsSource = _gameInfo.Deals;
        }
    }
}
