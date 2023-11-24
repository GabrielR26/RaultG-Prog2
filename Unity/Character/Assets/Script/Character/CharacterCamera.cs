using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CharacterCamera : MonoBehaviour
{
    [SerializeField] Character character = null;
    [SerializeField] CameraCharacter cameraCharacterRef = null;
    [SerializeField] float cameraDistance = 5;
    [SerializeField] float cameraHeight = 5;
    [SerializeField] float cameraOffsetY = 5;
    [SerializeField] LayerMask ignoreLayer = 5;

    CameraCharacter cameraCharacter = null;
    Camera cam = null;

    Ray raycast;
    RaycastHit hitInfo;

    void Awake()
    {
        character = GetComponent<Character>();
        cameraCharacter = Instantiate(cameraCharacterRef);
        cam = cameraCharacter.AddComponent<Camera>();

        if (character)
        {
            character.OnCameraRotate += (_axis) => RotateCamera(_axis);
        }
    }

    void LateUpdate() => UpdateCameraPosition();
    void UpdateCameraPosition()
    {
        Vector3 _origin = transform.position + transform.up * cameraOffsetY;
        Vector3 _direction = -transform.forward + transform.up * cameraHeight;
        raycast = new Ray(_origin, _direction);
        bool _isHit = Physics.Raycast(raycast, out hitInfo, cameraDistance, ~ignoreLayer);
        if (_isHit) 
            cameraCharacter.transform.position = hitInfo.point;
        else
            cameraCharacter.transform.position = _origin + _direction * cameraDistance;
        cameraCharacter.transform.LookAt(transform.position + transform.up * 4);
    }

    void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawRay(raycast.origin, raycast.direction * cameraDistance);
    }

    void RotateCamera(float _axis)
    {
        //Debug.Log("camera rotate : " + _axis.ToString());
    }
}
