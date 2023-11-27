using System.Collections;
using System.Collections.Generic;
using UnityEditor.PackageManager;
using UnityEngine;
using UnityEngine.UIElements;

[RequireComponent(typeof(CharacterController))]
public class CharacterMovement : MonoBehaviour
{
    [SerializeField] CharacterController controller = null;
    [SerializeField] Character character = null;
    [SerializeField] float speed = 5;
    [SerializeField] float speedRotation = 5;
    [SerializeField] float raycastLength = 2;
    [SerializeField] float raycastDistance = 2;
    [SerializeField] float offset = 10;
    [SerializeField] LayerMask layerInteraction;

    RaycastHit hitInfo;
    Vector3 origin;
    bool hitInteractObject = false;
    Transform currentInteractObject = null;

    void Awake()
    {
        controller = GetComponent<CharacterController>();
        character = GetComponent<Character>();

        if (character)
        {
            character.OnForwardMovement += (_axis) => MoveForward(_axis);
            character.OnRightMovement += (_axis) => MoveRight(_axis);
            character.OnInteraction += (_b) => Interaction(_b);
        }
    }

    void LateUpdate()
    {
        DetectInteractableObject();
        if (currentInteractObject)
            MoveCurrentInteractObject();
    }
    void DetectInteractableObject()
    {
        origin = transform.position + transform.up * offset;
        //raycast = new Ray(_origin, _direction);
        bool _isHit = Physics.BoxCast(origin, Vector3.one * raycastLength/2, transform.forward * raycastDistance, out hitInfo, transform.rotation, raycastLength, layerInteraction);
        hitInteractObject = _isHit;
        if (_isHit)
        {
            //Gizmos.color = Color.green;
            //Gizmos.DrawWireCube(hitInfo.transform.position, hitInfo.transform.localScale * 1.1f);
            //hitInfo.transform.gameObject.GetComponent<MeshRenderer>().material.color = Color.green;
        }
    }
    void MoveCurrentInteractObject()
    {
        Vector3 _position = transform.position + transform.forward * 5 + transform.up * offset;
        currentInteractObject.transform.position = _position;
        currentInteractObject.forward = transform.forward;
    }

    void OnDrawGizmos()
    {
        //Gizmos.color = Color.red;
        //if (!currentInteractObject)
        //    Gizmos.DrawWireCube(origin + transform.forward * raycastDistance, Vector3.one * raycastLength);
        Gizmos.color = Color.green;
        if (hitInteractObject && !currentInteractObject)
            Gizmos.DrawWireCube(hitInfo.transform.position, hitInfo.transform.localScale * 1.1f);
    }

    void MoveForward(float _axis)
    {
        controller.SimpleMove(transform.forward * _axis * speed);
    }
    void MoveRight(float _axis)
    {
        Vector3 _rot = new Vector3(0, _axis * 0.1f * speedRotation, 0);
        transform.eulerAngles = transform.rotation.eulerAngles + _rot;
        //Debug.Log("right axis : " + _axis.ToString());
    }

    void Interaction(bool _interact)
    {
        if (hitInteractObject && _interact && !currentInteractObject)
        {
            currentInteractObject = hitInfo.transform;
            currentInteractObject.GetComponent<Rigidbody>().useGravity = false;
        }
        else if (_interact && currentInteractObject)
        {
            currentInteractObject.GetComponent<Rigidbody>().useGravity = true;
            currentInteractObject = null;
        }
    }
}
