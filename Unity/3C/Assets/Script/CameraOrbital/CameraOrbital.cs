using System;
using UnityEngine;

public class CameraOrbital : MonoBehaviour
{
    [SerializeField] Transform target = null;
    [SerializeField, Header("Camera settings")] CameraOrbitalSettings settings = null;
    [SerializeField] CameraOrbitalSettings CopySettings = null;

    void Start() => Init();
    void Init()
    {
        CopySettings = ScriptableObject.Instantiate<CameraOrbitalSettings>(settings);
        CopySettings.CurrentAngle = CopySettings.StartAngle;
    }

    private void OrbitalPosition()
    {
        float _x = Mathf.Cos((CopySettings.CurrentAngle - 90) * (Mathf.PI / 180)) * CopySettings.CameraDistance;
        float _z = Mathf.Sin((CopySettings.CurrentAngle - 90) * (Mathf.PI / 180)) * CopySettings.CameraDistance;
        transform.position = target.position + new Vector3(_x, CopySettings.Height, _z);
    }

    void LateUpdate() => UpdateCamera();
    void UpdateCamera()
    {
        if (CopySettings.CameraBehaviour == CameraBehaviour.Basic_Rotation)
            CopySettings.CurrentAngle += CopySettings.CameraSpeed / 50;
        else if (CopySettings.CameraBehaviour == CameraBehaviour.Curve_Rotation)
        {
            CopySettings.CurrentAngle = Mathf.Lerp(0, 360, Tweener.GetTweenAlpha(TweenerFunction.EaseInSine, CopySettings.CurrentAngle / 360) * (CopySettings.CameraSpeed / 50));
        }
        //else

        OrbitalPosition();
    }

    void OnDrawGizmos() => DrawDebug();
    void DrawDebug()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(transform.position, target.position);
        Gizmos.color = Color.gray;
        DrawCircle();
    }
    void DrawCircle()
    {
        int _index;
        float _x, _z, _xx, _zz;
        Vector3 _a, _b;
        for (int i = 0; i < 360; i++)
        {
            _x = Mathf.Cos((i) * (Mathf.PI / 180)) * settings.CameraDistance;
            _z = Mathf.Sin((i) * (Mathf.PI / 180)) * settings.CameraDistance;
            _a = target.position + new Vector3(_x, settings.Height, _z);

            _index = i == 360 ? 0 : i + 1;
            _xx = Mathf.Cos((_index) * (Mathf.PI / 180)) * settings.CameraDistance;
            _zz = Mathf.Sin((_index) * (Mathf.PI / 180)) * settings.CameraDistance;
            _b = target.position + new Vector3(_xx, settings.Height, _zz);

            Gizmos.DrawLine(_a, _b);
        }
    }
}
