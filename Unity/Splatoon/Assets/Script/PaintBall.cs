using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EColorBall
{
    Green,
    Red
}

[RequireComponent(typeof(Rigidbody), typeof(Renderer), typeof(SphereCollider))]
public class PaintBall : MonoBehaviour
{
    [SerializeField] EColorBall color = EColorBall.Red;
    [SerializeField, Range(100, 1000)] float speed = 10;
    [SerializeField] LayerMask layerColorable;

    Color mainColor = Color.magenta;
    public Color MainColor => mainColor;

    public Rigidbody BallRigidBody { get; set; }
    public Renderer BallRenderer { get; set; }

    void Awake()
    {
        BallRigidBody = GetComponent<Rigidbody>();
        BallRenderer = GetComponent<Renderer>();

        mainColor = color == EColorBall.Red ? Color.red : Color.green;
        BallRenderer.material.color = mainColor;
    }

    public void Shoot(Vector3 _direction)
    {
        BallRigidBody.AddForce(_direction * speed * 10);
    }

    private void OnCollisionEnter(Collision collision)
    {
        //if (collision.gameObject.layer == layerColorable)
        //    collision.gameObject.GetComponent<Renderer>().material.color = mainColor;
        Destroy(gameObject);
    }
}
