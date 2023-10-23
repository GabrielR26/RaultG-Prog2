using System;
using ExoMacDonald.Database;

namespace ExoMacDonald
{
    internal class Program
    {
        static void Main(string[] args)
        {
            new IngredientAvailable();
            new ProductsAvailable();
            new MacDonald();
            Console.Read();
        }
    }
}

//EXO: McDonald -> Menu
//                  -> Commande
//                      -> Preparation -> Ingredients