using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "FSM asset")]
public class FSM : ScriptableObject
{
    [SerializeField] State startingState = null;
    [SerializeField, HideInInspector] FSMComponent owner = null;

    State currentState = null;

    public FSMComponent Owner => owner;

    public void StartFSM(FSMComponent _owner)
    {
        owner = _owner;
		SetNextState(startingState);
    }

    public void SetNextState(State _state)
    {
        if (!_state)
            return;
		currentState = ScriptableObject.Instantiate<State>(_state);
        currentState.Enter(this);
    }

    public void UpdateFSM()
    {
        if (!currentState) 
            return;
        currentState.Update();
    }

    public void StopFSM()
    {
        if (!currentState)
            return;
        currentState.Exit();
        currentState = null;
    }
}
