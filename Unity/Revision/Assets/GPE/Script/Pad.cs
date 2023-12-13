using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoxCollider))]
public class Pad : MonoBehaviour
{
    [SerializeField] BoxCollider trigger = null;
    [SerializeField] Renderer renderer = null;
    [SerializeField] Color activeColor = Color.green;
    [SerializeField] Color sleepColor = Color.grey;

    public bool Actived {  get; private set; }

    private void Awake()
    {
        trigger = GetComponent<BoxCollider>();
        renderer = GetComponent<Renderer>();
        Actived = false;
    }
    private void Update()
    {
        renderer.material.color = Actived ? activeColor : sleepColor;
    }
    private void OnTriggerEnter(Collider other)
    {
        Actived = !Actived;
    }
}
