using ExoGamePrice_Corr.Data;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ExoGamePrice_Corr
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        int currentPage = 0;
        public MainWindow()
        {
            InitializeComponent();
            InitUI();
        }

        void InitUI()
        {
            NetworkFetcher.OnBeginDownload += () => OnLoadingEvent(true);
            NetworkFetcher.OnEndDownload += () => OnLoadingEvent(false);
            NetworkFetcher.OnFailDownload += () => OnLoadingEvent(false);

            NetworkFetcher.OnDealsDownload += ReadDatas;
            NetworkFetcher.OnStoresDownload += ReadStores;

            NetworkFetcher.GetAllStores();

            ButtonPrevious.IsEnabled = currentPage > 0;
            ButtonPrevious.Click += (o, e) =>
            {
                SetPreviousPage();
                NetworkFetcher.GetAllDeals(currentPage);
            };
            ButtonNext.Click += (o, e) =>
            {
                SetNextPage();
                NetworkFetcher.GetAllDeals(currentPage);
            };
            FetchButton.Click += (o, e) =>
            {
                NetworkFetcher.GetAllDeals(currentPage);
            };

            DealsList.SelectedCellsChanged += (o, e) =>
            {
                Deal _deal = (Deal)DealsList.SelectedItem;
                OpenDetails(_deal);
            };
        }
        void OnLoadingEvent(bool _isLoading)
        {
            FetchButton.Content = _isLoading ? "Loading datas..." : "Fetch deals";
            FetchButton.IsEnabled = !_isLoading;
        }
        void ReadDatas(Deal[] _deals)
        {
            for (int i = 0; i < _deals.Length; i++)
                _deals[i].GetImage();
            DealsList.ItemsSource = _deals;
            DealsDataBaseText.Content = $"All deals loaded : {_deals.Length}";
            DealsDataBaseText.Foreground = _deals.Length > 0 ? new SolidColorBrush(Color.FromRgb(0, 255, 0))
                : new SolidColorBrush(Color.FromRgb(255, 0, 0));
        }
        void ReadStores(Store[] _stores)
        {
            for (int i = 0; i < _stores.Length; i++)
            {
                _stores[i].Images.GetLogo();
                DataBase.AddStore(_stores[i]);
            }
            StoreDataBaseText.Content = $"All stores loaded : {_stores.Length}";
            StoreDataBaseText.Foreground = _stores.Length > 0 ? new SolidColorBrush(Color.FromRgb(0, 255, 0))
                : new SolidColorBrush(Color.FromRgb(255, 0, 0));
        }
        void SetNextPage()
        {
            currentPage++;
            ButtonPrevious.IsEnabled = currentPage > 0;
        }
        void SetPreviousPage()
        {
            currentPage--;
            currentPage = currentPage < 0 ? 0 : currentPage;
            ButtonPrevious.IsEnabled = currentPage > 0;
        }
        void OpenDetails(Deal _deal)
        {
            if (_deal == null) 
                return;
            DetailsWindow _details = new DetailsWindow(_deal);
            _details.Show();
        }
    }
}
