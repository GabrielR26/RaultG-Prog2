using System;

namespace ExoRPG
{
    internal interface ICombat : ILife, IMana
    {
        int damage { get; set; }
        void TakeDamage(int _damage);
    }
}
