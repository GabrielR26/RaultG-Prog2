using System;
using System.Timers;

namespace ExoMacDonald_Corr
{
    internal class McDonald
    {
        Timer timer = new Timer();
        Recipe[] recipes = null;
        Menu menu = null;
        Recipe currentRecipe = null;
        Stock stock = new Stock();
        TimeSpan timerKitchen = new TimeSpan();

        public McDonald()
        {
            new Stock();
            InitTimer();
            InitRecipes();
            InitMenu();
        }
        public McDonald(Recipe[] _recipes)
        {
            recipes = _recipes;
        }

        void InitTimer()
        {
            timer.Interval = 1000;
            timer.Elapsed += (o, e) =>
            {
                timerKitchen += TimeSpan.FromSeconds(1);
                if (timerKitchen == currentRecipe?.MinutesPreparationTimer)
                {
                    timer.Stop();
                    Console.Clear();
                    menu.ShowMenu();
                }
                else
                    Console.Clear();
                Console.WriteLine($"Preparation de {currentRecipe.Name} -> {timerKitchen}/{currentRecipe?.MinutesPreparationTimer}");
            };
        }

        void InitRecipes()
        {
            recipes = new Recipe[]
            {
                new Recipe("BigMac", new Ingredient[]
                {
                    new Ingredient("Pain"),
                    new Ingredient("Salade"),
                    new Ingredient("Steack")
                }, 2),
                new Recipe("Fries", new Ingredient[]
                {
                    new Ingredient("Potatoes")
                }, 1),
            };
        }

        void InitMenu()
        {
            McDoData[] _data = new McDoData[recipes.Length + 2];
            for (int i = 0; i < recipes.Length; i++)
            {
                Recipe _recipe = recipes[i];
                int _index = i;
                _data[i] = new McDoData(_recipe?.Name, () => MakeRecipe(_index));
            }

            _data[recipes.Length] = new McDoData("Show stock", () =>
            {
                stock.ShowStock();
                menu.ShowMenu();
            });
            _data[recipes.Length + 1] = new McDoData("Refill stock", () =>
            {
                stock.RefillStock();
                menu.ShowMenu();
            });

            menu = new McdoMenu("McDonald - Bonjour", _data);
            menu.ShowMenu();
        }

        void MakeRecipe(int _index)
        {
            timerKitchen = new TimeSpan();
            currentRecipe = recipes[_index];
            if (currentRecipe.Prepare(stock))
                timer.Start();
        }
    }
}
