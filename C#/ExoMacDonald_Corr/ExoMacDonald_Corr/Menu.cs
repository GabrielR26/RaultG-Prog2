using System;

namespace ExoMacDonald_Corr
{
    internal class Menu
    {
        public event Action OnShowMenu = null;
        public event Action<int> OnSelection = null;

        public string Title { get; private set; } = string.Empty;
        protected MenuData[] data = null;

        public Menu(string _title, MenuData[] _data)
        {
            Title = $"***[{_title}]***\n";
            data = _data;
            OnShowMenu += Selection;
        }

        public virtual void ShowMenu()
        {
            Console.WriteLine(Title);
            for (int i = 0; i < data.Length; i++)
                Console.WriteLine($"{i+1}.{data[i].Label}");
            OnShowMenu?.Invoke();
        }
        public virtual void Selection()
        {
            bool _isValid = int.TryParse(Console.ReadLine(), out int _select);
            while (!_isValid || !InputCheck(_select, data.Length))
                Selection();
            int _index = _select - 1;
            OnSelection?.Invoke(_index);
        }

        public virtual bool InputCheck(int _input, int _sizemax) => _input >= 1 && _input <= _sizemax;
    }
}
