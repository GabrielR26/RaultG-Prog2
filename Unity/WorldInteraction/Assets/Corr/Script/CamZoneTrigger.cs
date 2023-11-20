using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamZoneTrigger : MonoBehaviour, IManagedItem<string>
{
    public event Action<CamZonePlayer> OnPlayerEnter = null;
    public event Action<CamZonePlayer> OnPlayerExit = null;

    [SerializeField] CamZoneCamera zoneCamera = null;
    [SerializeField] Collider triggerZone = null;
    [SerializeField] string id = "camZone";

    public string ID => id;

    private void Awake()
    {
        OnPlayerEnter += TriggerCamera;
    }
    void Start() => Register();
    protected virtual void TriggerCamera(CamZonePlayer _player)
    {
        CamZoneManager.Instance.Enable(ID);
        zoneCamera.SetTarget(_player.transform);
    }

    private void OnTriggerEnter(Collider other)
    {
        CamZonePlayer _p = other.GetComponent<CamZonePlayer>();
        if (!_p)
            return;
        OnPlayerEnter?.Invoke(_p);
    }
    private void OnTriggerExit(Collider other)
    {
        CamZonePlayer _p = other.GetComponent<CamZonePlayer>();
        if (!_p)
            return;
        OnPlayerExit?.Invoke(_p);
    }

    private void OnDrawGizmos()
    {
        if (!triggerZone)
            return;
        Gizmos.color = new Color(0, 1, 0, .2f);
        Gizmos.DrawCube(transform.position, triggerZone.bounds.size);
    }

    public void Register()
    {
        CamZoneManager.Instance.Add(this);
    }

    public void Enable()
    {
        zoneCamera.EnableView(true);
    }

    public void Disable()
    {
        zoneCamera.EnableView(false);
    }
}