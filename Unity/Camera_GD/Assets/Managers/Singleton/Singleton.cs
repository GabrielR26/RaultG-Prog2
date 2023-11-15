using Unity.VisualScripting;
using UnityEngine;

public abstract class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    static T instance = null;

    public static T Instance => instance;

    public virtual void Awake() => InitSingleton();
    void InitSingleton()
    {
        if (instance)
        {
            Destroy(this);  //destroy "superflue"
            return;
        }
        instance = this as T;
    }
}
