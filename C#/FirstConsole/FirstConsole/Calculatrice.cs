using System;

namespace FirstConsole
{
    internal class Calculatrice
    {
        public void DisplayMenu()
        {
            Console.WriteLine($"\n Select operation : Add - Sub - Time - Div");
        }

        public int SelectOperation(string _ope)
        {
            int _a = 0, _b = 0;
            Console.WriteLine("\n number a :");
            //_a = Console.ReadLine();
            Console.WriteLine("\n number b :");
            //_b = Console.ReadLine();

            switch (_ope)
            {
                case "add":
                    return Add(_a, _b);
                case "sub":
                    return Sub(_a, _b);
                case "time":
                    return Time(_a, _b);
                case "div":
                    return Div(_a, _b);
                default:
                    return -1;
            }
        }

        public int Add(int _a, int _b)
        {
            return _a + _b;
        }

        public int Sub(int _a, int _b) 
        { 
            return _a - _b;
        }

        public int Time(int _a, int _b)
        {
            return _a * _b;
        }

        public int Div(int _a, int _b)
        {
            if (_b == 0) 
                return 0;
            return _a / _b;
        }

    }
}
