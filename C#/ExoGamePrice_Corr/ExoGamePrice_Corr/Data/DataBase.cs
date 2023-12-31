﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExoGamePrice_Corr.Data
{
    public class DataBase
    {
        public static Dictionary<int, Store> AllStoresDB { get; private set; } = new Dictionary<int, Store>();

        public static void AddStore(Store _store)
        {
            if (AllStoresDB.ContainsKey(_store.StoreID))
                return;
            AllStoresDB.Add(_store.StoreID, _store);
        }
    }
}
