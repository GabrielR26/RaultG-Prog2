using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbitCamera : CameraMovements
{
    public override Vector3 FinalPosition => RotatePoint() + TargetPosition;

    [SerializeField, Header("Orbit settings"), Range(.1f, 10)] float radius = 2;
    [SerializeField] AnimationCurve expression = null;
    //[SerializeField, Range(0, 5)] float duration = 5;

    float angle = 0;

    private void Start()
    {
        //InitExpressionDuration();
    }

    protected override void UpdateCameraPosition()
    {
        transform.position = FinalPosition;
    }

    void InitExpressionDuration()
    {
        //Keyframe _k0 = expression.keys[0];
        //Keyframe _k1 = expression.keys[1];

        //expression.ClearKeys();
        //expression.AddKey(_k0);
        //_k1.time = duration;
        //expression.AddKey(_k1);
    }

    protected override void DrawDebugMovement()
    {
        Gizmos.DrawWireSphere(TargetPosition, radius);
    }

    Vector3 RotatePoint()
    {
        angle = ComputeAngle();
        float _x = Mathf.Cos(angle * Mathf.Deg2Rad) * radius;
        float _z = Mathf.Sin(angle * Mathf.Deg2Rad) * radius;
        return new Vector3(_x, 0, _z);
    }

    float ComputeAngle()
    {
        angle += Mathf.MoveTowards(angle, 1, Time.deltaTime);
        angle %= 360;
        return angle;
    }
}
