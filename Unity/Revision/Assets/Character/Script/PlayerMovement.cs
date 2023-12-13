using System;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class PlayerMovement : MonoBehaviour
{
    public event Action onLanding = null;

    [SerializeField] Player player = null;
    [SerializeField] CharacterController controller = null;
    [SerializeField] float jumpHeight = 3;

    bool isCrouching = false;
    bool isRunning = false;
    bool isJumping = false;
    bool isChangeView = false;

    private void Awake()
    {
        player = GetComponent<Player>();
        controller = GetComponent<CharacterController>();

        if (player)
        {
            player.OnChangeView += () => isChangeView = !isChangeView;
            player.OnRun += (_run) => isRunning = _run;
            player.OnMovement += Movement;
            player.OnCrouching += () => isCrouching = !isCrouching;
            player.OnJumping += () =>
            {
                isCrouching = false;
                isJumping = true;
            };
        }

        StartJumpBehaviour.OnMiddleJump += () =>
        {
            isJumping = false;
        };
    }

    void Movement(Vector2 _movement)
    {
        if (isCrouching || isChangeView)
            return;
        Vector3 _forward = transform.forward * _movement.y,
                _right = transform.right * _movement.x;
        Vector3 _move = isRunning ? (_forward + _right) * 2 : _forward + _right;

        if (!isJumping)
            controller.SimpleMove(_move);
        else
            controller.Move((_move + transform.up * jumpHeight) * Time.deltaTime);

        if (controller.isGrounded)
            onLanding?.Invoke();
    }
}
