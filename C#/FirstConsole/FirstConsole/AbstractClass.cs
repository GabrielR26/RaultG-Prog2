using System;

namespace FirstConsole
{
    public abstract class AbstractClass
    {
        public abstract int Property { get; set; } //Obligatoire
        public abstract void Use(); //Obligatoire
        public virtual void Test() { } //non obligatoire
        void Test1() { } //non obligatoire
    }
}
