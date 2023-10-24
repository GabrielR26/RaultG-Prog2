using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class InventoryButton : MonoBehaviour
{
    [SerializeField] Button inventoryButton = null;
    [SerializeField] TMP_Text inventoryText = null;

    public bool IsValid => inventoryButton && inventoryText;

    public void Init(string _label, Action _toDo)
    {
        if (!IsValid)
            return;
        inventoryText.text = _label;
        inventoryButton.onClick.AddListener(() => _toDo?.Invoke());
    }
}
