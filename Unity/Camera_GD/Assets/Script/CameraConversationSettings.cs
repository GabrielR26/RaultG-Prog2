using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "camera conversation settings")]
public class CameraConversationSettings : ScriptableObject
{
    [SerializeField, Range(-10, 10)] float cameraHeight = 2;
    [SerializeField, Range(0, 360)] float cameraAngle = 90;
    [SerializeField, Range(0, 10)] float cameraSpeed = 5;
    [SerializeField, Range(10, 1000)] float targetDistance = 100;
    /*[SerializeField, Range(1, 100)]*/ 
    float cameraDistance = 10;

    public float CameraDistance
    {
        get => cameraDistance;
        set => cameraDistance = value;
    }
    public float CameraHeight
    {
        get => cameraHeight;
        set => cameraHeight = value;
    }
    public float CameraAngle
    {
        get => cameraAngle;
        set => cameraAngle = value >= 360 ? 0 : value;
    }
    public float CameraSpeed
    {
        get => cameraSpeed;
        set => cameraSpeed = value;
    }
    public float TargetDistance
    {
        get => targetDistance;
        set => targetDistance = value;
    }
}
