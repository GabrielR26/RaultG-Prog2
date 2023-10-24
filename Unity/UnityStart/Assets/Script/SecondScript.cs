using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Script : MonoBehaviour
{
    //FirstScript script = new(); NON
    [SerializeField] FirstScript script = null;
    [SerializeField] FirstScript instance = null;
    [SerializeField] GameObject myObject = null;
    void Start()
    {
        Init();
    }

    void Init()
    {
        Debug.Log($"FROM {name} TO {script.name} => HELLO : {script?.Value}");
        instance = gameObject.AddComponent<FirstScript>();
        myObject = new GameObject("Test", new System.Type[] {
            typeof(Rigidbody),
            typeof(BoxCollider)
        });
        GameObject.CreatePrimitive(PrimitiveType.Cube);
        //myObject.name = "Test";
        //myObject.AddComponent<Rigidbody>();
        //myObject.AddComponent<BoxCollider>();
    }
}
