using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerWithOtherInput : MonoBehaviour
{
    [SerializeField] InputActionAsset controls = null;
    [SerializeField] float moveSpeed = 5;
    [SerializeField] float rotateSpeed = 50;
    [SerializeField] InputAction move = null;
    [SerializeField] InputAction rotate = null;
    [SerializeField] InputAction fire = null;

    void Start() => Init();
    void Init()
    {
    }

    private void LateUpdate()
    {
        Move();
        Rotate();
    }

    void Move()
    {
        if (move == null)
            return;
        Vector3 _moveDir = move.ReadValue<Vector3>();
        transform.position += transform.forward * _moveDir.z * Time.deltaTime * moveSpeed;
        transform.position += transform.right * _moveDir.x * Time.deltaTime * moveSpeed;
    }
    void Rotate()
    {
        if (rotate == null)
            return;
        //float _axis = rotate.ReadValue<float>();
        //transform.eulerAngles += transform.up * _axis * Time.deltaTime * rotateSpeed;
    }
    void Shoot(InputAction.CallbackContext _context)
    {
        if (fire == null)
            return;
        Debug.Log("Fire");
    }

    private void OnEnable()
    {
        move = controls.FindActionMap("Player").FindAction("Movement");
        rotate = controls.FindActionMap("Player").FindAction("Rotate");
        fire = controls.FindActionMap("Player").FindAction("Fire");
        move.Enable();
        //rotate.Enable();
        //fire.Enable();
    }
    private void OnDisable()
    {
        move.Disable();
        rotate.Disable();
        fire.Disable();
    }
}
