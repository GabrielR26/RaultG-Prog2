using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

[CreateAssetMenu(fileName = "WaitForTrashInSightTransition", menuName = "FSM/Transition/Create WaitForTrashInSightTransition")]
public class WaitForTrashInSightTransition : Transition
{
    SightSensor sight = null;

    public override bool IsValidTransition => sight ? sight.TargetInSight : false;

    public override void InitTransition(FSM _owner)
    {
        base.InitTransition(_owner);
        sight = _owner.Owner.GetComponent<SightSensor>();
    }
}