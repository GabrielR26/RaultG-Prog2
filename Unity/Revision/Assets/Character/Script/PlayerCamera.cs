using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    [SerializeField] Player player = null;
    [SerializeField] CameraPlayer refCameraPlayer = null;
    [SerializeField, Range(1, 10)] float cameraDistance = 1f;
    [SerializeField, Range(1, 10)] float cameraSpeed = 5f;
    [SerializeField] float cameraOffset = 5f;
    [SerializeField] Transform SelectCodePlacement = null;

    CameraPlayer cameraPlayer = null;
    float x, y;
    Ray ray;
    bool selectCodeView = false;

    public Vector2 Rotation { get; private set; }
    public Vector3 Offset => transform.position + (Vector3.up * cameraOffset);

    private void Awake()
    {
        player = GetComponent<Player>();
        if (player)
        {
            player.OnChangeView += () => selectCodeView = !selectCodeView;
            player.OnZoom += (_zoom) => cameraDistance = Mathf.Clamp(cameraDistance + (_zoom * Time.deltaTime), 1, 10);
            player.OnClick += () =>
            {
                if (selectCodeView)
                    cameraPlayer.RayCastMouse();
            };
            player.OnRotation += (_rotation) =>
            {
                Rotation = _rotation;
            };
        }
    }
    private void Start()
    {
        cameraPlayer = Instantiate(refCameraPlayer);
        x = player.transform.eulerAngles.x - 90;
        y = player.transform.eulerAngles.y;
    }
    private void LateUpdate()
    {
        if (selectCodeView)
        {
            cameraPlayer.Position = SelectCodePlacement.position;
            cameraPlayer.transform.forward = SelectCodePlacement.forward;
        }
        else
        {
            UpdatePosition();
            LookAtPlayer();
        }
    }

    void LookAtPlayer()
    {
        cameraPlayer.transform.LookAt(Offset);
        transform.forward = new Vector3(cameraPlayer.transform.forward.x, 0, cameraPlayer.transform.forward.z);
    }
    void UpdatePosition()
    {
        //Spring arm
        ray = new Ray(Offset, GetOrbitPosition(Rotation));
        bool _hit = Physics.Raycast(ray.origin, ray.direction, out RaycastHit _hitInfo, cameraDistance);
        if (_hit)
            cameraPlayer.Position = _hitInfo.point;
        else
            cameraPlayer.Position = ray.origin + (ray.direction * cameraDistance);
    }
    Vector3 GetOrbitPosition(Vector2 _rotation)
    {
        //Incrémente et clamp la rotation
        x += _rotation.x * cameraSpeed;
        y += _rotation.y * cameraSpeed;
        y = Mathf.Clamp(y, -10, 45);
        //Orbit x/y et x/z
        float _x = Mathf.Cos(x * Mathf.Deg2Rad) * cameraDistance;
        float _y = Mathf.Sin(y * Mathf.Deg2Rad) * cameraDistance;
        float _z = Mathf.Sin(x * Mathf.Deg2Rad) * cameraDistance;

        return new Vector3(_x, _y, _z);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawRay(ray.origin, ray.direction * cameraDistance);
    }
}
