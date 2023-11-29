using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class DiabloPlayer : MonoBehaviour
{
    [SerializeField] DiabloCamera diabloCamera = null;
    [SerializeField] Animator animator = null;
    [SerializeField] float minRange = 1;
    [SerializeField] LayerMask interactLayer;
    [SerializeField] float depth = 100;
    [SerializeField] float speed = 5;

    [SerializeField] DiabloInputs controls = null;
    [SerializeField] InputAction click = null;

    Ray ray;
    Vector3 destination = Vector3.zero;
    bool canMove = false;

    private void Awake()
    {
        controls = new DiabloInputs();
        diabloCamera = Instantiate(diabloCamera, transform);
    }
    private void Start()
    {
        Vector3 _rot = new Vector3(70, 0, 0);
        diabloCamera.transform.eulerAngles = _rot;
    }

    private void OnEnable()
    {
        click = controls.Player.Click;
        click.Enable();
        click.performed += SetTargetLocation;
    }
    private void OnDisable()
    {
        click.Disable();
    }

    private void LateUpdate()
    {
        UpdateCamera();
        MoveToDestination();
        RotateToDestination();
        GetTargetLocation();
    }
    void UpdateCamera()
    {
        Vector3 _offsetCamera = transform.position - Vector3.forward * 10 + Vector3.up * 30;
        diabloCamera.transform.position = _offsetCamera;
    }
    void MoveToDestination()
    {
        if (IsAtLocation())
            return;
        Vector3 _move = Vector3.MoveTowards(transform.position, destination, Time.deltaTime * speed);
        transform.position = _move;
    }
    void RotateToDestination()
    {
        //TODO lookAt
        Vector3 _direction = destination - transform.position;
        Vector3 _rot = new Vector3(0, Vector3.Dot(_direction.normalized, transform.right), 0);
        transform.eulerAngles = _rot;
    }

    void SetTargetLocation(InputAction.CallbackContext _context)
    {
        canMove = _context.ReadValueAsButton();
    }
    void GetTargetLocation()
    {
        if (!canMove)
            return;
        Vector3 _mouse = new Vector3(Input.mousePosition.x, Input.mousePosition.y, depth);
        ray = diabloCamera.Camera.ScreenPointToRay(_mouse);
        bool _hit = Physics.Raycast(ray.origin, ray.direction, out RaycastHit _res, depth, interactLayer);
        if (_hit)
            destination = _res.point;
    }
    bool IsAtLocation()
    {
        return Vector3.Distance(transform.position, destination) < minRange;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.magenta;
        Gizmos.DrawWireSphere(destination, minRange);
        Gizmos.color = Color.cyan;
        Gizmos.DrawLine(transform.position, destination);
    }
}
