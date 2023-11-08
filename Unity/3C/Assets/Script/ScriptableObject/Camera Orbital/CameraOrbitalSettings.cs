using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum CameraBehaviour
{
    Basic_Rotation,
    Curve_Rotation,
    //Curve_PingPong
}

[CreateAssetMenu(fileName = "Camera orbital settings")]
public class CameraOrbitalSettings : ScriptableObject
{
    [SerializeField, Range(1, 100)] float cameraSpeed = 0;
    [SerializeField, Range(0, 100)] float cameraDistance = 0;
    [SerializeField, Range(-100, 100)] float height = 0;
    [SerializeField, Range(0, 360)] float startAngle = 0;
    [SerializeField] CameraBehaviour cameraBehaviour = CameraBehaviour.Basic_Rotation;

    float currentAngle = 0;

    public float CameraSpeed => cameraSpeed;
    public float CameraDistance => cameraDistance;
    public float Height => height;
    public float StartAngle => startAngle;
    public float CurrentAngle
    {
        get => currentAngle;
        set => currentAngle = value >= 360 ? 0 : value;
    }
    public CameraBehaviour CameraBehaviour => cameraBehaviour;
}
