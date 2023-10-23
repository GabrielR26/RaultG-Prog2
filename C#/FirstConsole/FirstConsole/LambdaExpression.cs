using System;
using System.Timers;

namespace FirstConsole
{
    internal class LambdaExpression
    {
        Action<int> first = (x) => Console.WriteLine($"res = {x}");
        Action<bool, int> second = (b, i) => Console.WriteLine($"res = {(b ? i * 2 : i)}");

        Func<int, int, int> last = (x, y) => x * y;

        public LambdaExpression()
        {
            Timer _t = new Timer();
            _t.Elapsed += (o, e) =>
            {
                Console.WriteLine("timer lambda");
            };
            _t.Interval = 1000;
            _t.Start();

            first?.Invoke(0);
            second?.Invoke(false, 2);
            second?.Invoke(true, 2);
            Console.WriteLine(last?.Invoke(3, 3));
        }
    }
}
