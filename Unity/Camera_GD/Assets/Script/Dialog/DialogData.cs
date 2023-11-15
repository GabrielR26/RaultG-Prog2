using System;
using UnityEngine;

[CreateAssetMenu(fileName = "Dialog")]
public class DialogData : ScriptableObject
{
    public event Action<Dialog> OnNext = null;
    [SerializeField] Dialog[] allDialogs = null;

    public Dialog this[int _index] => allDialogs[_index];
    public int Length => allDialogs.Length;
    public Dialog GetCurrentDialog => allDialogs[DialogProgress];
    public int DialogProgress {  get; private set; }

    public void StartDialog()
    {
        Debug.Log("Start");
        DialogProgress = 0;
        OnNext?.Invoke(GetCurrentDialog);
    }
    public void SetNextDialog()
    {
        DialogProgress++;
        DialogProgress %= allDialogs.Length;
        OnNext?.Invoke(GetCurrentDialog);
        Debug.Log("Next");
    }
}

[Serializable]
public class Dialog
{
    [SerializeField] string quote = "Exemple...";
    [SerializeField] Choice[] choices = null;
    [SerializeField] bool isPNJ = false;

    public bool IsPNJ => isPNJ;
    public Choice this[int _index] => choices[_index];
    public Choice[] Choices => choices;
    public string Quote => quote;
}

[Serializable]
public class Choice
{
    [SerializeField] string quote = "Exemple...";
    public string Quote => quote;
}