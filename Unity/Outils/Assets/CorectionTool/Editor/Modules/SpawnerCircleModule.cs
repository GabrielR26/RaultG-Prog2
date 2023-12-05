using EditorsUtils.Handles;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Graphs;
using UnityEngine;

[CreateAssetMenu(fileName = "Spawner - Circle Module")]
public class SpawnerCircleModule : SpawnerModule
{
    [SerializeField, Range(3, 50)] int definition = 5;
    [SerializeField, Range(.1f, 50)] float radius = 1;

    public override void DrawModule(SpawnerToolComponent _tool)
    {
        base.DrawModule(_tool);
        if (!moduleEnable)
            return;
        definition = EditorGUILayout.IntSlider("Circle definition :", definition, 1, 50);
        radius = EditorGUILayout.Slider("Circle radius : ", radius, .1f, 10);
    }
    public override void DrawSceneModule(Vector3 _origin)
    {
        if (!moduleEnable)
            return;
        HandlesUtils.Disc(_origin, radius, Color.red);
        float _part = 360f / definition;
        for (float a = 0; a < 360; a += _part)
        {
            Vector3 _position = GetPositionOnCircle(a) + _origin;
            HandlesUtils.Disc(_position, 0.5f, Color.red);
            //HandlesUtils.Label(_position + Vector3.up, $"{(x * sizeY) + y}", Color.black);
        }
    }

    public override List<GameObject> Spawn(SpawnerToolComponent _tool)
    {
        List<GameObject> _items = new List<GameObject>();
        int _index = 0;
        float _part = 360f / definition;
        for (float a = 0; a < 360; a += _part)
        {            
            Vector3 _position = GetPositionOnCircle(a) + _tool.transform.position;
            GameObject _item = Instantiate(_tool.ItemBehaviour.PickItem(), _tool.ItemBehaviour.GetItemPosition(_position), Quaternion.identity);
            _item.name = $"item {_index} [SPAWNED ({ModuleName})]";
            _items.Add(_item);
            _index++;
        }
        return _items;
    }

    Vector3 GetPositionOnCircle(float _angle)
    {
        float _x = Mathf.Cos(Mathf.Deg2Rad * _angle) * radius;
        float _z = Mathf.Sin(Mathf.Deg2Rad * _angle) * radius;
        return new Vector3(_x, 0, _z);
    }
}
