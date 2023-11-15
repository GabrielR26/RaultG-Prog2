using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraPNJFollow : CameraFollow
{
    Vector3 destination, pivot;
    public override Vector3 FinalPosition => destination;
    public override Vector3 TargetPosition => pivot;

    public void SetDestination(Vector3 _dest)
    {
        destination = _dest;
    }

    public void SetLookAt(Vector3 _pivot)
    {
        pivot = _pivot;
    }
}
