using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class State : ScriptableObject
{
    [SerializeField] List<Transition> transitions = null;
    [field:SerializeField, HideInInspector] public FSM CurrentFSM { get; private set; }

    protected List<Transition> runningTransitions = new();

    public virtual void Enter(FSM _owner)
    {
        CurrentFSM = _owner;
        InitTransitions();
        Debug.Log("Enter in " + GetType().FullName);
    }

    public virtual void Update()
    {
        CheckForValidTransition();
        Debug.Log("Update in " + GetType().FullName);
    }

    public virtual void Exit()
    {
        Debug.Log("Exit in " + GetType().FullName);
    }

    protected virtual void InitTransitions()
    {
        for (int i = 0; i < transitions.Count; i++)
        {
            if (!transitions[i])
                continue;
            Transition _newTransition = Instantiate(transitions[i]);
            _newTransition.InitTransition(CurrentFSM);
            runningTransitions.Add(_newTransition);
        }
    }

    protected void CheckForValidTransition()
    {
        for (int i = 0; i < runningTransitions.Count; i++)
        {
            if (runningTransitions[i] && runningTransitions[i].IsValidTransition)
            {
                Exit();
                CurrentFSM.SetNextState(runningTransitions[i].NextState);
                return;
            }
        }
    }
}
