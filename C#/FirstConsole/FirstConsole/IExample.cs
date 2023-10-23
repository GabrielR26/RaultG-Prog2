using System;

namespace FirstConsole
{
    public interface IExample
    {
        string Name { get; set; }
        void First();
        int Last(int _value);
    }

    public interface IDamage : IExample
    {
        int Life { get; set; }
        void ApplyDamage(int _damage);
    }
}
