using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RaceElement : MonoBehaviour
{
    [SerializeField] TMP_Text raceName = null;
    [SerializeField] TMP_Text raceDesc = null;

    private void Awake()
    {
        ButtonActionRace.OnData += Init;
    }

    void Init(Race _res)
    {
        raceName.text = _res.Name;
        raceDesc.text = _res.Desc;
    }
}
