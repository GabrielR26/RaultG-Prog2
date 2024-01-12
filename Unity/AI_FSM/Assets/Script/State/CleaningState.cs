using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CleaningState", menuName = "FSM/State/Create CleaningState")]
public class CleaningState : State
{
    [SerializeField] int cleaningTime = 3;

    public override void Enter(FSM _owner)
    {
        base.Enter(_owner);
        SightSensor _sensor = _owner.Owner.GetComponent<SightSensor>();
        Destroy(_sensor.TargetInSight, cleaningTime);
    }
}
