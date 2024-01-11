using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "FindNavPointState asset", menuName = "FSM/State/create FindNavPointState")]
public class FindNavPointState : State
{
    public override void Enter(FSM _owner)
    {
        base.Enter(_owner);
        Find();
    }

    private void Find()
    {
        MovementComponent _moveCompo = CurrentFSM.Owner.GetComponent<MovementComponent>();
        _moveCompo.SetDestination(NavZone.Instance.GetNavPoint());
    }
}
