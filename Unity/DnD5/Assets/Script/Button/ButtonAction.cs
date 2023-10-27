using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ButtonAction : MonoBehaviour
{
    [SerializeField] protected Button current = null;
    [SerializeField] protected TMP_Text label = null;
    [SerializeField] protected Transform from = null;
    [SerializeField] protected Transform target = null;

    public bool IsValid => current && from && target;

    protected virtual void Awake()
    {
        current.onClick.AddListener(ChangeView);
    }

    protected virtual void ChangeView()
    {
        if (!IsValid)
            return;
        from.gameObject.SetActive(false);
        target.gameObject.SetActive(true);
    }

    public void Init(Transform _from, Transform _target)
    {
        from = _from;
        target = _target;
    }
}
