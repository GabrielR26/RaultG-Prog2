using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu (fileName ="PNJ settings")]
public class PNJCameraSettingsBase : PNJCameraSettings
{
    [SerializeField, Range(0, 1)] float pivotPosition = .5f;
    [SerializeField, Range(0, 360)] float angle = 45f;
    [SerializeField, Range(-20, 20)] int height = 2;
    [SerializeField] CameraPNJFollow cameraObject = null;

    public float PivotPosition => pivotPosition;
    public float Angle => angle;
    public int Height => height;
    public CameraPNJFollow CameraObject => cameraObject;
}
