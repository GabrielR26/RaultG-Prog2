using System;

namespace ExoMacDonald.Database
{
    internal class IngredientAvailable
    {
        static Ingredient[] ingredientsListe = null;

        public IngredientAvailable()
        {
            ingredientsListe = new Ingredient[] {
                new Ingredient("viande", new string[]{"Big mac" } ),
                new Ingredient("pain", new string[]{"Big mac" }),
                new Ingredient("salade", new string[]{"Big mac" }),
                new Ingredient("fromage", new string[]{"Big mac" }),
                new Ingredient("sauce", new string[]{"Big mac" }),
                new Ingredient("oignons", new string[]{"Big mac" }),
                new Ingredient("cornichons", new string[]{"Big mac" }),
                new Ingredient("patates", new string[]{"Fries" }),
                new Ingredient("huile", new string[]{"Fries" }),
                new Ingredient("coca-cola", new string[]{"Coca-cola" }),
                new Ingredient("glace", new string[]{"Coca-cola" }),
                new Ingredient("creme glacée", new string[]{"Sundae" }),
                new Ingredient("coulis", new string[]{"Sundae" }),
            };
        }

        public static Ingredient[] Ingredients() => ingredientsListe;
        public static Ingredient GetIngredient(int _index) => _index < 0 ? null : _index > ingredientsListe.Length ? null : ingredientsListe[_index];
    }
}
