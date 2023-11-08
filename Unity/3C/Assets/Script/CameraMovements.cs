using UnityEngine;
using System;

public enum MovementType
{
    Lerp,
    ConstantLerp
}
public enum OffsetType
{
    World,
    Local
}

//struct
/*[Serializable]
public struct CameraSettings
{
    [SerializeField, Header("Camera settings")] MovementType movementType;
    [SerializeField, Header("Camera settings")] OffsetType offsetType;
    [SerializeField, Header("Camera settings"), Range(-20, 20)]
    float offsetX, offsetY, offsetZ;
    [SerializeField, Header("Camera settings"), Range(1, 10)]
    float cameraSpeed;

    public MovementType MovementType => movementType;
    public OffsetType OffsetType => offsetType;
    public float OffsetX => offsetX;
    public float OffsetY => offsetY;
    public float OffsetZ => offsetZ;
    public float CameraSpeed => cameraSpeed;

    public CameraSettings(float _cameraSpeed = 1)
    {
        movementType = MovementType.Lerp;
        offsetType = OffsetType.Local;
        offsetX = offsetY = offsetZ = 0;
        cameraSpeed = _cameraSpeed;
    }
}*/

public abstract class CameraMovements : MonoBehaviour
{
    [SerializeField] protected Transform target = null;

    #region Settings
    [SerializeField, Header("Camera settings data")]
    protected CameraSettingsData cameraSettings = null;
    #endregion

    #region Debug
    [SerializeField, Header("Debug")] protected bool useDebug = true;
    [SerializeField, Header("Debug")] protected Color validDebugColor = Color.green;
    [SerializeField, Header("Debug")] protected Color noValidDebugColor = Color.red;
    //[SerializeField, Header("Debug")] AnimationCurve alpha = null;
    #endregion

    #region Properties
    public bool IsValid => target;
    public Vector3 CurrentPosition => transform.position;
    public virtual Vector3 TargetPosition
    {
        get
        {
            if (!target)
                throw new CameraTargetNullReferenceException();
            return target.position;
        }
    }
    public virtual Vector3 FinalPosition
    {
        get => TargetPosition + Offset;
    }
    public virtual Vector3 Offset
    {
        get
        {
            if (cameraSettings.OffsetType == OffsetType.Local)
                return GetLocaloffset(cameraSettings.OffsetX, cameraSettings.OffsetY, cameraSettings.OffsetZ);
            else
                return new Vector3(cameraSettings.OffsetX, cameraSettings.OffsetY, cameraSettings.OffsetZ);
        }
    }
    #endregion

    void LateUpdate()
    {
        UpdateCameraPosition();
    }
    protected virtual void UpdateCameraPosition()
    {

    }

    void OnDrawGizmos()
    {
        DrawDebugMovement();
    }
    protected virtual void DrawDebugMovement()
    {
        DrawAxis();
    }
    void DrawAxis()
    {
        if (cameraSettings?.OffsetType == OffsetType.Local)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawLine(TargetPosition, TargetPosition + target.right * 2);
            Gizmos.color = Color.blue;
            Gizmos.DrawLine(TargetPosition, TargetPosition + target.forward * 2);
            Gizmos.color = Color.green;
            Gizmos.DrawLine(TargetPosition, TargetPosition + target.up * 2);
        }
    }

    Vector3 GetLocaloffset(float _x, float _y, float _z)
    {
        return (target.right * _x) + (target.up * _y) + (target.forward * _z);
    }

    //[SerializeField, Range(0,100)] float distance;
    //[SerializeField] float angle;
    //[SerializeField] float t;
    //[SerializeField] bool add;
    //[SerializeField] bool multiply;
    //[SerializeField] bool trigo;
    //[SerializeField] bool add_Vector;
    //[SerializeField] bool sub_Vector;

    //void OnDrawGizmos()
    //{
    //    if (add)
    //    {
    //        Gizmos.color = Color.red;
    //        Gizmos.DrawLine(transform.position, DrawVectorAdd());
    //        Gizmos.DrawWireSphere(DrawVectorAdd(), 2);
    //    }
    //    if (multiply)
    //    {
    //        Gizmos.color = Color.green;
    //        Gizmos.DrawLine(transform.position, DrawVectorMultiply());
    //        Gizmos.DrawWireSphere(DrawVectorMultiply(), 2);
    //    }
    //    if (trigo)
    //    {
    //        Gizmos.color = Color.blue;
    //        Gizmos.DrawLine(transform.position, DrawVectorTrigo());
    //        Gizmos.DrawWireSphere(DrawVectorTrigo(), 2);
    //    }
    //    if (add_Vector)
    //    {
    //        Gizmos.color = Color.magenta;
    //        Gizmos.DrawLine(transform.position, DrawVectorAddV());
    //        Gizmos.DrawWireSphere(DrawVectorAddV(), 2);
    //    }
    //    if (sub_Vector)
    //    {
    //        Gizmos.color = Color.yellow;
    //        Gizmos.DrawLine(transform.position, DrawVectorSubV());
    //        Gizmos.DrawWireSphere(DrawVectorSubV(), 2);
    //    }
    //}

    //Vector3 DrawVectorAdd()
    //{
    //    Vector3 _vector = transform.position;
    //    return new Vector3(_vector.x + distance, _vector.y, _vector.z);
    //}
    //Vector3 DrawVectorMultiply()
    //{
    //    Vector3 _vector = transform.position;
    //    return new Vector3(_vector.x, _vector.y, _vector.z).normalized * distance;
    //}

    //Vector3 DrawVectorTrigo()
    //{
    //    Vector3 _vector = transform.position;
    //    float _x = Mathf.Cos(Mathf.Deg2Rad * angle) * distance;
    //    float _z = Mathf.Sin(Mathf.Deg2Rad * angle) * distance;
    //    return new Vector3(_vector.x + _x, _vector.y, _vector.z + _z);
    //}
    //Vector3 DrawVectorAddV()
    //{
    //    Vector3 _vector = transform.position;
    //    Vector3 _a = new Vector3(_vector.x + distance, 0, 0);
    //    Vector3 _b = new Vector3(0, _vector.y + distance, 0);
    //    Vector3 _c = new Vector3(0, 0, _vector.z + distance);
    //    Vector3 _d = _a + _b + _c;
    //    return _d;
    //}
    //Vector3 DrawVectorSubV()
    //{
    //    Vector3 _vector = transform.position;
    //    Vector3 _a = new Vector3(_vector.x + distance, 0, 0);
    //    Vector3 _b = new Vector3(0, _vector.y + distance, 0);
    //    Vector3 _c = new Vector3(0, 0, _vector.z + distance);
    //    Vector3 _d = _a - _b - _c;
    //    return _d;
    //}
}
