using System;

namespace ExoRPG.Element
{
    internal class Enemy : Entity, ICombat, IWalkOn
    {
        public Enemy() : base("Enemy", 'X') 
        { 

        }

        public int damage { get; set; }
        public int Life { get; set; }
        public int Mana { get; set; }
        public void TakeDamage(int _damage)
        {
            ;
        }

        public void AddLife(int _add)
        {
            Life += _add;
        }
        public bool RemoveLife(int _remove)
        {
            return false;
        }

        public void AddMana(int _add)
        {
            Mana += _add;
        }


        public bool RemoveMana(int _remove)
        {
            if (Mana - _remove <= 0)
                return false;
            return true;
        }

    }
}
