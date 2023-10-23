using System.Collections;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;

namespace DemoWPF
{
    /// <summary>
    /// Interaction logic for BrowserWindow.xaml
    /// </summary>
    public partial class BrowserWindow : Window
    {
        Explorer explorer = new Explorer();
        FileData currentSelection = null;
        public BrowserWindow()
        {
            InitializeComponent();
            //explorer.GetAllDirectories(@"C:\");
            Init();
        }
        void Init()
        {
            RefreshButton.Click += (o, e) =>
            {
                FileList.ItemsSource = explorer.GetAllFiles($@"{RootBox.Text}");
            };

            //FileList.SelectionChanged += (o, e) =>
            //{
            //    OnSelection();
            //};

            FileList.MouseDoubleClick += (o, e) =>
            {
                OnSelection();
                if (!currentSelection)
                    return;
                currentSelection?.Open();
            };

            //OpenButton.Click += (o, e) =>
            //{
            //    if (!currentSelection)
            //        return;
            //    currentSelection?.Open();
            //};
        }
        void OnSelection()
        {
            FileData _data = (FileData)FileList.SelectedValue;
            OpenButton.IsEnabled = _data != null;
            currentSelection = _data;
        }
    }
}
