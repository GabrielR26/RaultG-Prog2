using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "FSM asset", menuName = "FSM/Create new FSM")]
public /*abstract*/ class FSM : ScriptableObject
{
    [field:SerializeField] public State StartingState { get; private set; } = null;
    [field:SerializeField] public FSMComponent Owner { get; private set; }

    [SerializeField] State currentState = null;

    public virtual void StartFSM(FSMComponent _owner)
    {
        Owner = _owner;
		SetNextState(StartingState);
    }

    public void SetNextState(State _state)
    {
        if (!_state)
            return;
		currentState = Instantiate<State>(_state);
        currentState.Enter(this);
    }

    public void UpdateFSM()
    {
        currentState?.Update();
    }

    public virtual void StopFSM()
    {
        currentState?.Exit();
        currentState = null;
    }
}
