using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorTest : MonoBehaviour
{
    [SerializeField] Animator anim = null;
    int playRate = Animator.StringToHash("playRate");

    private void Update()
    {
        UpdatePlayRate();
    }
    void UpdatePlayRate()
    {
        //anim.SetFloat(playRate, Mathf.PingPong(playRate, 1));
    }
}
