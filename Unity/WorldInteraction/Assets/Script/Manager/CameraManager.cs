using System.Collections.Generic;
using UnityEngine;

public class CameraManager : Singleton<CameraManager>
{
    Dictionary<string, CameraManaged> cameras = new();

    public void AddCamera(CameraManaged _camera)
    {
        if (cameras.ContainsKey(_camera.CameraID.ToLower()))
            return;
        cameras.Add(_camera.CameraID.ToLower(), _camera);
        _camera.name += " [MANAGED]";
    }
    public void RemoveCamera(CameraManaged _camera)
    {
        if (cameras.ContainsKey(_camera.CameraID.ToLower()))
            return;
        cameras.Remove(_camera.CameraID.ToLower());
    }
}
