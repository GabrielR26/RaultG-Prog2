using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DirtManager : MonoBehaviour
{
    [SerializeField] GameObject dirt = null;
    [SerializeField] int spawnDelay = 5;

    private void Start()
    {
        InvokeRepeating(nameof(SpawnDirt), 0, spawnDelay);
    }

    void SpawnDirt()
    {
        Instantiate(dirt, NavZone.Instance.GetNavPoint() + Vector3.up, Quaternion.identity);
    }
}
