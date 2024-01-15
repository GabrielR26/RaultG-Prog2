using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotSightSensor : SightSensor
{
    public Vector3 LeftConeDebug => transform.position + Quaternion.Euler(0, -sightAngle / 2, 0) * transform.forward * sightRange;
    public Vector3 RightConeDebug => transform.position + Quaternion.Euler(0, sightAngle / 2, 0) * transform.forward * sightRange;
    public Vector3 UpConeDebug => transform.position + Quaternion.Euler(sightAngle / 2, 0, 0) * transform.up * sightRange;
    public Vector3 DownConeDebug => transform.position + Quaternion.Euler(-sightAngle / 2, 0, 0) * -transform.up * sightRange;

    public override void UpdateSight()
    {
        Collider[] _items = Physics.OverlapSphere(transform.position, sightRange, layers);

        DrawCone();

        for (int i = 0; i < _items.Length; i++)
        {
            Vector3 _direction = (_items[i].transform.position - transform.position).normalized;
            float _angle = Vector3.Angle(transform.forward, _direction);
            if (_angle < sightAngle / 2)
            {
                TargetInSight = _items[i].gameObject;
                return;
            }
        }
    }

    private void DrawCone()
    {
        Debug.DrawLine(transform.position, LeftConeDebug, Color.red);
        Debug.DrawLine(transform.position, RightConeDebug, Color.red);
        Debug.DrawLine(transform.position, UpConeDebug, Color.blue);
        Debug.DrawLine(transform.position, DownConeDebug, Color.blue);

        for (int i = -(sightAngle / 2); i < (sightAngle / 2); i++)
        {
            Vector3 _pos1 = transform.position + Quaternion.Euler(0, i, 0) * (transform.forward * sightRange);
            Vector3 _pos2 = transform.position + Quaternion.Euler(0, i + 1, 0) * (transform.forward * sightRange);
            Debug.DrawLine(_pos1, _pos2, Color.red);
        }
        //Debug.DrawLine(LeftConeDebug, RightConeDebug, Color.red);
        //Debug.DrawLine(UpConeDebug, DownConeDebug, Color.red);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;
        //Gizmos.DrawWireSphere(transform.position, sightRange);
    }
}
