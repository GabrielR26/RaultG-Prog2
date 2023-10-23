using System;

namespace FirstConsole.CalculatorSystem
{
    public class MenuData
    {
        string label = "";
        Action data = null;

        public MenuData(string _label, Action _data) { 
            label = _label;
            data = _data;
        }

        public string Get() => label;
        public void Invoke()
        {
            data?.Invoke();
        }
    }

    internal class Menu
    {

        #region Var
        string menuTitle = string.Empty;
        string[] choices = null;
        Action[] actions = null;
        //new string[3]{
        //"A",
        //"B",
        //"C"
        //};
        #endregion

        #region Const
        public Menu()
        {
            choices = new string[0];
            actions = new Action[0];
        }
        public Menu(string[] _choices)
        {
            menuTitle = "Base menu";
            choices = _choices;
            ShowMenu(Selection);
        }

        public Menu(string _title, string[] _choices, Action[] _actions)
        {
            //menuTitle = "*****[" + _title + "]*****";
            //menuTitle = string.Format("*****[{0}]*****\n", _title);
            menuTitle = $"*****[{_title}]*****";
            choices = _choices;
            actions = _actions;
            ShowMenu(Selection);
        }
        #endregion

        #region Methods
        public void ShowMenu(Action _callback)
        {
            Console.WriteLine(menuTitle);
            for (int i = 0; i < choices.Length; i++)
                Console.WriteLine($"{i + 1}-{choices[i]}");
            _callback?.Invoke();
        }
        void Selection()
        {
            Console.WriteLine("Select : ");

            //string _select = Console.ReadLine();
            //int index = 0;
            //index = int.Parse(_select);
            bool _isValid = int.TryParse(Console.ReadLine(), out int _index);
            if (!_isValid || !InputCheck(_index, choices.Length))
                Selection();

            actions[_index - 1]?.Invoke();
            Selection();
            //float _a = SelectionNumberOne();
            //float _b = SelectionNumberTwo();
            //Console.WriteLine($"resultat : {_res}\n");
        }

        float SelectionNumberOne()
        {
            Console.WriteLine("Number One: ");
            bool _isValid = float.TryParse(Console.ReadLine(), out float _numberOne);
            if (!_isValid)
                SelectionNumberOne();
            return _numberOne;
        }
        float SelectionNumberTwo()
        {
            Console.WriteLine("Number Two: ");
            bool _isValid = float.TryParse(Console.ReadLine(), out float _numberTwo);
            if (!_isValid)
                SelectionNumberTwo();
            return _numberTwo;
        }
        bool InputCheck(int _input, int _sizeMax) => _input >= 1 && _input <= _sizeMax;
        #endregion
    }
}
