using System;

namespace FirstConsole
{
    /// <summary>
    /// Implement IDamage -> IExample
    /// </summary>
    internal class Final : IDamage
    {
        public int Life { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public string Name { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

        public void ApplyDamage(int _damage)
        {
            throw new NotImplementedException();
        }

        public void First()
        {
            throw new NotImplementedException();
        }

        public int Last(int _value)
        {
            throw new NotImplementedException();
        }
    }
}
