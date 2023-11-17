using System;
using UnityEngine;

public class TriggerZone : MonoBehaviour
{
    public event Action OnEnterTriggerZone = null;
    public event Action OnExitTriggerZone = null;    

    private void OnTriggerEnter(Collider other)
    {
        OnEnterTriggerZone?.Invoke();
    }
    private void OnTriggerExit(Collider other)
    {
        OnExitTriggerZone?.Invoke();
    }

    public void DrawGizmos()
    {
        Gizmos.DrawWireCube(transform.position, transform.localScale);
    }
}
