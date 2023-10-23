using System;

namespace FirstConsole
{
    public class Base
    {
        public virtual string Name
        {
            get;
            protected set;
        }

        public Base() { }
        public Base(string _name)
        {
            Name = _name;
        }

        public void Method() { }
        public void Method(string _name) { }
        void PrivateMethod() { }
        protected void ProtectedMethod() { }
        public virtual void ProtectedVirtualMethod(string _method) { }
        public virtual void ProtectedSubVirtualMethod(string _method) 
        {
            Console.WriteLine(_method);
        }
    }
}
