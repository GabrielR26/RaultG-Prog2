using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamZoneCamera : MonoBehaviour
{
    [SerializeField] Transform target = null;
    [SerializeField] Camera view = null;
    [SerializeField, Range(10,100)] float speed = 50;
    [SerializeField] bool canLookAt = true;

    private void LateUpdate() => LookAtTarget();
    void LookAtTarget()
    {
        if (!target || !canLookAt) 
            return;
        Quaternion _fwd = Quaternion.LookRotation(target.position - transform.position);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, _fwd, Time.deltaTime * speed);
    }
    public void SetTarget(Transform _target)
    {
        target = _target;
    }

    public void EnableView(bool _status)
    {
        view.enabled = _status;
    }
}
