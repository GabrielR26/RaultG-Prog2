using System;
using System.Collections;
using UnityEditor;
using UnityEngine;

public enum TweenerFunction : int
{
    EaseInSine,
    EaseOutSine,
    EaseInOutSine,

    EaseInCubic,
    EaseOutCubic,
    EaseInOutCubic,

    EaseInQuad,
    EaseOutQuad,
    EaseInOutQuad,

    EaseInQuart,
    EaseOutQuart,
    EaseInOutQuart,

    EaseInQuint,
    EaseOutQuint,
    EaseInOutQuint,

    EaseInExpo,
    EaseOutExpo,
    EaseInOutExpo,

    EaseInCirc,
    EaseOutCirc,
    EaseInOutCirc,

    EaseInBack,
    EaseOutBack,
    EaseInOutBack,

    EaseInElastic,
    EaseOutElastic,
    EaseInOutElastic,

    EaseInBounce,
    EaseOutBounce,
    EaseInOutBounce
}

public class Tweener
{
    public static void StartMoveTo(MonoBehaviour _compo, Vector3 _from, Vector3 _to, TweenerFunction _ease, float _maxTime = 1, Action _callback = null)
    {
        _compo.StartCoroutine(UpdateMove(_compo.transform, _from, _to, _ease, _maxTime, _callback));
    }

    static IEnumerator UpdateMove(Transform _trans, Vector3 _from, Vector3 _to, TweenerFunction _ease, float _maxTime, Action _callback)
    {
        /*Lerp position and incr time
        objectTransform.position = Vector3.Lerp(from, to, curveFunct(_time / maxTime));
        _time += Time.deltaTime;*/

        float _time = 0;
        //check fin lerp : loop / callback
        while (_time <= _maxTime)
        {
            _time += Time.deltaTime;
            _trans.position = Vector3.Lerp(_from, _to, GetTweenAlpha(_ease, _time / _maxTime));
            yield return null;
        }
        _callback?.Invoke();

        /*if (_time < maxtime)
        {
            yield return new waitforendofframe();
            onmove?.invoke(_time);
        }
        else
        {
            reset();
            callback?.invoke();
        }*/
    }

    public static float GetTweenAlpha(TweenerFunction _ease, float _progress)
    {
        switch (_ease)
        {
            case TweenerFunction.EaseInSine:
                return EaseInSine(_progress);
            case TweenerFunction.EaseOutQuint:
                return EaseOutQuint(_progress);
            case TweenerFunction.EaseInBounce:
                return EaseOutBounce(_progress);
            case TweenerFunction.EaseOutBounce:
                return EaseOutBounce(_progress);
        }
        return 0f;
    }

    #region MathFunction
    static float EaseInSine(float _x)
    {
        return 1 - Mathf.Cos((_x * Mathf.PI) / 2);
    }
    static float EaseOutSine(float _x)
    {
        return 1 - Mathf.Sin((_x * Mathf.PI) / 2);
    }
    static float EaseOutQuint(float _x)
    {
        return 1 - Mathf.Pow(1 - _x, 5);
    }
    static float EaseInOutElastic(float _x)
    {
        float c5 = (2 * Mathf.PI) / 4.5f;

        return _x == 0 ? 0 : _x == 1 ? 1 : _x < 0.5
          ? -(Mathf.Pow(2, 20 * _x - 10) * Mathf.Sin((20 * _x - 11.125f) * c5)) / 2
          : (Mathf.Pow(2, -20 * _x + 10) * Mathf.Sin((20 * _x - 11.125f) * c5)) / 2 + 1;
    }
    static float EaseOutBounce(float _x)
    {
        float n1 = 7.5625f;
        float d1 = 2.75f;

        if (_x < 1 / d1)
            return n1 * _x * _x;
        else if (_x < 2 / d1)
            return n1 * (_x -= 1.5f / d1) * _x + 0.75f;
        else if (_x < 2.5 / d1)
            return n1 * (_x -= 2.25f / d1) * _x + 0.9375f;
        else
            return n1 * (_x -= 2.625f / d1) * _x + 0.984375f;
    }
    static float EaseInExpo(float _x)
    {
        return _x == 0 ? 0 : Mathf.Pow(2, 10 * _x - 10);
    }
    #endregion
}
