using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSMComponent : MonoBehaviour
{
    [SerializeField] FSM currentFSM = null;

    FSM runningFSM = null;

    void Start() => Init();
    void Init()
    {
		if (!currentFSM)
            return;
        runningFSM = ScriptableObject.Instantiate<FSM>(currentFSM);
        runningFSM.StartFSM(this);
    }

    void Update() => UpdateFSM();
    void UpdateFSM()
    {
		if (runningFSM)
            runningFSM.UpdateFSM();
    }

    void CloseFSM()
    {
        if (runningFSM)
            runningFSM.StopFSM();
    }
}
