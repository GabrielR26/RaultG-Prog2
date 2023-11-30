using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExampleComponent : MonoBehaviour
{
    [SerializeField] int numberOfItems = 2;
    [SerializeField] int gap = 2;
    [SerializeField] PrimitiveType type;
    [SerializeField, HideInInspector] List<GameObject> spawnedObjects = new();

    public bool IsValid => numberOfItems > 0;

    void Start() => SpawnObjects();
    public void SpawnObjects()
    {
        ClearObjects();
        for (int i = 0; i < numberOfItems * gap; i += gap)
        {
            Vector3 _position = transform.position + new Vector3(i, 0, 0);
            GameObject _object = GameObject.CreatePrimitive(type);
            _object.transform.position = _position;
            spawnedObjects.Add(_object);
        }
    }
    public void ClearObjects()
    {
        for(int i = 0; i < spawnedObjects.Count; i++)
            DestroyImmediate(spawnedObjects[i]);
        spawnedObjects.Clear();
    }
}
