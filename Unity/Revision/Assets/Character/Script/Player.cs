using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PlayerCamera), typeof(PlayerMovement), typeof(PlayerAnimation))]
public class Player : MonoBehaviour
{
    public event Action<Vector3> OnMovement = null;
    public event Action OnCrouching = null;
    public event Action OnJumping = null;

    [SerializeField] PlayerCamera playerCamera = null;
    [SerializeField] PlayerMovement playerMovement = null;
    [SerializeField] PlayerAnimation playerAnimation = null;
    [SerializeField] InputsController controller = null;
    [SerializeField] InputAction movement = null;
    [SerializeField] InputAction crouch = null;
    [SerializeField] InputAction jump = null;

    private void Awake()
    {
        playerCamera = GetComponent<PlayerCamera>();
        playerMovement = GetComponent<PlayerMovement>();
        playerAnimation = GetComponent<PlayerAnimation>();

        controller = new InputsController();
    }
    private void LateUpdate()
    {
        ThrowEvents();
    }

    private void ThrowEvents()
    {
        //Movement front/back/left/right
        Vector3 _movement = movement.ReadValue<Vector3>();
        OnMovement?.Invoke(_movement);
        //Jumping
        //bool _jump = jump.ReadValue<bool>();
        //OnJumping?.Invoke(_jump);
    }

    private void OnEnable()
    {
        movement = controller.Player.Movement;
        movement.Enable();
        crouch = controller.Player.Crouch;
        crouch.Enable();
        jump = controller.Player.Jumping;
        jump.Enable();

        crouch.performed += (e) => OnCrouching?.Invoke();
        jump.performed += (e) => OnJumping?.Invoke();
    }
    private void OnDisable()
    {
        movement.Disable();
        crouch.Disable();
        jump.Disable();
    }
}
