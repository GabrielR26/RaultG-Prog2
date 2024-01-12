using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GoToDirtState", menuName = "FSM/State/Create GoToDirtState")]
public class GoToDirtState : State
{
    public override void Enter(FSM _owner)
    {
        base.Enter(_owner);
        GoToDirt();
    }

    void GoToDirt()
    {
        MovementComponent _moveCompo = CurrentFSM.Owner.GetComponent<MovementComponent>();
        SightSensor _sight = CurrentFSM.Owner.GetComponent<SightSensor>();
        if (!_moveCompo || !_sight)
            return;
        _moveCompo.SetDestination(_sight.TargetInSight.transform.position);
    }
}
