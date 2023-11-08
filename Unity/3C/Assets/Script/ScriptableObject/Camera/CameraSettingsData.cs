using UnityEngine;

[CreateAssetMenu(fileName = "Camera settings")]
public class CameraSettingsData : ScriptableObject
{
    [SerializeField, Header("Camera settings")] MovementType movementType;
    [SerializeField, Header("Camera settings")] OffsetType offsetType = OffsetType.Local;
    [SerializeField, Header("Camera settings"), Range(-20, 20)]
    float offsetX = 2, offsetY = 0, offsetZ = 0;
    [SerializeField, Header("Camera settings"), Range(1, 10)]
    float cameraSpeed = 2;

    public MovementType MovementType => movementType;
    public OffsetType OffsetType => offsetType;
    public float OffsetX => offsetX;
    public float OffsetY => offsetY;
    public float OffsetZ => offsetZ;
    public float CameraSpeed => cameraSpeed;
}
