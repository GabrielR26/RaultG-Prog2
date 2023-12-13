using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lamp : MonoBehaviour
{
    [SerializeField] Renderer renderer = null;

    private void Awake()
    {
        renderer = GetComponent<Renderer>();
    }

    public void GoodOrBad(bool _value)
    {
        renderer.material.color = _value ? Color.green : Color.red;
    }
}
