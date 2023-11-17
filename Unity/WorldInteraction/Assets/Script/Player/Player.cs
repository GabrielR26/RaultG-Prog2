using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] Path path = null;

    public Vector3 Position
    {
        get => transform.position;
        set => transform.position = value;
    }

    private void Start()
    {
        Position = path.GetFirstNode();
    }

    private void LateUpdate() => UpdatePosition();
    void UpdatePosition()
    {
        Position = path.GoToNextNode(Position);
        //transform.rotation.SetLookRotation(transform.forward);
    }
}
