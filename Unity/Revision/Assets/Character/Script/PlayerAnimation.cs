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
    [SerializeField] Animator animator = null;
    [SerializeField] Player player = null;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        player = GetComponent<Player>();

        if (player)
        {
            player.OnCrouching += AnimCrouch;
            player.OnJumping += () => AnimJump(true);
            player.OnMovement += (_vector) => AnimMoveToward(_vector.z);
            player.OnMovement += (_vector) => AnimMoveSide(_vector.x);
        }

        JumpingBehaviour.OnFinishJump += () => AnimJump(false);
    }

    void AnimMoveToward(float _axis)
    {
        animator.SetFloat(AnimatorParameters.TOWARD_PARAM, _axis);
    }
    void AnimMoveSide(float _axis)
    {
        animator.SetFloat(AnimatorParameters.SIDE_PARAM, _axis);
    }
    void AnimCrouch()
    {
        animator.SetTrigger(AnimatorParameters.CROUCH_PARAM);
    }
    void AnimJump(bool _value)
    {
        animator.SetBool(AnimatorParameters.JUMP_PARAM, _value);
    }
}
