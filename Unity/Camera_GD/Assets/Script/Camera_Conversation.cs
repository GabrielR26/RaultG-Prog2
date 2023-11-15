using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Camera_Conversation : MonoBehaviour
{
    #region Parameters
    [SerializeField, Header("Settings")] Transform camera = null;
    [SerializeField] Transform target = null;
    [SerializeField] CameraConversationSettings cameraSettings = null;
    #endregion

    #region Variables
    public bool IsValid => camera != null && target != null;
    Vector3 Position => transform.position;
    public Vector3 CameraPosition
    {
        get => camera.position;
        set => camera.position = value;
    }
    public Vector3 TargetPosition
    {
        get => target.position;
        set => target.position = value;
    }
    Vector3 CenterPosition => new Vector3((TargetPosition.x + Position.x) / 2, (TargetPosition.y + Position.y) / 2, (TargetPosition.z + Position.z) / 2);
    #endregion

    void LateUpdate()
    {
        if (!IsValid)
            return;
        UpdateCamera();
        UpdateTarget();
    }
    void UpdateCamera()
    {
        cameraSettings.CameraDistance = (cameraSettings.TargetDistance * 2) / 5f;
        CameraPosition = UpdateCameraPosition();
        cameraSettings.CameraAngle += cameraSettings.CameraSpeed / 10;

        camera.forward = -(CameraPosition - CenterPosition);
    }
    void UpdateTarget()
    {
        TargetPosition = CenterPosition + transform.forward * (cameraSettings.TargetDistance / 10);
        target.forward = -transform.forward;
    }

    Vector3 UpdateCameraPosition()
    {
        float _x = Mathf.Cos(Mathf.Deg2Rad * cameraSettings.CameraAngle) * cameraSettings.CameraDistance;
        float _z = Mathf.Sin(Mathf.Deg2Rad * cameraSettings.CameraAngle) * cameraSettings.CameraDistance;
        return CenterPosition + new Vector3(_x, cameraSettings.CameraHeight, _z);
    }

    #region Debug
    void OnDrawGizmos() => DrawDebug();
    void DrawDebug()
    {
        if (!IsValid)
            return;
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(TargetPosition, Vector3.one * 2);
        Gizmos.DrawLine(CenterPosition, TargetPosition);
        Gizmos.color = Color.green;
        Gizmos.DrawWireCube(Position, Vector3.one * 2);
        Gizmos.DrawLine(CenterPosition, Position);

        Gizmos.color = Color.cyan;
        Gizmos.DrawWireCube(CameraPosition, Vector3.one * 1);
        Gizmos.DrawLine(CenterPosition, CameraPosition);
        DrawCameraOrbit();
    }
    void DrawCameraOrbit()
    {
        for (int i = 0; i < 360; i++)
        {
            float _x = Mathf.Cos(Mathf.Deg2Rad * i) * cameraSettings.CameraDistance;
            float _z = Mathf.Sin(Mathf.Deg2Rad * i) * cameraSettings.CameraDistance;
            int _index = i == 359 ? 0 : i + 1;
            float _xx = Mathf.Cos(Mathf.Deg2Rad * _index) * cameraSettings.CameraDistance;
            float _zz = Mathf.Sin(Mathf.Deg2Rad * _index) * cameraSettings.CameraDistance;

            Vector3 _a = CenterPosition + new Vector3(_x, cameraSettings.CameraHeight, _z);
            Vector3 _b = CenterPosition + new Vector3(_xx, cameraSettings.CameraHeight, _zz);

            Gizmos.DrawLine(_a, _b);
        }
    }
    #endregion
}
