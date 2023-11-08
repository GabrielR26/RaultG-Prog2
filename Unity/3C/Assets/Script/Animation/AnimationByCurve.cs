using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationByCurve : MonoBehaviour
{
    Vector3 origin;
    void Start()
    {
        origin = transform.position;
        //Tweener.StartMoveTo(this, origin, Vector3.zero, TweenerFunction.EaseOutBounce, 3,
        //    () => Tweener.StartMoveTo(this, Vector3.zero, origin, TweenerFunction.EaseInExpo, 3));
        this.MoveTo(TweenerFunction.EaseOutBounce, origin, 3);
        gameObject.Teleport(Vector3.one);
        gameObject.transform.DebugPosition();
        int _a = "2".ToInt();
        _a.ToLog();
    }
}
