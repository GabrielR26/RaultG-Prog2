using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
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

namespace APIFetcher
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            Init();           
        }

        void Init()
        {
            NetworkAPI.OnSeveralRandomQuotes += (qs) => GridCitation.ItemsSource = qs;
            ButtonGenerate.Click += (o,e) => NetworkAPI.GetSeveralRandomQuotes((int)SliderQuotes.Value);
            SliderQuotes.ValueChanged += (o,e) => LabelNumberQuotes.Content = ((int)SliderQuotes.Value).ToString();
            NetworkAPI.GetSeveralRandomQuotes(5);
        }

    }
}
