using System;

namespace FirstConsole
{
    internal class ActionLesson
    {
        Action onAction = null;
        Action<int> onActionint = null;

        public ActionLesson() 
        {
            onAction = () =>
            {
                onAction += Test;
                onAction += null;
                onAction += null;
            };
            //onAction += Test;
            //onAction += null;
            //onAction += null;
            onActionint += Test;
            onAction?.Invoke();
            onActionint?.Invoke(10);

            Execute(CallBack);
            ExecuteInt(CallBack, 5);

            onAction -= Test;
            onAction = null;
            onActionint = null;
        }

        public void Test()
        {
            Console.WriteLine("test action");
        }
        public void Test(int _value)
        {
            Console.WriteLine(_value);
        }

        void CallBack()
        {
            Console.WriteLine("callback action");
        }
        void CallBack(int _value)
        {
            Console.WriteLine(_value);
        }

        public void Execute(Action _callback)
        {
            _callback?.Invoke();
        }
        public void ExecuteInt(Action<int> _callback, int _value)
        {
            _callback?.Invoke(_value);
        }
    }
}
