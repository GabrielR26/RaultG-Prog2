using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ThrowProjectileState asset", menuName = "FSM/State/Create ThrowProjectileState")]
public class ThrowProjectileState : State
{
    public override void Enter(FSM _owner)
    {
        base.Enter(_owner);
        _owner.Owner.PLS.Launch();
    }
}
