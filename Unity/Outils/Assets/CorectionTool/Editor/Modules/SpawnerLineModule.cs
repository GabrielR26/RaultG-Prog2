using EditorsUtils.Handles;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawner - Line Module")]
public class SpawnerLineModule : SpawnerModule
{
    [SerializeField, Range(1, 50)] int size = 5;
    [SerializeField, Range(.1f, 10)] float gap = 1;

    public override void DrawModule(SpawnerToolComponent _tool)
    {
        base.DrawModule(_tool);
        if (!moduleEnable)
            return;
        size = EditorGUILayout.IntSlider("Line size : ", size, 1, 50);
        gap = EditorGUILayout.Slider("Line gap : ", gap, .1f, 10);
    }
    public override void DrawSceneModule(Vector3 _origin)
    {
        if (!moduleEnable)
            return;
        for (int x = 0; x < size; x++)
        {
            Vector3 _position = new Vector3(0, 0, x + (gap * x)) + _origin;
            HandlesUtils.Cube(_position, Vector3.one * 0.5f, Color.red);
            //HandlesUtils.Label(_position + Vector3.up, $"{(x * sizeY) + y}", Color.black);
        }
    }

    public override List<GameObject> Spawn(SpawnerToolComponent _tool)
    {
        List<GameObject> _items = new List<GameObject>();
        for (int x = 0; x < size; x++)
        {
            Vector3 _position = new Vector3(0, 0, x + (gap * x)) + _tool.transform.position;
            GameObject _item = Instantiate(_tool.ItemBehaviour.PickItem(), _tool.ItemBehaviour.GetItemPosition(_position), Quaternion.identity);
            _item.name = $"item {x} [SPAWNED ({ModuleName})]";
            _items.Add(_item);
        }
        return _items;
    }
}
