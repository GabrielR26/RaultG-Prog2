using UnityEngine;

public class SpringArm : MonoBehaviour
{
    Transform cameraTransform = null;
    [SerializeField, Range(1, 20)] int armLength = 5;

    public Vector3 FinalPoint => transform.position + transform.forward * -armLength;

    void Start() => FindCamera();
    private void LateUpdate() => UpdateCameraPosition(GetCameraAlpha());
    private void UpdateCameraPosition(float _alpha = 1)
    {
        if (!cameraTransform)
            return;
        cameraTransform.transform.position = Vector3.Lerp(transform.position, FinalPoint, _alpha);
    }

    void FindCamera()
    {
        if (transform.childCount == 0)
            return;
        Camera _cam = transform.GetChild(0).GetComponent<Camera>();
        if (_cam)
            cameraTransform = _cam.transform;
    }

    float GetCameraAlpha()
    {
        bool _res = Physics.Raycast(new Ray(transform.position, transform.forward * -armLength), out RaycastHit _hitInfo, armLength);
        return _res ? (_hitInfo.distance / armLength) : 1;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = cameraTransform ? Color.red : Color.gray;
        Gizmos.DrawRay(transform.position, transform.forward * -armLength);
    }
}
