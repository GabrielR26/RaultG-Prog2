using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExoMacDonald_Corr
{
    internal class MenuData
    {
        public string Label { get; private set; } = string.Empty;
        public Action MenuAction { get; private set; } = null;

        public MenuData(string _label, Action _menuAction)
        {
            Label = _label;
            MenuAction = _menuAction;
        }
    }
}
