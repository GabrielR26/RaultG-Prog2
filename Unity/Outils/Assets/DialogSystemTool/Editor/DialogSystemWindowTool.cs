using EditorsUtils.Handles;
using EditorUtils.Button;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class DialogSystemWindowTool : EditorWindow
{
    Rect dialogSystemWindow;
    Dictionary<int, DialogSystem> dialogs = new();
    List<Rect> quotesDialog = new();
    List<Rect> answersDialog = new();

    float offset => (position.width / 100f) * 30;

    private void OnEnable()
    {
        EditorUtility.SetDirty(this);
    }

    private void OnGUI()
    {
        //Grid 
        for (int _line = 15; _line < position.height; _line += 15)
            HandlesUtils.Line(new Vector2(0, _line), new Vector2(position.width, _line), 1, Color.grey);
        for (int _col = 15; _col < position.width; _col += 15)
            HandlesUtils.Line(new Vector2(_col, 0), new Vector2(_col, position.height), 1, Color.grey);

        CreateDialogSystemToolWindows();
    }
    void CreateDialogSystemToolWindows()
    {
        int _index = 0;
        dialogSystemWindow = new Rect(0, 0, offset, position.height);

        BeginWindows();
            dialogSystemWindow = GUILayout.Window(_index++, dialogSystemWindow, DialogSystemWindow, "");
            _index = CreateQuotesWindow(_index);
            _index = CreateAnswersWindow(_index);
        //TODO Bind Quotes <-> Answers
        EndWindows();
    }
    int CreateQuotesWindow(int _index)
    {
        for (int i = 0; i < quotesDialog.Count; i++)
        {
            quotesDialog[i] = GUILayout.Window(_index++, quotesDialog[i], QuoteWindow, "");
        }
        return _index;
    }
    int CreateAnswersWindow(int _index)
    {
        for (int i = 0; i < answersDialog.Count; i++)
        {
            answersDialog[i] = GUILayout.Window(_index++, answersDialog[i], AnswerWindow, "");
        }
        return _index;
    }


    void DialogSystemWindow(int _id)
    {
        ButtonUtils.MakeButton("Add Dialog", AddNewDialog, Color.green, FontStyle.Bold, 16, 0);
        EditorGUILayout.Separator();
        DisplayDialogsButton();
    }
    void DisplayDialogsButton()
    {
        for (int i = 0; i < dialogs.Count; i++)
        {
            GUILayout.BeginHorizontal();
            ButtonUtils.MakeButton($"{dialogs[i].Name} {dialogs[i].Id + 1}", () => DialogSystemNodes(dialogs[i].Id), Color.blue, FontStyle.Bold, 14, 0);
            ButtonUtils.MakeButton("-", () => RemoveDialog(dialogs[i]), Color.red, FontStyle.Bold, 14, 0);
            GUILayout.EndHorizontal();
        }
    }
    void AddNewDialog()
    {
        DialogSystem _dialog = new DialogSystem("Dialog", dialogs.Count);
        AssetDatabase.CreateAsset(_dialog, $"Assets/DialogSystemTool/Resources/{_dialog.Name}{_dialog.Id}.asset");
        AssetDatabase.Refresh();
        dialogs.Add(_dialog.Id, _dialog);
    }
    void RemoveDialog(DialogSystem _dialog)
    {
        if(!dialogs.ContainsKey(_dialog.Id))
            return;
        AssetDatabase.DeleteAsset($"Assets/DialogSystemTool/Resources/{_dialog.Name}{_dialog.Id}.asset");
        AssetDatabase.Refresh();
        dialogs.Remove(_dialog.Id);
    } 

    void DialogSystemNodes(int _dialogId)
    {
        answersDialog.Clear();
        DialogSystem _current = dialogs[_dialogId];

        for (int i = 0; i < _current.Quotes.Count; i++)
        {
            DialogSystemQuote _quote = _current.Quotes[i];
            Rect _quoteWindow = new Rect(offset + 50, 200 * i + 50, 150, 80);
            quotesDialog.Add(_quoteWindow);
            for (int j = 0; j < _quote.Answers.Count; j++)
            {
                Rect _answerWindow = new Rect(_quoteWindow.x + _quoteWindow.width + 50, 200 * i + 80 * j, 120, 80);
                answersDialog.Add(_answerWindow);
            }
        }
    }

    void QuoteWindow(int _id)
    {
        GUILayout.BeginHorizontal();
            GUILayout.Label("Quote");
            ButtonUtils.MakeButton("+", null);
        GUILayout.EndHorizontal();
        GUILayout.TextArea("");
        GUI.DragWindow();
    }
    void AnswerWindow(int _id)
    {
        GUILayout.Label("Answer");
        GUILayout.TextArea("");
        GUI.DragWindow();
    }
}


//TODO button add quote
// quote/answer know rect