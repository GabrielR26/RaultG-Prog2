using System;

namespace FirstConsole
{
    internal class Eventlesson
    {
        public static event Action OnMyEvent = null;

        public void Execute()
        {
            OnMyEvent?.Invoke();
        }
    }
}
