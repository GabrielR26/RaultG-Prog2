using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class PNJDialogueCameraSystem : MonoBehaviour
{
    [SerializeField] Transform target = null;
    [SerializeField] PNJCameraSettings settings;
    CameraPNJFollow cameraActive = null;

    #region Properties
    public Transform Target => target;
    public float DistanceToTarget => Vector3.Distance(CurrentPosition, TargetPosition);
    public float Radius => DistanceToTarget / 2;
    public Vector3 CurrentPosition => transform.position;
    public Vector3 TargetPosition
    {
        get
        {
            if (!target)
                throw new System.NullReferenceException("TARGET IS MISSING");
            return target.position;
        }
    }
    public Vector3 Height => Vector3.up * CastSettings<PNJCameraSettingsBase>(settings).Height;
    public Vector3 FinalCameraPosition => FinalCameraPositionWithoutHeight + Height;
    public Vector3 FinalCameraPositionWithoutHeight => GetCameraPosition(CastSettings<PNJCameraSettingsBase>(settings).Angle, Radius);
    public Vector3 Pivot => Vector3.Lerp(CurrentPosition, TargetPosition, CastSettings<PNJCameraSettingsBase>(settings).PivotPosition);
    public Vector3 LookAt { get; private set; } 
    #endregion

    public void InitCameraDialog()
    {
        cameraActive = Instantiate(CastSettings<PNJCameraSettingsBase>(settings).CameraObject, FinalCameraPosition, Quaternion.identity);
        cameraActive.transform.forward = (TargetPosition - cameraActive.transform.position);
    }

    void LateUpdate()
    {
        UpdateCameraPosition();
    }
    void UpdateCameraPosition()
    {
        if (!cameraActive)
            return;
        cameraActive.SetDestination(FinalCameraPosition);
        cameraActive.SetLookAt(LookAt);
    }
    public void SetTarget(Transform _target) => target = _target;
    public void SetLookAt(bool _isPNJ) => LookAt = _isPNJ ? CurrentPosition : TargetPosition;

    public Vector3 GetCameraPosition(float _angle = 45, float _radius = 10)
    {
        float _rad = _angle * Mathf.Deg2Rad;
        return Pivot + new Vector3(Mathf.Cos(_rad) * _radius, 0, Mathf.Sin(_rad) * _radius);
    }
    T CastSettings<T>(PNJCameraSettings _settings) where T : PNJCameraSettings => (T)_settings;
    void OnDrawGizmos() => DrawDebug();
    void DrawDebug()
    {
        Gizmos.color = target ? Color.green : Color.red;
        Gizmos.DrawWireSphere(TargetPosition, 1);
        Gizmos.DrawLine(TargetPosition, CurrentPosition);

        Gizmos.color = Color.yellow;
        Gizmos.DrawSphere(Pivot, 0.2f);

        GizmoUtils.DrawCicle(Pivot, Radius, Color.cyan, 30);
        Gizmos.color = Color.cyan;
        Gizmos.DrawSphere(FinalCameraPosition, 0.2f);
        Gizmos.DrawLine(FinalCameraPosition, Pivot);
        Gizmos.DrawLine(FinalCameraPositionWithoutHeight, Pivot);
        Gizmos.DrawLine(FinalCameraPosition, FinalCameraPositionWithoutHeight);
    }
}
