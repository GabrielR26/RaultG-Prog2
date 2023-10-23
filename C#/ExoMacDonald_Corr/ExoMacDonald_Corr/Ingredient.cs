using System;

namespace ExoMacDonald_Corr
{
    internal class Ingredient
    {
        //string name = string.Empty;
        //int quantity = 1;
        int quantity = 1;
        public int Quantity { 
            get => quantity;
            set
            {
                quantity = value;
                quantity = quantity < 0 ? 0 : quantity;
            }
        }
        public string Name { get; private set; } = string.Empty;

        public Ingredient(string _name, int _quantity = 1)
        {
            Name = _name;
            Quantity = _quantity;
        }
        public override string ToString()
        {
            return $"{Name} - x{Quantity}";
        }

        public override bool Equals(object obj)
        {
            return ((Ingredient)obj).Name.ToLower() == this.Name.ToLower();
        }

        public static bool operator ==(Ingredient _this, Ingredient _ing)
        {
            return _this.Name.ToLower() == _ing.Name.ToLower();
        }
        public static bool operator !=(Ingredient _this, Ingredient _ing)
        {
            return !(_this == _ing);
        }
        public static Ingredient operator +(Ingredient _this, int _value)
        {
            _this.Quantity += _value;
            return _this;
        }
        public static Ingredient operator -(Ingredient _this, int _value)
        {
            _this.Quantity -= _value;
            return _this;
        }
    }
}
