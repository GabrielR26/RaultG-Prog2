using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class CameraPlayer : MonoBehaviour
{
    [SerializeField] Camera cameraPlayer = null;
    [SerializeField] LayerMask layerCode;

    Ray ray;

    public Vector3 Position { get => transform.position; set { transform.position = value; } }

    private void Awake()
    {
        cameraPlayer = GetComponent<Camera>();
    }

    public void RayCastMouse()
    {
        Vector3 _mouse = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 100);
        ray = cameraPlayer.ScreenPointToRay(_mouse);
        bool _hit = Physics.Raycast(ray.origin, ray.direction, out RaycastHit _hitInfo, 100, layerCode);
        if (_hit)
            _hitInfo.transform.GetComponent<Code>().ChangeIsGood();
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;
        Gizmos.DrawRay(ray.origin, ray.direction * 100);
    }
}
