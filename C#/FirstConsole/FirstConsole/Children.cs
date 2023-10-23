using System;

namespace FirstConsole
{
    internal class Children : Base
    {
        string ex = string.Empty;
        public override string Name { 
            get => base.Name; 
            protected set => base.Name = value; 
        }

        public Children() : base() { }

        public Children(string name) : base(name) { }
        public Children(string name, string _ex) : base(name) 
        {
            ex = _ex;
        }

        public override void ProtectedVirtualMethod(string _method)
        {
            base.ProtectedVirtualMethod(_method);
            base.ProtectedSubVirtualMethod(_method);
        }
    }
}
