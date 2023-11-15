using System;
using System.Collections;
using TMPro;
using UnityEngine;

public class DialogUI : MonoBehaviour
{
    [SerializeField] TMP_Text question = null;
    [SerializeField] Transform content = null;
    [SerializeField] DialogButtonAnswer prefabButton = null;

    public void Generate(DialogData _dialogData)
    {
        ClearContent();
        Dialog _dialog = _dialogData.GetCurrentDialog;
        question.text = _dialog.Quote;
        for (int i = 0; i < _dialog.Choices.Length; i++)
        {
            int _index = i;
            //DialogButtonAnswer _bt = Instantiate(prefabButton, content);
            //_bt.Init(_dialog[_index].Quote, _dialogData.SetNextDialog);
        }
    }
    void ClearContent()
    {
        for (int i = 0; i < content.childCount; i++)
            Destroy(content.GetChild(i).gameObject);
    }
}
