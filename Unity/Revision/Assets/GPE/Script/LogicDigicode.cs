using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LogicDigicode : MonoBehaviour
{
    [SerializeField] List<Code> password = new();
    [SerializeField] List<Pad> digicode = new();
    [SerializeField] Lamp lamp = null;

    private void Update() => lamp.GoodOrBad(CheckCode());
    bool CheckCode()
    {
        for (int i = 0; i < password.Count; i++)
            if (password[i].IsGood != digicode[i].Actived)
                return false;
        return true;
    }
}
