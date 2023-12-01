using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public enum ESpawnMode
{
    None,
    Grid,
    Line,
    Circle,
    Random
}

public class SpawnedToolComponent : MonoBehaviour
{
    [SerializeField] ESpawnMode spawnMode = ESpawnMode.None;
    [SerializeField, HideInInspector] bool preview = true;
    [SerializeField, HideInInspector] int number1 = 2;
    [SerializeField, HideInInspector] int number2 = 2;
    [SerializeField, HideInInspector] int number3 = 2;
    [SerializeField, HideInInspector] int gap = 1;
    [SerializeField, HideInInspector] bool multipleItems = false;
    [SerializeField, HideInInspector] SpawnedItem item = null;
    [SerializeField, HideInInspector] List<SpawnedItem> items = new();
    [SerializeField, HideInInspector] bool itemRandomRotation = false;
    [SerializeField, HideInInspector] bool itemRandomScale = false;
    [SerializeField, HideInInspector] bool itemSnap = false;

    List<SpawnedItem> allItems = new();

    public bool IsValid => item || items.Count != 0;
 
    public void SpawnUniqueItems()
    {
        for (int line = 0; line < number1 * gap; line += gap)
        {
            for (int col = 0; col < number2 * gap; col += gap)
            {
                Vector3 _offset = transform.forward * line + transform.right * col;
                Vector3 _position = transform.position + _offset;
                SpawnedItem _item = Instantiate(item, _position, transform.rotation);
                SetItem(_item);
            }
        }
    }
    public void SpawnmultipleItems()
    {
        //TODO spawn items
    }
    public void DestroyllItems()
    {
        for (int i = 0; i < allItems.Count; i++)
            DestroyImmediate(allItems[i]);
        allItems.Clear();
    }

    void GetRandomItem()
    {
        //TODO random item
    }
    void SetItem(SpawnedItem _item)
    {
        if (itemRandomRotation)
            _item.transform.rotation = Random.rotation;
        if (itemRandomScale)
        {
            int _rand = Random.Range(0, 5);
            _item.transform.localScale.Set(_rand, _rand, _rand);
        }
    }
}
