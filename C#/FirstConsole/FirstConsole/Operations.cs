using System;

namespace FirstConsole.CalculatorSystem
{
    internal class Operations
    {
        public float Add(float _a, float _b) => _a + _b;
        public float Sub(float _a, float _b) => _a - _b;
        public float Div(float _a, float _b) => _a / (_b == 0 ? 1 : _b);
        public float Mult(float _a, float _b) => _a * _b;
    }
}
