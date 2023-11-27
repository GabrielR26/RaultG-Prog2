using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraInteraction : MonoBehaviour
{
    [SerializeField] Camera cameraOrigin = null;
    [SerializeField] Transform target = null;
    [SerializeField] Vector2 viewport = Vector2.zero;
    [SerializeField] float depth = 5;
    [SerializeField] RectTransform uiObject = null;


    void LateUpdate() => RaycastViewportView();
    void ScreenToWorldCameraInteract()
    {
        Vector3 _input = new Vector3(Input.mousePosition.x, Input.mousePosition.y, depth);
        Vector3 _position = cameraOrigin.ScreenToWorldPoint(_input);
        target.position = _position;
    }
    void ViewportToWorldCameraInteract()
    {
        Vector3 _position = cameraOrigin.ViewportToWorldPoint(new Vector3(viewport.x, viewport.y, depth));
        target.position = _position;
    }
    void ConvertScreenToViewport()
    {
        cameraOrigin.ScreenToViewportPoint(Input.mousePosition);
    }
    void WorldToScreen()
    {
        uiObject.position = cameraOrigin.WorldToScreenPoint(target.position);
    }
    void RaycastScrenView()
    {
        Vector3 _input = new Vector3(Input.mousePosition.x, Input.mousePosition.y, depth);
        Ray _ray = cameraOrigin.ScreenPointToRay(_input);
        bool _hit = Physics.Raycast(_ray.origin, _ray.direction, out RaycastHit _res);
        Debug.Log(_hit ? _res.collider.name : "no hit");
    }
    void RaycastViewportView()
    {
        Ray _ray = cameraOrigin.ViewportPointToRay(new Vector3(viewport.x, viewport.y, depth));
        bool _hit = Physics.Raycast(_ray.origin, _ray.direction, out RaycastHit _res);
        Debug.Log(_hit ? _res.collider.name : "no hit");
    }
}
