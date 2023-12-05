using EditorsUtils.Handles;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawner - Grid Module")]
public class SpawnerGridModule : SpawnerModule
{
    [SerializeField, Range(2, 50)] int sizeX = 2, sizeY = 2;
    [SerializeField, Range(.1f, 10)] float gap = 1;
    public int Total => sizeX * sizeY;

    public override void DrawModule(SpawnerToolComponent _tool)
    {
        base.DrawModule(_tool);
        if(!moduleEnable) 
            return;
        sizeX = EditorGUILayout.IntSlider("Grid size X : ", sizeX, 2, 50);
        sizeY = EditorGUILayout.IntSlider("Grid size Y : ", sizeY, 2, 50);
        gap = EditorGUILayout.Slider("Grid gap : ", gap, .1f, 10);
        EditorGUILayout.HelpBox($"Total to spawn : {Total}", MessageType.None);
    }
    public override void DrawSceneModule(Vector3 _origin)
    {
        if(!moduleEnable) 
            return;
        for (int x = 0; x < sizeX; x++)
        {
            for (int y = 0; y < sizeY; y++)
            {
                Vector3 _position = new Vector3(x + (gap * x), 0, y + (gap * y)) + _origin;
                HandlesUtils.SolidDisc(_position, 0.5f, Color.red);
                //HandlesUtils.Label(_position + Vector3.up, $"{(x * sizeY) + y}", Color.black);
            }
        }
    }

    public override List<GameObject> Spawn(SpawnerToolComponent _tool)
    {
        List<GameObject> _items = new List<GameObject>();
        for (int x = 0; x < sizeX; x++)
        {
            for (int y = 0; y < sizeY; y++)
            {
                Vector3 _position = new Vector3(x + (gap * x), 0, y + (gap * y)) + _tool.transform.position;
                GameObject _item = Instantiate(_tool.ItemBehaviour.PickItem(), _tool.ItemBehaviour.GetItemPosition(_position), Quaternion.identity);
                _item.name = $"item {x * sizeY + y} [SPAWNED ({ModuleName})]";
                _items.Add(_item);
            }
        }
        return _items;
    }
}
