using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(PlayerCamera), typeof(PlayerMovement), typeof(PlayerAnimation))]
public class Player : MonoBehaviour
{
    public event Action<Vector2> OnMovement = null;
    public event Action<Vector2> OnRotation = null;
    public event Action<float> OnZoom = null;
    public event Action<bool> OnRun = null;
    public event Action OnCrouching = null;
    public event Action OnJumping = null;
    public event Action OnClick = null;
    public event Action OnChangeView = null;

    [SerializeField] PlayerCamera playerCamera = null;
    [SerializeField] PlayerMovement playerMovement = null;
    [SerializeField] PlayerAnimation playerAnimation = null;
    [SerializeField] InputsController controller = null;
    [SerializeField, HideInInspector] InputAction movement = null;
    [SerializeField, HideInInspector] InputAction run = null;
    [SerializeField, HideInInspector] InputAction rotation = null;
    [SerializeField, HideInInspector] InputAction crouch = null;
    [SerializeField, HideInInspector] InputAction jump = null;
    [SerializeField, HideInInspector] InputAction zoom = null;
    [SerializeField, HideInInspector] InputAction click = null;
    [SerializeField, HideInInspector] InputAction changeView = null;

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
        Vector2 _movement = movement.ReadValue<Vector2>();
        OnMovement?.Invoke(_movement);
        //Rotation mouse
        Vector2 _rotation = rotation.ReadValue<Vector2>();
        OnRotation?.Invoke(_rotation);
        //Zoom scroll
        float _zoom = zoom.ReadValue<float>();
        OnZoom?.Invoke(_zoom);
    }

    private void OnEnable()
    {
        movement = controller.Player.Movement;
        movement.Enable();
        run = controller.Player.Run;
        run.Enable();
        rotation = controller.Player.Rotation;
        rotation.Enable();
        crouch = controller.Player.Crouch;
        crouch.Enable();
        jump = controller.Player.Jumping;
        jump.Enable();
        zoom = controller.Player.Zoom;
        zoom.Enable();
        click = controller.Player.Click;
        click.Enable();
        changeView = controller.Player.ChangeView;
        changeView.Enable();

        crouch.performed += (e) => OnCrouching?.Invoke();
        jump.performed += (e) => OnJumping?.Invoke();
        click.performed += (e) => OnClick?.Invoke();
        changeView.performed += (e) => OnChangeView?.Invoke();
        //hold button
        run.performed += (e) => OnRun?.Invoke(e.ReadValueAsButton());
    }
    private void OnDisable()
    {
        movement.Disable();
        run.Disable();
        rotation.Disable();
        crouch.Disable();
        jump.Disable();
        zoom.Disable();
        click.Disable();
        changeView.Disable();
    }
}
