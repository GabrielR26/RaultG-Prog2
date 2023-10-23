using System;

namespace ExoRPG.Element
{
    /// <summary>
    /// Entity player
    /// </summary>
    internal class Player : Entity, IMouvement, ICombat
    {
        public Action<int> OnMouvePlayer { get; set; } = null;
        public int damage { get; set; }
        public int Life { get; set; }
        public int Mana { get; set; }

        public Player() : base("Player", 'P')
        {
            RPG.onTick += Mouvement;
        }

        public void Mouvement()
        {
            ConsoleKeyInfo _key = Console.ReadKey();
            switch (_key.Key)
            {
                case ConsoleKey.UpArrow:
					OnMouvePlayer?.Invoke(0);
					break;
                case ConsoleKey.DownArrow:
					OnMouvePlayer?.Invoke(1);
					break;
                case ConsoleKey.LeftArrow:
					OnMouvePlayer?.Invoke(2);
                    break;
                case ConsoleKey.RightArrow:
					OnMouvePlayer?.Invoke(3);
					break;
                default:
                    break;
            }
        }

        public void TakeDamage(int _damage)
        {
            
        }

        public void AddLife(int _add)
        {
            Life += _add;
        }

        public bool RemoveLife(int _remove)
        {
            if (Life - _remove <= 0) 
                return false;
            return true;
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
