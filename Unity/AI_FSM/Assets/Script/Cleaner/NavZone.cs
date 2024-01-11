using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavZone : MonoBehaviour
{
    [SerializeField] float maxDistance = 100;

    static NavZone instance = null;
    Vector3 navPoint = Vector3.zero;

    public static NavZone Instance => instance;

    private void Awake()
    {
        if (instance)
        {
            Destroy(this);
            return;
        }
        instance = this;
    }

    public Vector3 GetNavPoint()
    {
        return navPoint = new Vector3(Random.Range(-maxDistance, maxDistance), 0, Random.Range(-maxDistance, maxDistance));
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;
        Gizmos.DrawSphere(navPoint, 1);
    }
}
