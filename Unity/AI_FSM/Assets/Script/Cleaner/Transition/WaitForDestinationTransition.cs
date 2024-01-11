using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "WaitForDestinationTransition", menuName = "FSM/Transition/Create WaitForDestinationTransition")]
public class WaitForDestinationTransition : Transition
{
    MovementComponent movement = null;

    public override bool IsValidTransition => movement && movement.IsAtDestination;

    public override void InitTransition(FSM _owner)
    {
        base.InitTransition(_owner);
        movement = _owner.Owner.GetComponent<MovementComponent>();
    }
}
