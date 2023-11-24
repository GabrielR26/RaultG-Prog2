using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    public event Action<float> OnForwardMovement = null;
    public event Action<float> OnRightMovement = null;
    public event Action<float> OnCameraRotate = null;
    public event Action<bool> OnInteraction = null;

    void Update()
    {
        bool _interact = Input.GetKeyDown(KeyCode.E);
        float _forwardAxis = Input.GetAxis("Vertical");
        float _rightAxis = Input.GetAxis("Horizontal");
        float _mouseXAxis = Input.GetAxis("Mouse X");
        OnForwardMovement?.Invoke(_forwardAxis);
        OnRightMovement?.Invoke(_rightAxis);
        OnCameraRotate?.Invoke(_mouseXAxis);
        OnInteraction?.Invoke(_interact);
    }
}
