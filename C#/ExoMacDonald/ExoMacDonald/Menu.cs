using System;
using System.Reflection;
using ExoMacDonald.Database;

namespace ExoMacDonald
{
    internal class Menu
    {
        //Event
        public static event Action<int> OnSelectionProduct = (x) => Console.WriteLine($"\n### OnSelectProduct {x} ###");
        //Var
        Product[] productsListe = null;

        public Menu()
        {
            //Copy available products
            productsListe = ProductsAvailable.Products();
            //Bind delivery's end on SelectionProduct
            Order.OnEndDelivery += Init;
            Init();
        }

        /// <summary>
        /// display all available products(name) like menu
        /// </summary>
        void DisplayMenu(Action _callback)
        {
            //Display the menu
            Console.Clear();
            Console.WriteLine("***** MacDonalds Menu *****");
            for (int i = 0; i < productsListe.Length; i++)
                Console.WriteLine($"** {i + 1}. {productsListe[i].Name()} : {productsListe[i].Ingredients()}");
            Console.WriteLine("***************************");

            //call SelectionProduct
            _callback?.Invoke();
        }

        void SelectionProduct()
        {
            //the customer select a product
            bool _isValid = int.TryParse(Console.ReadLine(), out int _selection);
            if (!_isValid || !CheckSelection(_selection, productsListe.Length))
                    SelectionProduct();

            //the check selection then broadcast
            if (!CheckSelection(_selection, productsListe.Length))
                return;
            OnSelectionProduct?.Invoke(_selection - 1);
        }

        void Init()
        {
            DisplayMenu(SelectionProduct);
        }
        bool CheckSelection(int _index, int _size) => _index >= 1 && _index <= _size;
    }
}
