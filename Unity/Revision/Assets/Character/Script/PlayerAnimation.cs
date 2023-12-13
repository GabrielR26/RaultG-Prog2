using UnityEngine;

public class AnimatorParameters
{
    public static int TOWARD_PARAM = Animator.StringToHash("Toward");
    public static int SIDE_PARAM = Animator.StringToHash("Side");
    public static int CROUCH_PARAM = Animator.StringToHash("Crouch");
    public static int JUMP_PARAM = Animator.StringToHash("Jump");
}

[RequireComponent(typeof(Animator))]
public class PlayerAnimation : MonoBehaviour
{
    [SerializeField] Player player = null;
    [SerializeField] Animator animator = null;
    [SerializeField] PlayerMovement playerMovement = null;

    bool crouching = false;
    bool running = false;
    bool stopAnimationMove = false;

    private void Awake()
    {
        player = GetComponent<Player>();
        animator = GetComponent<Animator>();
        playerMovement = GetComponent<PlayerMovement>();

        if (player)
        {
            player.OnChangeView += () => stopAnimationMove = !stopAnimationMove;
            player.OnRun += (_run) => running = _run;
            player.OnCrouching += AnimCrouch;
            player.OnJumping += () => AnimJump(true);
            player.OnMovement += (_vector) => AnimMoveToward(_vector.y);
            player.OnMovement += (_vector) => AnimMoveSide(_vector.x);
        }

        playerMovement.onLanding += () => AnimJump(false);
        crouching = false;
    }

    void AnimMoveToward(float _axis)
    {
        if (stopAnimationMove)
            return;
        animator.SetFloat(AnimatorParameters.TOWARD_PARAM, running ? _axis * 2 : _axis);
    }
    void AnimMoveSide(float _axis)
    {
        if (stopAnimationMove)
            return;
        animator.SetFloat(AnimatorParameters.SIDE_PARAM, running ? _axis * 2 : _axis);
    }
    void AnimCrouch()
    {
        if (stopAnimationMove)
            return;
        crouching = !crouching;
        animator.SetBool(AnimatorParameters.CROUCH_PARAM, crouching);
    }
    void AnimJump(bool _value)
    {
        if (stopAnimationMove)
            return;
        if (crouching)
            AnimCrouch();
        animator.SetBool(AnimatorParameters.JUMP_PARAM, _value);
    }
}
