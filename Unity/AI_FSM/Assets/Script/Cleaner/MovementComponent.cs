using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Animations;

public class MovementComponent : MonoBehaviour
{
    [SerializeField] int speed = 5;
    [SerializeField] int range = 2;

    Vector3 destination;

    public bool IsAtDestination => Vector3.Distance(transform.position, destination) < range;

    public void SetDestination(Vector3 _point)
    {
        destination = _point;
    }
    void Update() => MoveToDestination();
    void MoveToDestination()
    {
        if (IsAtDestination)
            return;
        transform.position = Vector3.MoveTowards(transform.position, destination, Time.deltaTime * speed); ;
        transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(destination - transform.position), 2);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawLine(transform.position, destination);
        Gizmos.DrawWireSphere(destination, range);
        Gizmos.DrawSphere(destination, 1);
    }
}


