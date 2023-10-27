using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ClassElement : MonoBehaviour
{
    [SerializeField] TMP_Text className = null;
    [SerializeField] TMP_Text classDesc = null;
    [SerializeField] TMP_Text classTable = null;

    private void Awake()
    {
        ButtonActionClass.OnData += Init;
    }

    void Init(Class _res)
    {
        string _str = _res.Name.Replace("\n \n", "\n");
        className.text = _str;
        classDesc.text = _res.Desc;
        classTable.text = _res.Table;
    }
}
