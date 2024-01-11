using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="NoWaitTranstition asset", menuName = "FSM/Transition/create NoWaitTranstition")]
public class NoWaitTransition : Transition
{
    public override bool IsValidTransition => true;
}
