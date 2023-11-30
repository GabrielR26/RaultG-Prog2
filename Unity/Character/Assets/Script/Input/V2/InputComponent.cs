using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputComponent : MonoBehaviour
{
    [SerializeField] AnyInputs controls = null;
    [SerializeField] InputAction move = null;
    [SerializeField] InputAction rotate = null;
    [SerializeField] InputAction fire = null;
    [SerializeField] InputAction rebind = null;

    [SerializeField] List<InputAction> allInputs = new();
    [SerializeField] string overridedInput = string.Empty;
    [SerializeField] readonly string fileName = "Save File Path";

    public InputAction Move => move;
    public InputAction Rotate => rotate;
    public InputAction Fire => fire;

    private void Awake()
    {
        controls = new AnyInputs();
    }

    private void Start()
    {
        LoadOverridedInputs();
        rebind.performed += RebindFire;
    }

    private void OnEnable()
    {
        move = controls.Player.Movement;
        rotate = controls.Player.Rotate;
        fire = controls.Player.Fire;
        rebind = controls.Player.Rebind;
        allInputs.AddRange(new List<InputAction> { move, rotate, fire, rebind });
        ManageInputActivation(true);
    }
    private void OnDisable()
    {
        ManageInputActivation(false);
    }

    void ManageInputActivation(bool _value)
    {
        for (int i = 0; i < allInputs.Count; i++)
        {
            if (_value)
                allInputs[i].Enable();
            else
                allInputs[i].Disable();
        }
    }
    void RebindFire(InputAction.CallbackContext _context)
    {
        fire.Disable();
        InputActionRebindingExtensions.RebindingOperation _rebindOps = fire.PerformInteractiveRebinding();
        _rebindOps.WithControlsExcluding("Mouse");
        _rebindOps.OnComplete((callback) =>
        {
            callback.Dispose();
            fire.Enable();
            overridedInput = controls.SaveBindingOverridesAsJson();
            File.WriteAllText(fileName, overridedInput);
            Debug.Log("new input enter");
        });
        Debug.Log("Enter new fire input :");
        _rebindOps.Start();
    }
    void LoadOverridedInputs()
    {
        if (!File.Exists(fileName))
            return;
        string _controlJSON = File.ReadAllText(fileName);
        controls.LoadBindingOverridesFromJson(_controlJSON);
    }
}
