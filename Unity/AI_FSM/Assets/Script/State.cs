using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class State : ScriptableObject
{
    [SerializeField, HideInInspector] FSM currentFSM = null;
    [SerializeField] Transition[] transitions = null;

    Transition[] runningTransitions = { };

    public virtual void Enter(FSM _owner)
    {
        currentFSM = _owner;
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
        foreach (Transition _transition in transitions)
        {
            if (!_transition)
                continue;
            Transition _newTransition = ScriptableObject.Instantiate<Transition>(_transition);
            _transition.InitTransition();

            int _lenght = runningTransitions.Length;
            Transition[] _tmp = runningTransitions;
			runningTransitions = new Transition[_lenght + 1];
            for (int i = 0; i < _tmp.Length; i++) 
                runningTransitions[i] = _tmp[i];
            runningTransitions[_lenght] = _newTransition;
        }
    }

    protected void CheckForValidTransition()
    {
        foreach (Transition _transition in runningTransitions)
        {
            if (!_transition)
                continue;
            if (_transition.IsValidTransition())
            {
                //Ne veut pas entrer alors que true !?
                Exit();
                currentFSM.SetNextState(_transition.GetNextState);
                return;
            }
        }
    }
}
