using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorPlayer : MonoBehaviour
{
    [SerializeField] PlayerShooter shootBehaviour = null;
    [SerializeField] CharacterController controller = null;

    void Start() => Cursor.lockState = CursorLockMode.Confined;
    void Update()
    {
        Movement();
        PlayerInteract();
    }
    void Movement()
    {
        float _axis = Input.GetAxis("Vertical");
        controller.SimpleMove(transform.forward * _axis * 10);

        float _xAxis = Input.GetAxis("Mouse X"),
              _yAxis = -Input.GetAxis("Mouse Y");
        transform.eulerAngles += new Vector3(_yAxis, _xAxis, 0);
    }
    void PlayerInteract()
    {
        bool _leftAction = Input.GetKeyDown(KeyCode.Mouse0),
            _rightAction = Input.GetKeyDown(KeyCode.Mouse1);
        if (_leftAction)
            shootBehaviour.Shoot(0);
        else if (_rightAction)
            shootBehaviour.Shoot(1);
    }
}
