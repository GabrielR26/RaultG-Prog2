using UnityEngine;

public abstract class CameraBase : MonoBehaviour
{
    [SerializeField] Transform cameraBase = null;
    [SerializeField] TriggerZone triggerZone = null;
    [SerializeField] bool gizmos = true;
    [SerializeField] Camera cam = null;

    public Vector3 CameraPosition => cameraBase.position;
    public TriggerZone TriggerZone => triggerZone;
    public Camera GetCamera => cam;
    public bool IsActive => cam.enabled;

    private void Awake()
    {
        TriggerZone.OnEnterTriggerZone += () => TriggerZoneEnter();
        TriggerZone.OnExitTriggerZone += () => TriggerZoneExit();
    }

    private void Start()
    {
        GetCamera.enabled = false;
    }
    private void LateUpdate() => CameraBehaviour();     

    protected virtual void TriggerZoneEnter()
    {
        GetCamera.enabled = true;
    }
    protected virtual void TriggerZoneExit()
    {
        GetCamera.enabled = false;
    }
    protected virtual void CameraBehaviour()
    {

    }

    protected virtual void OnDrawGizmos()
    {
        if (!gizmos)
            return;
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(CameraPosition, 1);
        Gizmos.color = Color.cyan;
        TriggerZone.DrawGizmos();
    }
}
