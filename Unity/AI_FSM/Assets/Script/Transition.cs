using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Transition asset")]
public abstract class Transition : ScriptableObject
{
    [SerializeField] State nextState = null;

    public State GetNextState => nextState;

    public virtual void InitTransition()
    {

    }
    public virtual bool IsValidTransition()
    {
        return false;
    }
}
