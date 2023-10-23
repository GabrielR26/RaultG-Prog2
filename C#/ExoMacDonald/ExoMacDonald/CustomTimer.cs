using System;
using System.Runtime.InteropServices;
using System.Timers;

namespace ExoMacDonald
{
    internal class CustomTimer
    {
        public static event Action<int> OnDelayTimer = (delay) => Console.WriteLine($"\n### OnDelayTimer {delay} ###");
        public static event Action OnEndTimer = () => Console.WriteLine("\n### OnEndTimer ###");
        Timer timer = null;
        int maxDelay = 0;

        public CustomTimer(int _maxDelay)
        {
            timer = new Timer();
            maxDelay = _maxDelay;
            int _delay = 0;
            //Tick timer
            timer.Interval = 1000;
            timer.Elapsed += (o, e) =>
            {
                _delay++;
                OnDelayTimer?.Invoke(_delay);
                CheckEndTimer(_delay);
            };
            timer.Start();
        }

        void CheckEndTimer(int _delay)
        {
            if (_delay == maxDelay)
            {
                timer.Stop();
                OnEndTimer?.Invoke();
            }
        }
    }
}
