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
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ExoGamePrice
{
	/// <summary>
	/// Interaction logic for MainWindow.xaml
	/// </summary>
	public partial class MainWindow : Window
	{
		int currentPage = 1;
		public MainWindow()
		{
			InitializeComponent();
			Init();
		}
		void Init()
		{
			//Lance une recherche de Deals suivant le nom donné
			//  -> recherche par défaut si aucun nom donné
			ButtonDownload.Click += (o, e) =>
			{
				if (TextBoxSearch.Text == string.Empty)
					NetworkAPI.GetPageListOfDeals(currentPage.ToString());
				else
					NetworkAPI.GetListOfGames(TextBoxSearch.Text);
			};

			ButtonNext.Click += (o, e) =>
			{
				currentPage++;
				NetworkAPI.GetPageListOfDeals(currentPage.ToString());
			};
			ButtonPrevious.Click += (o, e) =>
			{
				currentPage = currentPage == 1 ? 1 : currentPage - 1;
				NetworkAPI.GetPageListOfDeals(currentPage.ToString());
			};

			//Stock les deals dans GridDeals
			NetworkAPI.OnAllDeals += SetDealsValue;
			NetworkAPI.OnSearchDeals += SetDealsValue;

			//Button download ouvre une fenetre detail
			GridDeals.MouseDoubleClick += (o, e) =>
			{
				DetailWindow _detail = new DetailWindow();
				_detail.Show();
				string _id = ((Deals)GridDeals.SelectedValue).DealID;
				NetworkAPI.GetDealInfo(_id);
			};
		}

		void SetDealsValue(Deals[] _deals)
		{
			for (int i = 0; i < _deals.Length; i++)
				_deals[i].SetData();
			GridDeals.ItemsSource = _deals;
		}
	}
}
