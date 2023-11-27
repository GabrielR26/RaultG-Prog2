using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    [SerializeField] Rigidbody playerControler = null;
    [SerializeField, Range(0, 200)] float speed = 100;
    [SerializeField] Animator animator = null;

    private void Start()
    {
        playerControler.AddForce(transform.forward * 1000);
    }

    void FixedUpdate()
    {
        animator.SetFloat("speed X", playerControler.velocity.normalized.magnitude, .5f, Time.fixedDeltaTime);
        MoveCharacter();
        RotateCharacter();
    }

    void MoveCharacter()
    {
        float _axis = Input.GetAxis("Vertical");
        playerControler.AddForce(transform.forward * speed * _axis);
    }
    void RotateCharacter()
    {
        float _axis = Input.GetAxis("Horizontal");
        playerControler.AddRelativeTorque(transform.up * _axis);
    }
}
