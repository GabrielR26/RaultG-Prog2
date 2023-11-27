using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraPlayer : MonoBehaviour
{
    [SerializeField] Camera cameraPlayer = null;
    public Camera Camera => cameraPlayer;
}
