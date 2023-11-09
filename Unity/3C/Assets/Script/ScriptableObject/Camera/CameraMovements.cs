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
        get => Vector3.zero;
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

    }

    protected Vector3 GetLocaloffset(float _x, float _y, float _z)
    {
        return (target.right * _x) + (target.up * _y) + (target.forward * _z);
    }

    protected T CastSettings<T>() where T : CameraSettings
    {
        //fonctionne grace au where
        return (T)cameraSettings;
    }
}
