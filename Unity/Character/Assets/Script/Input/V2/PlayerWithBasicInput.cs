using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerWithBasicInput : MonoBehaviour
{
    [SerializeField] InputComponent inputs = null;
    [SerializeField] float moveSpeed = 5;
    [SerializeField] float rotateSpeed = 50;
    [SerializeField] bool isFiring = false;

    void Start() => Init();
    void Init()
    {
        inputs = GetComponent<InputComponent>();
        if (!inputs)
            return;
        inputs.Fire.performed += UpdateIsFiring;
    }

    private void LateUpdate()
    {
        Move();
        Rotate();
        Shoot();
    }

    void Move()
    {
        if (!inputs)
            return;
        Vector3 _moveDir = inputs.Move.ReadValue<Vector3>();
        transform.position += transform.forward * _moveDir.z * Time.deltaTime * moveSpeed;
        transform.position += transform.right * _moveDir.x * Time.deltaTime * moveSpeed;
    }
    void Rotate()
    {
        if (!inputs)
            return;
        float _axis = inputs.Rotate.ReadValue<float>();
        transform.eulerAngles += transform.up * _axis * Time.deltaTime * rotateSpeed;
    }
    void Shoot()
    {
        if (!isFiring)
            return;
        Debug.Log("Fire");
    }

    public void UpdateIsFiring(InputAction.CallbackContext _context)
    {
        isFiring = _context.ReadValueAsButton();
    }
}
