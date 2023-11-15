using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DialogButtonAnswer : MonoBehaviour
{
    [SerializeField] Button button = null;
    [SerializeField] TMP_Text label = null;

    public void Init(string _label, Action _callBack)
    {
        label.text = _label;
        _callBack?.Invoke();
    }
}
