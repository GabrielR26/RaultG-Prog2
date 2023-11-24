using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorParams
{
    //public const string SPEED_PARAM = "speed";
    public static int SPEED_PARAM = Animator.StringToHash("speed");
}

public class CharacterAnim : MonoBehaviour
{
    [SerializeField] Animator animator = null;
    [SerializeField] AnimationCurve curve = null;

    void Update() => UpdateAnimation();
    void UpdateAnimation()
    {
        //animator.SetFloat("speed", Mathf.PingPong(Time.time, 1), 1, Time.deltaTime);
        animator.SetFloat(AnimatorParams.SPEED_PARAM, curve.Evaluate(Time.time));
    }
}
