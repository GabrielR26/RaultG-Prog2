using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnedItem : MonoBehaviour
{
    public void ToDestroyImmediate()
    {
        DestroyImmediate(gameObject);
    }
}
