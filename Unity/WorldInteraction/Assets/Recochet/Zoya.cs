using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class Zoya : MonoBehaviour
{
    [SerializeField] int bounce = 5;
    Vector3[] points = null;

    private void Update()
    {
        ZoyaBounce();
    }

    void ZoyaBounce()
    {
        points = new Vector3[bounce];
        RaycastHit _res;
        Ray _ray = new Ray(transform.position, transform.forward);
        for (int i = 0; i < bounce; i++)
        {
            points[i] = _ray.origin;
            Physics.Raycast(_ray.origin, _ray.direction, out _res, 100);
            //Debug.DrawRay(_ray.origin, _ray.direction * _res.distance, Color.red);
            _ray = new Ray(_res.point, Vector3.Reflect(_ray.direction, _res.normal));
        }
    }

    private void OnDrawGizmos()
    {
        for (int i = 0;i < points?.Length;i++) 
        {
            Gizmos.color = Color.red;
            if (i < points.Length - 1)
                Gizmos.DrawLine(points[i], points[i + 1]);
            Gizmos.DrawSphere(points[i], .2f);
        }
    }

    Vector3 Reflect(Vector3 _dir, Vector3 _normal)
    {
        return _dir - 2 * Vector3.Dot(_dir, _normal) * _normal;
    }
}
