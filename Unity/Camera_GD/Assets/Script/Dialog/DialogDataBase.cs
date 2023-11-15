using System;
using System.Collections.Generic;

public class DialogDataBase
{
    public static Dictionary<int, string[]> dataBase = new Dictionary<int, string[]>()
    {
        { 
            0, new string[]
            {
                "1+1 = ?",
                "2",
                "3",
                "4"
            }
        },
        {
            1, new string[]
            {
                "2+2 = ?",
                "4",
                "6",
                "8"
            }
        }
    };

    public static string[] GetRandomDialog()
    {
        Random _random = new Random();
        int _res = _random.Next(0, dataBase.Count);
        return dataBase[_res];
    }
}
