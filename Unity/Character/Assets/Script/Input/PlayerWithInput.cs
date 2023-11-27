using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerWithInput : MonoBehaviour
{
    [SerializeField] PlayerInputs controls = null;
    [SerializeField] InputAction move = null;
    [SerializeField] InputAction rotate = null;
    [SerializeField] InputAction fire = null;
    [SerializeField] bool canFire = false;

    private void Awake()
    {
        controls = new PlayerInputs();
    }
    private void Start()
    {
        string _controlJSON = File.ReadAllText("Save File Path");
        controls.LoadBindingOverridesFromJson(_controlJSON);
    }

    private void Update()
    {
        Move();
        Rotate();
        Attack();
    }
    void Move()
    {
        Vector3 _moveValue = move.ReadValue<Vector3>();
        transform.position += transform.forward * 5 * Time.deltaTime * _moveValue.z;
        transform.position += transform.right * 5 * Time.deltaTime * _moveValue.x;
    }
    void Rotate()
    {
        float _rotValue = rotate.ReadValue<float>();
        transform.eulerAngles += transform.up * 50 * Time.deltaTime * _rotValue;
    }

    void Fire(InputAction.CallbackContext _context)// button pressed
    {
        Debug.Log("Fire");
    }
    void Attack() //button hold
    {
        if (!canFire)
            return;
        Debug.Log("Attack !!");
    }
    void SetAttack(InputAction.CallbackContext _context)
    {
        canFire = _context.ReadValueAsButton();
    }

    private void OnEnable()
    {
        move = controls.Player.Movement;
        rotate = controls.Player.Rotate;
        fire = controls.Player.Fire;
        move.Enable();
        rotate.Enable();
        fire.Enable();
        fire.performed += SetAttack;

        //rebind
        //fire.Disable();
        //InputActionRebindingExtensions.RebindingOperation _rebindOps = fire.PerformInteractiveRebinding();
        //_rebindOps.WithControlsExcluding("Mouse");
        //string _input = "";
        //Debug.Log("Enter new fire input :");
        //_rebindOps.OnComplete((callback) =>
        //{
        //    Debug.Log(callback);
        //    fire.Enable();
        //    _input = controls.SaveBindingOverridesAsJson();
        //    File.WriteAllText("Save File Path", _input);
        //});
        //_rebindOps.Start();
    }
    private void OnDisable()
    {
        fire.Disable();
        rotate.Disable();
        move.Disable();
    }
}
