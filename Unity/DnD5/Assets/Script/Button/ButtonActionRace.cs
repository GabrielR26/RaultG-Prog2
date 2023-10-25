using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonActionRace : ButtonAction
{
    public static event Action<Race> OnData = null;
    Race raceElement = null;

    void Awake()
    {
        current.onClick.AddListener(ChangeView);
    }

    void ChangeView()
    {
        base.ChangeView();
        if (raceElement != null)
            OnData?.Invoke(raceElement);
    }

    public void Init(Race _race, Transform _from, Transform _target)
    {
        base.Init(_from, _target);
        raceElement = _race;
        text.text = _race.Name;
    }
}
