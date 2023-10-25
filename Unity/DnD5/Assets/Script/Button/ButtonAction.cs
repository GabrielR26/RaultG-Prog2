using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ButtonAction : MonoBehaviour
{
    //public static event Action<Race> OnData = null;
    [SerializeField] protected Button current = null;
    [SerializeField] protected TMP_Text text = null;
    [SerializeField] protected Transform from = null;
    [SerializeField] protected Transform target = null;
    //Race raceElement = null;

    public bool IsValid => current && from && target;

    protected void Awake()
    {
        current.onClick.AddListener(ChangeView);
    }

    protected void ChangeView()
    {
        if (!IsValid)
            return;
        from.gameObject.SetActive(false);
        target.gameObject.SetActive(true);
        //if (raceElement != null)
        //    OnData?.Invoke(raceElement);
    }

    public void Init(Transform _from, Transform _target)
    {
        //raceElement = _race;
        //text.text = _race.Name;
        from = _from;
        target = _target;
    }
}
