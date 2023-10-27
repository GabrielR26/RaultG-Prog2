using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonActionMonster : ButtonAction
{
    public static event Action<Monster> OnData = null;
    Monster monsterElement = null;

    protected override void Awake()
    {
        current.onClick.AddListener(ChangeView);
    }

    protected override void ChangeView()
    {
        base.ChangeView();
        if (monsterElement != null)
            OnData?.Invoke(monsterElement);
    }

    public void Init(Monster _monster, Transform _from, Transform _target)
    {
        base.Init(_from, _target);
        monsterElement = _monster;
        label.text = _monster.Name;
    }
}
