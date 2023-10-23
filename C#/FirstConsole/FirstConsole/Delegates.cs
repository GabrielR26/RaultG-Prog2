using System;
using System.Timers;

namespace FirstConsole
{
    internal class DelegatesLesson
    {
        public delegate void OnDelegate();
        OnDelegate onDelegate;
        delegate void OnDelegateInt(int _value);
        OnDelegateInt onDelegateInt;

        public DelegatesLesson() 
        {
            onDelegate += Test;
            onDelegate += () => { }; //lambda
            onDelegate?.Invoke();

            //onDelegate += Test;
            //onDelegate += Test;
            //onDelegateInt += Test;
            //onDelegate();
            //onDelegateInt(10);
            //onDelegate -= Test;
            //onDelegate();
            //onDelegateInt(5);
            //onDelegate = null;
            //onDelegateInt = null;
        }

        void Test()
        {
            Console.WriteLine("Test delegate");
            Execute(CallBack);
            ExecuteInt(CallBack, 42);
        }
        void Test(int _value)
        {
            Console.WriteLine(_value);
        }

        void CallBack()
        {
            Console.WriteLine("callback delegate");
        }
        void CallBack(int _value)
        {
            Console.WriteLine(_value);
        }

        public void Execute(OnDelegate _method)
        {
            //Timer _t = new Timer();
            //_t.Interval = 1000;
            //_t.Start();
            _method?.Invoke();
        }
        void ExecuteInt(OnDelegateInt _method, int _val)
        {
            _method?.Invoke(_val);
        }
    }
}
