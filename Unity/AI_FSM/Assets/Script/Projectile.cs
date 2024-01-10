using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    private void Start()
    {
        Rigidbody body = GetComponent<Rigidbody>();
        body.AddForce(transform.forward * 10, ForceMode.Impulse);
    }
}
