using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class State : ScriptableObject
{
    [SerializeField] FSM currentFSM = null;
    [SerializeField] Transition[] transitions = null;

    Transition[] runningTransitions = null;

    public virtual void Enter(FSM _owner)
    {
        currentFSM = _owner;
        InitTransitions();
        Debug.Log("Enter in state" + GetType().Name);
    }

    public virtual void Update()
    {
        CheckForValidTransition();
        Debug.Log("Update in state" + GetType().Name);
    }

    public virtual void Exit()
    {
        Debug.Log("Exit in state" + GetType().Name);
    }

    protected virtual void InitTransitions()
    {
        foreach (Transition _transition in transitions)
        {
            if (!_transition)
                continue;
            Transition _newTransition = ScriptableObject.Instantiate<Transition>(_transition);
            _transition.InitTransition();
            //runningTransitions.Add(_newTransition); //TODO here
        }
    }

    protected void CheckForValidTransition()
    {
        foreach (Transition _transition in runningTransitions)
        {
            if (_transition.IsValidTransition())
            {
                Exit();
                currentFSM.SetNextState(_transition.GetNextState);
                return;
            }
        }
    }
}
