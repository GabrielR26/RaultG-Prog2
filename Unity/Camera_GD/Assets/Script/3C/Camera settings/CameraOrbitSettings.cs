using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Camera orbit settings")]
public class CameraOrbitSettings : CameraSettings
{
    [SerializeField, Header("Orbit settings"), Range(.1f, 10)] float radius = 2;
    [SerializeField] AnimationCurve expression = new AnimationCurve(new Keyframe[]
        {
            new Keyframe(0f, 0f),
            new Keyframe(1f, 1f),
        });

    public float Radius => radius;
    public AnimationCurve Expression => expression;
}
