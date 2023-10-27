using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonActionClass : ButtonAction
{
    public static event Action<Class> OnData = null;
    Class classElement = null;

    protected override void Awake()
    {
        current.onClick.AddListener(ChangeView);
    }

    protected override void ChangeView()
    {
        base.ChangeView();
        if (classElement != null)
            OnData?.Invoke(classElement);
    }

    public void Init(Class _class, Transform _from, Transform _target)
    {
        base.Init(_from, _target);
        classElement = _class;
        label.text = _class.Name;
    }
}
