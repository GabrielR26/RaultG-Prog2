using UnityEngine;

public class FSMComponent : MonoBehaviour
{
    [field: SerializeField] public FSM CurrentFSM { get; private set; } = null;
    [field: SerializeField] public ProjectilLauncherSystem PLS { get; private set; } = null;

    [SerializeField] FSM runningFSM = null;

    void Start() => Init();
    void Init()
    {
        if (!CurrentFSM)
            return;
        runningFSM = Instantiate<FSM>(CurrentFSM);
        runningFSM.StartFSM(this);
    }

    void Update() => UpdateFSM();
    void UpdateFSM()
    {
        runningFSM?.UpdateFSM();
    }

    void OnDestroy() => CloseFSM();
    void CloseFSM()
    {
        runningFSM?.StopFSM();
    }
}
