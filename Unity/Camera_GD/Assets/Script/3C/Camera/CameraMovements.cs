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

[RequireComponent(typeof(CameraManaged))]
public abstract class CameraMovements : MonoBehaviour
{
    [SerializeField] protected Transform target = null;

    #region Settings
    [SerializeField, Header("Camera settings data")]
    protected CameraSettings cameraSettings = null;
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
                throw new NullReferenceException();
            return target.position;
        }
    }
    public virtual Vector3 FinalPosition
    {
        get => TargetPosition + Offset;
    }
    public virtual Vector3 Offset
    {
        get => Vector3.zero;
    }
    #endregion

    void LateUpdate()
    {
        UpdateCameraPosition();
        UpdatelookAtCamera();
    }
    protected virtual void UpdateCameraPosition()
    {}
    protected virtual void UpdatelookAtCamera()
    {
        Vector3 _fwd = (TargetPosition - transform.position).normalized;
        Vector3 _right = Vector3.Cross(Vector3.up, _fwd).normalized;
        Vector3 _up = Vector3.Cross(_fwd, _right);
        Matrix4x4 _matrix = new Matrix4x4(_right, _up, _fwd, new Vector4(0, 0, 0, 1));
        transform.rotation = Quaternion.Lerp(transform.rotation, _matrix.rotation, Time.deltaTime);
    }

    void OnDrawGizmos()
    {
        DrawDebugMovement();
    }
    protected virtual void DrawDebugMovement()
    {
    }

    protected Vector3 GetLocaloffset(float _x, float _y, float _z)
    {
        return (target.right * _x) + (target.up * _y) + (target.forward * _z);
    }
    public void SetTarget(Transform _target) => target = _target;

    protected T CastSettings<T>() where T : CameraSettings
    {
        //fonctionne grace au where
        return (T)cameraSettings;
    }
}
