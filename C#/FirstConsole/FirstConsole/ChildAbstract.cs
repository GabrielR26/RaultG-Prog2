using System;

namespace FirstConsole
{
    internal /*sealed*/ class ChildAbstract : AbstractClass, IExample, IDamage
    {
        public override int Property { get; set; }

        public int Example { get; set; } = 0;
        public string Name { get; set; }
        public int Life { get; set; }

        public ChildAbstract(int _value) 
        { 
            Example = _value;
        }

        public override void Use()
        {  }

        public sealed override void Test() // Bloque transmission
        {
            base.Test();
        }

        public void First()
        {
            ;
        }

        public int Last(int _value)
        {
            return _value;
        }

        public void ApplyDamage(int _damage)
        {
            ;
        }
    }
}
