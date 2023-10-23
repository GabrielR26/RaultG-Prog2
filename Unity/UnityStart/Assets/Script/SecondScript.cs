using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script : MonoBehaviour
{
    //FirstScript script = new(); NON
    [SerializeField] FirstScript script = null;
    [SerializeField] FirstScript instance = null;
    void Start()
    {
        Init();
    }

    void Init()
    {
        Debug.Log($"FROM {name} TO {script.name} => HELLO : {script?.Value}");
        instance = gameObject.AddComponent<FirstScript>();
    }
}
