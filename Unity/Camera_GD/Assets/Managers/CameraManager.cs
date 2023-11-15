using System.Collections.Generic;
using UnityEngine;

public class CameraManager : Singleton<CameraManager>
{
    Dictionary<string, CameraManaged> allCameras = new();
    [SerializeField] CameraFollow cameraFollow = null;
    [SerializeField] OrbitCamera cameraOrbite = null;

    public void AddCamera(CameraManaged _camera)
    {
        string _lower = _camera.CameraID.ToLower();
        if (allCameras.ContainsKey(_lower))
            return;
        allCameras.Add(_lower, _camera);
        _camera.name += " [MANAGED]";
    }
    public void RemoveCamera(CameraManaged _camera)
    {
        string _lower = _camera.CameraID.ToLower();
        if (!allCameras.ContainsKey(_lower))
            return;
        allCameras.Remove(_lower);
    }

    public void DisableCamera(CameraManaged _camera)
    {
        string _lower = _camera.CameraID.ToLower();
        if (!allCameras.ContainsKey(_lower))
            return;
        allCameras[_lower].Disable();
    }
    public void EnableCamera(CameraManaged _camera)
    {
        string _lower = _camera.CameraID.ToLower();
        if (!allCameras.ContainsKey(_lower))
            return;
        allCameras[_lower].Enable();
    }
    public void DisableCamera(string _cameraID)
    {
        if (!allCameras.ContainsKey(_cameraID))
            return;
        allCameras[_cameraID].Disable();
    }
    public void EnableCamera(string _cameraID)
    {
        if (!allCameras.ContainsKey(_cameraID))
            return;
        allCameras[_cameraID].Enable();
    }

    public void CreateCameraFollow(string _id, Transform _target)
    {
        CameraFollow _instance = Instantiate(cameraFollow);
        _instance.SetTarget(_target);
        _instance.GetComponent<CameraManaged>().RegisterCamera(_id);
    }
    public void CreateCameraOrbit(string _id, Transform _target)
    {
        OrbitCamera _instance = Instantiate(cameraOrbite);
        _instance.SetTarget(_target);
        _instance.GetComponent<CameraManaged>().RegisterCamera(_id);
    }

    public void CreateCamera<T>(T _prefab, string _id, Transform _target) where T : CameraMovements
    {
        T _instance = Instantiate(_prefab);
        _instance.SetTarget(_target);
        _instance.GetComponent<CameraManaged>().RegisterCamera(_id);
    }
}
