using System;
using System.Windows.Controls;


namespace GameUI
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : UserControl
    {
        public MainWindow()
        {
            this.Initialized += OnInitialized;
            this.InitializeComponent();
        }

        private void OnInitialized(object sender, EventArgs args)
        {
            this.DataContext = new ViewModel();
        }
    }
}
