using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestSingleton : MonoBehaviour
{
    private void Start()
    {
        SingletonExample.Instance.Hello();
    }
}
