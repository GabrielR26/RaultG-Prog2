using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerToolComponent : MonoBehaviour
{
    [SerializeField] SpawnerModule[] modules = null;
    [SerializeField] SpawnerItemBehaviour itemBehaviour = new();
    [SerializeField] SpawnerDictionary<string, List<GameObject>> modulesHistoric = new();

    public SpawnerItemBehaviour ItemBehaviour => itemBehaviour;

    public void InitModules()
    {
        modules = Resources.LoadAll<SpawnerModule>("ToolModules");
    }

    public void DisableAllModule()
    {
        for (int i = 0; i < modules.Length; i++)
        {
            modules[i].ModuleEnable = false;
        }
    }

    public void AddNewItems(string _id, List<GameObject> _items)
    {
        if (modulesHistoric.ContainsKey(_id))
            modulesHistoric[_id].AddRange(_items);
        else
            modulesHistoric.Add(_id, _items);
    }
    public void ClearItems(string _id)
    {
        if (!modulesHistoric.ContainsKey(_id))
            return;
        for (int i = 0;i < modulesHistoric[_id].Count;i++)
            DestroyImmediate(modulesHistoric[_id][i]);
        modulesHistoric[_id].Clear();
    }
}
