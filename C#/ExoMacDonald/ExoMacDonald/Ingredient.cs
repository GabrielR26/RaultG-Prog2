using System;

namespace ExoMacDonald
{
    internal class Ingredient
    {
        string name = string.Empty;
        string[] associateProducts = null;

        public Ingredient(string _name, string[] _associateProducts)
        {
            name = _name;
            associateProducts = _associateProducts;
        }

        public string Name() => name;
        public bool CheckAssociateProducts(string _productName)
        {
            for (int i = 0; i < associateProducts.Length; i++)
                if (associateProducts[i] == _productName)
                    return true;
            return false;
        }
    }
}
