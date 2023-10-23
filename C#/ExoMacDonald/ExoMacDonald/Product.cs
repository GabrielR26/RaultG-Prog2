using System;
using ExoMacDonald.Database;

namespace ExoMacDonald
{
    internal class Product
    {
        string name = string.Empty;
        int deliveryTime = 0;
        Ingredient[] ingredients = null;

        public Product(string _name, int _deliveryTime)
        {
            name = _name;
            deliveryTime = _deliveryTime;
            ingredients = new Ingredient[0];
            GetIngredients();
        }

        void GetIngredients()
        {            
            Ingredient[] _tmp = null;
            for (int i = 0; i < IngredientAvailable.Ingredients().Length; i++)
            {
                if (IngredientAvailable.Ingredients()[i].CheckAssociateProducts(name))
                {
                    _tmp = ingredients;
                    ingredients = new Ingredient[_tmp.Length + 1];
                    for (int j = 0; j < _tmp.Length; j++)
                        ingredients[j] = _tmp[j];
                    ingredients[ingredients.Length - 1] = IngredientAvailable.Ingredients()[i];
                }
            }
        }

        public string Name() => name;
        public int DeliveryTime() => deliveryTime;
        public string Ingredients()
        {
            string _res = string.Empty;
            for (int i = 0; i < ingredients.Length; i++)
                _res += $"{ingredients[i].Name()}, ";
            _res = _res.Remove(_res.Length - 2);
            return _res;
        }
    }
}
