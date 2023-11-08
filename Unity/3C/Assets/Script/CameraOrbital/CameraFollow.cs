using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : CameraMovements
{
    protected override void UpdateCameraPosition()
    {
        if (cameraSettings.MovementType == MovementType.Lerp)
            transform.position = Vector3.Lerp(CurrentPosition, FinalPosition, 
                Time.deltaTime * cameraSettings.CameraSpeed);
        else
            transform.position = Vector3.MoveTowards(CurrentPosition, FinalPosition, 
                Time.deltaTime * cameraSettings.CameraSpeed);
    }

    protected override void DrawDebugMovement()
    {
        base.DrawDebugMovement();
        if (!useDebug | !cameraSettings)
            return;
        Gizmos.color = IsValid ? validDebugColor : noValidDebugColor;
        Gizmos.DrawWireCube(CurrentPosition, Vector3.one * 1f);
        if (!IsValid)
            return;
        Gizmos.DrawLine(CurrentPosition, FinalPosition);
        Vector3 _targetGizmo = FinalPosition + Vector3.up;
        Gizmos.DrawSphere(_targetGizmo, .1f);
        Gizmos.color = Color.white;
        Gizmos.DrawLine(FinalPosition, _targetGizmo);
        Gizmos.color = Color.magenta;
        Gizmos.DrawLine(CurrentPosition, TargetPosition);
        Gizmos.DrawLine(FinalPosition, TargetPosition);
    }
}
