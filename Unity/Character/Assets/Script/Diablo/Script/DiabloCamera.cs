using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiabloCamera : MonoBehaviour
{
    [SerializeField] Camera currentCamera = null;

    public Camera Camera => currentCamera;
}
