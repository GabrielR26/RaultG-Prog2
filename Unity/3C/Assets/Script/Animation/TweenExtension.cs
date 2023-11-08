using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class TweenExtension //NO new()
{
    public static void MoveTo(this MonoBehaviour _mb, TweenerFunction _ease, Vector3 _target, float _delay)
    {
        Vector3 _origin = _mb.transform.position;
        Tweener.StartMoveTo(_mb, _origin, _target, _ease, _delay);
    }

    public static void Teleport(this GameObject _obj, Vector3 _target)
    {
        _obj.transform.position = _target;
    }
    public static void DebugPosition(this Transform _obj)
    {
        Debug.Log(_obj.position);
    }

    public static T ToSpwan<T>(this GameObject _obj, T _object) where T : Component
    {
        return UnityEngine.Object.Instantiate(_object);
    }

    public static int ToInt(this string _string)
    {
        int.TryParse(_string, out int _res);
        return _res;
    }

    public static void ToLog(this object _obj)
    {
        Debug.Log(_obj.ToString());
    }
}
