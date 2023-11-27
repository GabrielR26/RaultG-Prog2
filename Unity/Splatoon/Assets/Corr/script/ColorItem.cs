using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorItem : MonoBehaviour
{
    [SerializeField] Renderer itemRenderer = null;

    void Start() => Init();
    void Init()
    {
        itemRenderer = GetComponent<Renderer>();
    }

    public void SetColor(Color _color)
    {
        itemRenderer.material.color = _color;
    }
}
