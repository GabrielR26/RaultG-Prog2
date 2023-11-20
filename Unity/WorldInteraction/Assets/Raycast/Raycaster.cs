using UnityEngine;

public class Raycaster : MonoBehaviour
{
    Vector3 hitPoint;
    float pointRange = 100;
    [SerializeField] LayerMask hitLayer = 0;

    void Start() => Init();
    //void Update() => DetectObject();

    void Init()
    {
        InvokeRepeating(nameof(DetectObject), 0, 1);
    }
    void DetectObject()
    {
        bool _hit = Physics.Raycast(new Ray(transform.position, transform.forward), out RaycastHit _res, 100, ~hitLayer);
        if (_hit)
        {
            //T _get = _res.GetComponent<t>();
            Debug.Log($"{pointRange = _res.distance} {_res.collider.name} {hitPoint = _res.point}");
        }
        else
        {
            Debug.Log("No hit");
            hitPoint = transform.position;
            pointRange = 100;
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Ray _ray = new Ray(transform.position, transform.forward); //Position, Position + Forward
        Gizmos.DrawRay(_ray.origin, _ray.direction * pointRange);

        Gizmos.color = Color.magenta;
        Gizmos.DrawSphere(hitPoint, 0.2f);
    }
}
