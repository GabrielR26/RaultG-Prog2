using System.Collections.Generic;
using UnityEngine;

public enum ESpawnMode
{
    None,
    Grid,
    Line,
    Circle
}

public class SpawnedToolComponent : MonoBehaviour
{
    [SerializeField] ESpawnMode spawnMode = ESpawnMode.None;
    [SerializeField, HideInInspector] bool preview = true;
    [SerializeField, HideInInspector] int number1 = 0;
    [SerializeField, HideInInspector] int number2 = 0;
    [SerializeField, HideInInspector] float number3 = 0;
    [SerializeField, HideInInspector] int gap = 0;
    [SerializeField, HideInInspector] bool multipleItems = false;
    [SerializeField, HideInInspector] SpawnedItem item = null;
    [SerializeField, HideInInspector] List<SpawnedItem> items = new();
    [SerializeField, HideInInspector] bool itemRandomRotation = false;
    [SerializeField, HideInInspector] bool itemRandomScale = false;
    [SerializeField, HideInInspector] bool itemSnap = false;
    [SerializeField, HideInInspector] List<SpawnedItem> allItems = new();

    GameObject listItems;

    public bool IsValid => item || items.Count != 0;

    public void SpawnGridItems()
    {
        DestroyllItems();
        listItems = new("ListItems");
        for (int line = 0; line < number1 * gap; line += gap)
        {
            for (int col = 0; col < number2 * gap; col += gap)
            {
                Vector3 _offset = transform.forward * line + transform.right * col;
                Vector3 _position = transform.position + _offset;
                SpawnedItem _item = Instantiate(multipleItems ? GetRandomItem() : item, _position, transform.rotation, listItems.transform);
                allItems.Add(_item);
                SetItem(_item);
            }
        }
    }
    public void SpawnLineItems()
    {
        DestroyllItems();
        listItems = new("ListItems");
        for (int line = 0; line < number1 * gap; line += gap)
        {
            Vector3 _offset = transform.forward * line;
            Vector3 _position = transform.position + _offset;
            SpawnedItem _item = Instantiate(multipleItems ? GetRandomItem() : item, _position, transform.rotation, listItems.transform);
            allItems.Add(_item);
            SetItem(_item);
        }
    }
    public void SpawnCircleItems()
    {
        DestroyllItems();
        listItems = new("ListItems");
        float _part = 360f / number1;
        for (float i = 0; i <= 360; i += _part)
        {
            float _x = Mathf.Cos(Mathf.Deg2Rad * i) * number2;
            float _z = Mathf.Sin(Mathf.Deg2Rad * i) * number2;
            Vector3 _offset = new Vector3(_x, 0, _z);
            Vector3 _position = transform.position + _offset;
            SpawnedItem _item = Instantiate(multipleItems ? GetRandomItem() : item, _position, transform.rotation, listItems.transform);
            allItems.Add(_item);
            SetItem(_item);
        }
    }
    public void DestroyllItems()
    {
        for (int i = 0; i < allItems.Count; i++)
            allItems[i].ToDestroyImmediate();
        allItems.Clear();
        DestroyImmediate(listItems);
    }

    SpawnedItem GetRandomItem()
    {
        return items[Random.Range(0, items.Count)];
    }
    void SetItem(SpawnedItem _item)
    {
        if (itemSnap)
        {
            Vector3 _origin = _item.transform.position,
                    _direction = -_item.transform.up;
            bool _hit = Physics.Raycast(_origin, _direction, out RaycastHit _res, float.MaxValue);
            if (_hit)
            {
                _item.transform.position = _res.point;
                _item.transform.up = _res.normal;
            }
        }
        if (itemRandomScale)
        {
            int _rand = Random.Range(1, 3);
            _item.transform.localScale = Vector3.one * _rand;
        }
        if (itemRandomRotation)
            _item.transform.rotation = Random.rotation;
    }
}
