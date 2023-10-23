using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoWPF
{
    internal class URLBdd
    {
        public static Dictionary<string, string> URL = new Dictionary<string, string>()
        {
            { "CPP", "https://learn.microsoft.com/fr-fr/" },
            { "C#", "https://learn.microsoft.com/fr-fr/dotnet/csharp/" },
            { "Unreal", "https://docs.unrealengine.com/5.1/en-US/API/" }
        };
    }
}
