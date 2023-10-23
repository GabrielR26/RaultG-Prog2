using System;

namespace ExoMacDonald.Database
{
    internal class ProductsAvailable
    {
        static Product[] productsListe = null;

        public ProductsAvailable()
        {
            productsListe = new Product[]{
                new Product("Big mac", 9),
                new Product("Fries", 6),
                new Product("Coca-cola", 3),
                new Product("Sundae", 5)
            };
        }
        public static Product[] Products() => productsListe;
        public static Product GetProduct(int _index) => _index < 0 ? null : _index > productsListe.Length ? null : productsListe[_index];
    }
}
