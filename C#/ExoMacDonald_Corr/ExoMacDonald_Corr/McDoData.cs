using System;

namespace ExoMacDonald_Corr
{
    internal class McDoData : MenuData
    {
        public Recipe CurrentRecipe { get; private set; } = null;
        public McDoData(string _label, Action _action) : base(_label, _action) 
        {
            //CurrentRecipe = _recipe;
        }
    }
}
