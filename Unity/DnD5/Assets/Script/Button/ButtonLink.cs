using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ButtonLink : MonoBehaviour
{
    [SerializeField] Button current = null;
    [SerializeField] TMP_Text label = null;


    private void Awake()
    {
        current.onClick.AddListener(() => Debug.Log(label.text));
    }
    public void Init(string _text, float _fontSize)
    {
        label.text = $"{_text},";
        label.fontSize = _fontSize;
    }
}