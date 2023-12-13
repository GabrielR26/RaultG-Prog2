using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Code : MonoBehaviour
{
    [SerializeField] Renderer renderer = null;
    [SerializeField] bool isGood = false;

    public bool IsGood { get => isGood; set => isGood = value; }

    private void Awake()
    {
        renderer = GetComponent<Renderer>();
    }
    private void Update()
    {
        renderer.material.color = IsGood ? Color.blue : Color.grey;
    }

    public void ChangeIsGood()
    {
        IsGood = !IsGood;
    }
}
