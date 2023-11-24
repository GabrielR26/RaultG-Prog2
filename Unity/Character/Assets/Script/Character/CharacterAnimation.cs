using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorParameters
{
    public static int XSPEED_PARAM = Animator.StringToHash("speedX");
    public static int YSPEED_PARAM = Animator.StringToHash("speedY");
}

public class CharacterAnimation : MonoBehaviour
{
    [SerializeField] Animator animator = null;
    [SerializeField] Character character = null;

    void Awake()
    {
        animator = GetComponent<Animator>();
        character = GetComponent<Character>();

        if (character)
        {
            character.OnForwardMovement += (_axis) => AnimMoveVertical(_axis);
            character.OnRightMovement += (_axis) => AnimMovehorizontal(_axis);
        }
    }

    void AnimMoveVertical(float _axis)
    {
        animator.SetFloat(AnimatorParameters.XSPEED_PARAM, _axis);
    }
    void AnimMovehorizontal(float _axis)
    {
        animator.SetFloat(AnimatorParameters.YSPEED_PARAM, _axis);
    }
}
