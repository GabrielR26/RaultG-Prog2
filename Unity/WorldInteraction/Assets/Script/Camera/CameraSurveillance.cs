using System;
using UnityEngine;

public class CameraSurveillance : CameraBase
{
    [SerializeField] Transform target = null;

    public Transform Target => target;
    public Vector3 TargetPosition => target.position;

    protected void SetTarget(Transform _target) => target = _target;

    protected override void CameraBehaviour()
    {
        base.CameraBehaviour();
        if (Target)
            LookAtTarget();
    }

    void LookAtTarget()
    {
        if (IsActive)
            GetCamera.transform.LookAt(Target);
    }

    protected override void OnDrawGizmos()
    {
        base.OnDrawGizmos();
        if (!IsActive)
            return;
        Gizmos.color = Color.magenta;
        Gizmos.DrawLine(CameraPosition, TargetPosition);
    }
}
