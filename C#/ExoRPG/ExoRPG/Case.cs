using System;
using ExoRPG.Element;

namespace ExoRPG.Map
{
    /// <summary>
    /// A Case of a Grid
    /// State: the state of the case (0 = classic, 1 = start, 2 = end...)
    /// Entity: the current Entity of the case
    /// </summary>
    internal class Case
    {
        public int State { get; set; } = 0;
        public Entity Entity { get; set; } = null;

        public Case(int _state = 0, Entity _entity = null) 
        {
            State = _state;
            Entity = _entity;
        }

        public override string ToString()
        {
            return State == 1 ? "S" : State == 2 ? "E" : " ";
        }
    }
}
