using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RaceElement : MonoBehaviour
{
    [SerializeField] TMP_Text raceName = null;
    [SerializeField] TMP_Text raceDesc = null;
    [SerializeField] TMP_Text raceAge = null;
    [SerializeField] TMP_Text raceAlignment = null;
    [SerializeField] TMP_Text raceVision = null;
    [SerializeField] TMP_Text raceTraits = null;

    private void Awake()
    {
        ButtonActionRace.OnData += Init;
    }

    void Init(Race _res)
    {
        raceName.text = _res.Name;
        raceDesc.text = _res.Desc;
        raceAge.text = _res.Age;
        raceAlignment.text = _res.Alignment;
        raceVision.text = _res.Vision;
        raceTraits.text = _res.Traits;
    }
}
