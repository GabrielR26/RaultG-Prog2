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

using System.Diagnostics;

namespace DemoWPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            InitButton();
        }

        void InitButton()
        {
            DocCpp.Click += (o, e) => Open("CPP");
            DocCs.Click += (o, e) => Open("C#");
            DocUnreal.Click += (o, e) => Open("Unreal");
            ButtonOpenWindow.Click += (o, e) =>
            {
                BrowserWindow _browser = new BrowserWindow();
                _browser.Show();
            };
        }

        void Open(string _key)
        {
            bool _isvalid = URLBdd.URL.ContainsKey(_key);
            if (!_isvalid)
                return;
            Process.Start(URLBdd.URL[_key]);
        }

        private void OnMouseEnterCpp(object sender, MouseEventArgs e)
        {
            DocCpp.Background = null;
            DocCpp.Content = null;
            BitmapImage _bitmap = new BitmapImage(new Uri("C:\\Users\\RAUL2903\\Pictures\\Saved Pictures\\C++.png"));
            ImageSource _img = _bitmap;
            ImageBrush _brush = new ImageBrush(_img);
            _brush.Stretch = Stretch.Uniform;
        }

        private void OnMouseLeaveCpp(object sender, MouseEventArgs e)
        {
            DocCpp.Content = "Documentation C++";
            DocCpp.Background = null;
        }
    }
}
