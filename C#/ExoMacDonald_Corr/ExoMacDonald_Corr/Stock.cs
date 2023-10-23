using System;

namespace ExoMacDonald_Corr
{
    internal class Stock
    {
        public event Action OnReduceStock = null,
                            OnRefillStock = null;
        public Ingredient[] CurrentStock { get; private set; } = new Ingredient[]
                {
                    new Ingredient("Pain", 2),
                    new Ingredient("Salade", 1),
                    new Ingredient("Steack", 2),
                    new Ingredient("Potatoes",1)
                };

        public void RefillStock()
        {
            CurrentStock = new Ingredient[]
                {
                    new Ingredient("Pain", 2),
                    new Ingredient("Salade", 1),
                    new Ingredient("Steack", 2),
                    new Ingredient("Potatoes",1)
                };
            ShowStock();
            OnRefillStock?.Invoke();
        }
        public bool CanUseStock(Ingredient _ing)
        {
            for (int j = 0; j < CurrentStock.Length; j++)
                if (CurrentStock[j] == _ing) // ou CurrentStock[j].Equals(_ing)
                    return CurrentStock[j].Quantity > 0;
            return false;
        }
        public void ReduceStock(Ingredient _ing)
        {
            for (int j = 0; j < CurrentStock.Length; j++)
                if (CurrentStock[j].Name.ToLower() == _ing.Name.ToLower())
                    CurrentStock[j].Quantity -= _ing.Quantity;
            OnReduceStock?.Invoke();
        }

        public void ShowStock()
        {
            for (int j = 0; j < CurrentStock.Length; j++)
                Console.WriteLine($"{CurrentStock[j]}\n");
        }

        public override string ToString()
        {
            string _str = "";
            for (int j = 0; j < CurrentStock.Length; j++)
                _str += $"{CurrentStock[j]}\n";
            return _str;
        }
    }
}
