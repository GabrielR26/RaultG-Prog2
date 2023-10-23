using System;

namespace FirstConsole
{
    internal class FuncLesson
    {
        Func<int> onFuncInt = null;
        Func<int, int, int> onFuncIntparams = null;

        public FuncLesson()
        {
            onFuncInt += Test;
            Console.WriteLine(onFuncInt?.Invoke());
            onFuncIntparams += TestParam;
            Console.WriteLine(onFuncIntparams?.Invoke(2, 3));
            Console.WriteLine(Value(null) == null);
        }

        int TestParam(int _a, int _b) => _a + _b;
        int Test() => 10;

        int? Value(Func<int, int> _func) => _func?.Invoke(3);
    }
}
