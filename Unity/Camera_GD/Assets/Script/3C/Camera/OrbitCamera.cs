using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbitCamera : CameraMovements
{
    public override Vector3 FinalPosition => RotatePoint() + TargetPosition;

    [SerializeField, Header("Orbit settings"), Range(.1f, 10)] float radius = 2;
    //[SerializeField] AnimationCurve expression = null;
    //[SerializeField, Range(0, 5)] float duration = 5;

    float angle = 0;

    protected override void UpdateCameraPosition()
    {
        transform.position = FinalPosition;
    }
    protected override void DrawDebugMovement()
    {
        CameraOrbitSettings _set = CastSettings<CameraOrbitSettings>();
        Gizmos.DrawWireSphere(TargetPosition, _set ? _set.Radius : 1);
    }
    Vector3 RotatePoint()
    {
        CameraOrbitSettings _set = CastSettings<CameraOrbitSettings>();
        float _radius = _set ? _set.Radius : 1;
        angle = ComputeAngle();
        float _x = Mathf.Cos(angle * Mathf.Deg2Rad) * _radius;
        float _z = Mathf.Sin(angle * Mathf.Deg2Rad) * _radius;
        return new Vector3(_x, 0, _z);
    }
    float ComputeAngle()
    {
        //angle += Mathf.MoveTowards(angle, 1, Time.deltaTime * .5f);
        //angle %= 1;
        return CastSettings<CameraOrbitSettings>().Expression.Evaluate(Time.time) * 360;
    }
}
