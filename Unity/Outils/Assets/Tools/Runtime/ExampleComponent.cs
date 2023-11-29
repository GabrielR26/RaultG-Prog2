using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExampleComponent : MonoBehaviour
{
    [SerializeField] int numberOfCubes = 2;
    [SerializeField] int gap = 2;
    [SerializeField] PrimitiveType type;
    List<GameObject> spawnedObjects = new();

    void Start() => SpawnObjects();
    public void SpawnObjects()
    {
        ClearObjects();
        for (int i = 0; i < numberOfCubes * gap; i += gap)
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
    }
}
