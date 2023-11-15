using UnityEngine;

public class SingletonExample : Singleton<SingletonExample>
{
    public void Hello() => Debug.Log("Hello");
}