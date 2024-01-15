using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SightSensor : MonoBehaviour
{
    [SerializeField] protected int sightAngle = 90;
    [SerializeField] protected int sightRange = 5;
    [SerializeField] int sightDefinition = 5;
    [SerializeField] float sightHeight = 0.75f;
    [SerializeField] protected LayerMask layers;

    public GameObject TargetInSight {  get; protected set; }

    private void Update() => UpdateSight();
    public virtual void UpdateSight()
    {
        Vector3 _offset = new(0, sightHeight, 0),
                _origin = transform.position + _offset,
                _to;
        if (TargetInSight)
        {
            Debug.DrawLine(_origin, TargetInSight.transform.position, Color.blue);
            return;
        }
        for (int i = -(sightAngle / 2); i < sightAngle / 2; i += sightDefinition)
        {
            _to = (transform.position + Quaternion.Euler(0, i, 0) * (transform.forward * sightRange)) + (_offset * Mathf.Sin(Time.time));
            bool _impact = Physics.Raycast(_origin, _to - _origin, out RaycastHit _hit, sightRange, layers);
            Debug.DrawRay(_origin, _to - _origin, Color.magenta);
            if (_impact)
            {
                TargetInSight = _hit.collider.gameObject;
                return;
            }
        }
    }

    public void ClearSight() => TargetInSight = null;
}
