using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Transition : ScriptableObject
{
    [field: SerializeField] public State NextState { get; protected set; } = null;
    protected FSM FSMOwner = null;
     
    public virtual bool IsValidTransition { get; } = false;

    public virtual void InitTransition(FSM _owner)
    {  
        FSMOwner = _owner;
    }
}
