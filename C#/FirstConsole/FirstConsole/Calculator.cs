using System;
using FirstConsole.CalculatorSystem;

namespace FirstConsole
{
    internal class Calculator
    {
        Menu mainMenu = null;

        public Calculator()
        {
            Operations _operations = new Operations();
            string[] _calcFunctName =
            {
                "Addition",
                "Substraction",
                "Divide",
                "Multiply"
            };
            Action[] _calcFunct =
            {
                () => Console.WriteLine(_operations.Add(2,2)),
                () => Console.WriteLine(_operations.Sub(2,2)),
                () => Console.WriteLine(_operations.Div(2,2)),
                () => Console.WriteLine(_operations.Mult(2, 2))
            };

            mainMenu = new Menu("Calculator", _calcFunctName, _calcFunct);
        }
        
    }
}
