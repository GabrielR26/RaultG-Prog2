using System;
using UnityEngine;
using Random = UnityEngine.Random;

[Serializable]
public class SpawnerItemBehaviour
{
    [SerializeField] GameObject item = null;
    [SerializeField] GameObject[] items = null;
    [SerializeField] bool useSingleItem = true;

    public GameObject PickItem()
    {
        return useSingleItem ? item : GetRandomObject();
    }
    GameObject GetRandomObject()
    {
        int _rand = Random.Range(0, items.Length);
        return items[_rand];
    }

    public Vector3 GetItemPosition(Vector3 _from)
    {
        bool _hit = Physics.Raycast(_from, Vector3.down, out RaycastHit _res, 100);
        Debug.DrawRay(_from, Vector3.down, Color.red, 2);
        return _hit ? _res.point : _from;
    }
}
