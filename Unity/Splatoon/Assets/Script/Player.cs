using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(CharacterController))]
public class Player : MonoBehaviour
{
    [SerializeField] EColorBall colorball = EColorBall.Red;
    [SerializeField] PaintBall paintBall = null;
    [SerializeField] CharacterController controller = null;
    [SerializeField] CameraPlayer cameraPlayer = null;
    [SerializeField] float speed = 10;
    [SerializeField] float speedRotation = 5;
    [SerializeField] float cameraDistance = 6;
    [SerializeField] RectTransform crossAir = null;
    [SerializeField] float aimDistance = 5;
    [SerializeField] LayerMask layerColorable;

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
            Shoot();
        MoveForward(Input.GetAxis("Vertical"));
        MoveRight(Input.GetAxis("Horizontal"));
        Rotate(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y"));

        UpdateHUD();
    }
    private void LateUpdate()
    {
        UpdateCamera();
    }

    void MoveForward(float _axis)
    {
        controller.SimpleMove(transform.forward * _axis * speed);
    }
    void MoveRight(float _axis)
    {
        transform.position += transform.right * _axis / 5;
    }
    void Rotate(float _axisX, float _axisY)
    {
        Vector3 _rot = new Vector3(/*-_axisY * speedRotation*/ 0, _axisX * speedRotation, 0);
        transform.eulerAngles = transform.rotation.eulerAngles + _rot;
    }
    void Shoot()
    {
        PaintBall _ball = Instantiate<PaintBall>(paintBall, transform.position + transform.forward * 2, Quaternion.identity);
        _ball.Shoot(transform.forward);
    }

    void UpdateCamera()
    {
        Vector3 _origin = transform.position;
        Vector3 _direction = -transform.forward;
        bool _hit = Physics.Raycast(_origin, _direction, out RaycastHit _res, cameraDistance);
        cameraPlayer.transform.position = _hit ? _res.point : _origin + _direction;

        cameraPlayer.transform.forward = transform.forward;
    }
    void UpdateHUD()
    {
        Ray _ray = cameraPlayer.Camera.ViewportPointToRay(new Vector3(0.5f, 0.5f, aimDistance));
        bool _hit = Physics.Raycast(_ray.origin, _ray.direction, out RaycastHit _res, aimDistance, layerColorable);
        crossAir.GetComponent<Image>().color = _hit ? Color.magenta : Color.grey;
    }
}
