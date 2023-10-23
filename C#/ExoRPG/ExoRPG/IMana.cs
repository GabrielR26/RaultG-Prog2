using System;

namespace ExoRPG
{
    internal interface IMana
    {
        int Mana { get; set; }

        void AddMana(int _add);
        /// <summary>
        /// return if Mana <= 0
        /// </summary>
        /// <param name="_remove"></param>
        /// <returns></returns>
        bool RemoveMana(int _remove);
    }
}
