using System;
using ExoMacDonald.Database;

namespace ExoMacDonald
{
    internal class MacDonald
    {
        Menu menu = null;
        Order order = null;

        public MacDonald() 
        {
            Menu.OnSelectionProduct += NewOrder;
            menu = new Menu();
        }

        void NewOrder(int _indexProduct)
        {
            order = new Order(ProductsAvailable.GetProduct(_indexProduct));
        }
    }
}
