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
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using System.Xml.Linq;

namespace ExoGamePrice
{
    /// <summary>
    /// Interaction logic for DetailWindow.xaml
    /// </summary>
    public partial class DetailWindow : Window
    {
        Game game = null;
        public DetailWindow()
        {
            InitializeComponent();
            Init();
        }

        void Init()
        {
            NetworkAPI.OnAllStore += SetStoreInfo;
            //Affiche les infos de Game et Stock les stores dans GridGameDetails
            NetworkAPI.OnDealInfo += (_game) =>
            {
                game = _game;
                LabelGameTitle.Content = game.GameInfo.Name;
                LabelGameMetacritic.Content += game.GameInfo.MetacriticScore;
                LabelGameSteam.Content += game.GameInfo.SteamRatingPercent;
                LabelGameSteamReview.Content = game.GameInfo.SteamRatingText;

                //ImageSourceConverter _src = new ImageSourceConverter();
                //string _str = _game.GameInfo.Thumb.Substring(0, _game.GameInfo.Thumb.IndexOf('?'));
                //ImageGame.Source = (ImageSource)_src.ConvertFromString(_str);
                ImageGame.Source = null;
				ImageGame.Source = new BitmapImage(new Uri(_game.GameInfo.Thumb));
                //TODO image marche pas

				//Get tableau de stores
				NetworkAPI.GetAllStores();
            };
            GridGameDetails.MouseDoubleClick += (o, e) =>
            {
                string _id = ((CheaperStores)GridGameDetails.SelectedValue).DealID;
                API.GoToStore(_id);
                };
        }

        void SetStoreInfo(Store[] _stores)
        {
            for (int i = 0; i < game.CheaperStores.Length; i++)
            {
                for (int j = 0; j < _stores.Length; j++)
                    if (_stores[j].StoreId == game.CheaperStores[i].StoreID)
                    {
                        game.CheaperStores[i].Name = _stores[j].StoreName;
                        game.CheaperStores[i].Logo = _stores[j].Images.Logo;
                    }
                game.CheaperStores[i].Logo = API.GetImage(game.CheaperStores[i].Logo);
                game.CheaperStores[i].SetData();

            }
            GridGameDetails.ItemsSource = game.CheaperStores;
        }
    }
}
