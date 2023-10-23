using ExoRPG.Map;
using System;

namespace ExoRPG.Element
{
    /// <summary>
    /// An entity that can be found in a grid
    /// </summary>
    internal abstract class Entity
    {
        //public Case currentCase { get; protected set; } = null;
        public string Name { get; protected set; } = string.Empty; //maybe useless
        public char Display { get; protected set; } = '\0';

        public Entity(string _name, char _display) 
        {
            Name = _name;
            Display = _display;
        }

        public override string ToString()
        {
            return Display.ToString();
        }
    }
}
