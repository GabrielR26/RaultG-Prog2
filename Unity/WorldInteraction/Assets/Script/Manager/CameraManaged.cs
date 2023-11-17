using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManaged : MonoBehaviour
{
    [SerializeField] string cameraID = "Camera";

    public string CameraID => cameraID;

    private void Start()
    {
        CameraManager.Instance.AddCamera(this);
    }
}
