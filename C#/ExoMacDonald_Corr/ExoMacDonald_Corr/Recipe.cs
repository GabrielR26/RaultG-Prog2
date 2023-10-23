using System;

namespace ExoMacDonald_Corr
{
    internal class Recipe
    {
        public string Name { get; private set; } = string.Empty;
        public TimeSpan MinutesPreparationTimer { get; private set; }
        public Ingredient[] Ingredients { get; private set; } = null;

        public Recipe(string _name, Ingredient[] _ings, int _timer = 5)
        {
            Name = _name;
            Ingredients = _ings;
            MinutesPreparationTimer = TimeSpan.FromMinutes(_timer);
        }

        public bool Prepare(Stock _stock)
        {
            Console.Clear();
            Console.WriteLine($"preparation de {Name}...");
            for (int i = 0; i < Ingredients.Length; i++)
            {
                if (_stock.CanUseStock(Ingredients[i]))
                {
                    Console.WriteLine($"Utilisation de {Ingredients[i]}\n");
                    _stock.ReduceStock(Ingredients[i]);
                }
                else
                {
                    Console.WriteLine("Stock insuffisant -> echec de la preparation");
                    return false;
                }
            }
            return true;
        }
    }
}
