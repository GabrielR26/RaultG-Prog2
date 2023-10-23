using System;
namespace ExoMacDonald_Corr
{
    internal class McdoMenu : Menu
    {
        public McdoMenu(string _title, McDoData[] _data) : base(_title, _data) 
        {
            OnSelection += (index) => data[index]?.MenuAction?.Invoke();
        }

        public override void ShowMenu()
        {
            base.ShowMenu();
        }
    }
}
