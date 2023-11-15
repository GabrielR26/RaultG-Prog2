using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Progress;


public class ManagerExample : Singleton<ManagerExample>, IManager<string, ItemManaged>
{
    Dictionary<string, ItemManaged> items = new();
    public Dictionary<string, ItemManaged> ItemsManaged => items;

    #region Implement
    public void Add(ItemManaged _item)
    {
        if (items.ContainsKey(_item.ItemID.ToLower()))
            return;
        items.Add(_item.ItemID.ToLower(), _item);
        _item.name += " [MANAGED]";
    }
    public void Remove(ItemManaged _item)
    {
        if (!items.ContainsKey(_item.ItemID.ToLower()))
            return;
        items.Remove(_item.ItemID.ToLower());
    }

    public void DisableItem(ItemManaged _item)
    {
        if (!items.ContainsKey(_item.ItemID.ToLower()))
            return;
        items[_item.ItemID.ToLower()].Disable();
    }
    public void DisableItem(string _key)
    {
        if (!items.ContainsKey(_key.ToLower()))
            return;
        items[_key.ToLower()].Disable();
    }
    public void EnableItem(ItemManaged _item)
    {
        if (!items.ContainsKey(_item.ItemID.ToLower()))
            return;
        items[_item.ItemID.ToLower()].Enable();
    }
    public void EnableItem(string _key)
    {
        if (!items.ContainsKey(_key.ToLower()))
            return;
        items[_key.ToLower()].Enable();
    } 
    #endregion
}
