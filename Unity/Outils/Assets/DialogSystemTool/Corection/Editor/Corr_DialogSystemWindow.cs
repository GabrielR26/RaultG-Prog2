using EditorsUtils.Handles;
using EditorUtils.Button;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using System.IO;

public class Corr_DialogSystemWindow : EditorWindow
{
    const string dialogFolder = "Assets/DialogSystemTool/Corection/Resources/Dialogs/";
    bool showDialogCreation = false;
    string dialogNameCreation = "";
    Corr_Dialog[] dialogs = null;
    int currentDialogIndex = 0;
    Corr_Dialog currentDialog = null;

    private void OnEnable()
    {
        ReloadDialogs();
    }
    void ReloadDialogs()
    {
        dialogs = Resources.LoadAll<Corr_Dialog>("Dialogs");
    }

    private void OnGUI()
    {
        BeginWindows();
        GUILayout.Window(-1, new Rect(0, 0, 200, position.height), MenuWindow, string.Empty);
        if (showDialogCreation)
            GUILayout.Window(-1, new Rect(200, 10, 300, 100), CreateDialogWindow, string.Empty);
        DrawDialogSystemGrid();
        DrawDialogSystemContent();
        EndWindows();
    }
    void MenuWindow(int _id)
    {
        ButtonUtils.MakeButton("Create dialog", ShowCreateDialogWindow, Color.green, 40);
        ButtonUtils.MakeButton("Delete all dialogs", null, Color.red, 40);
        EditorGUILayout.Space(10);
        EditorGUILayout.HelpBox("Dialog list: ", MessageType.Info);
        ShowAllDialogs();
    }

    void CreateDialogWindow(int _id)
    {
        dialogNameCreation = GUILayout.TextArea(dialogNameCreation);
        ButtonUtils.MakeButton("Create dialog", () => CreateDialog(dialogNameCreation), Color.green, 30);
    }
    void CreateDialog(string _name)
    {
        if (!HasUniqueName(dialogNameCreation))
            return;
        if (!AssetDatabase.IsValidFolder(dialogFolder))
            Directory.CreateDirectory(dialogFolder);
        Corr_Dialog _dialog = ScriptableObject.CreateInstance<Corr_Dialog>();
        _dialog.InitDialog(_name);
        AssetDatabase.CreateAsset(_dialog, dialogFolder + $"{dialogNameCreation}.asset");
        ReloadDialogs();
        dialogNameCreation = "";
        showDialogCreation = false;
    }
    void ShowAllDialogs()
    {
        for (int i = 0; dialogs != null && i < dialogs.Length; i++)
        {
            Corr_Dialog _dialog = dialogs[i];
            int _index = i;
            if (!dialogs[i])
                continue;
            ButtonUtils.MakeButton(dialogs[i].name, () => SelectDialog(_index, _dialog), currentDialogIndex == _index ? Color.cyan : Color.grey, 30);
        }
    }
    void SelectDialog(int _index, Corr_Dialog _dialog)
    {
        currentDialogIndex = _index;
        currentDialog = _dialog;
    }
    bool HasUniqueName(string _name)
    {
        for (int i = 0; dialogs != null && i < dialogs.Length; i++)
            if (dialogs[i].name == _name)
                return false;
        return true;
    }
    void ShowCreateDialogWindow() => showDialogCreation = true;

    void DrawDialogSystemGrid(int _gap = 25)
    {
        Handles.color = Color.grey;
        for (int _line = 0; _line < position.height; _line += _gap)
            HandlesUtils.Line(new Vector2(0, _line), new Vector2(position.width, _line), 1, Color.grey);
        for (int _col = 0; _col < position.width; _col += _gap)
            HandlesUtils.Line(new Vector2(_col, 0), new Vector2(_col, position.height), 1, Color.grey);
    }
    void DrawDialogSystemContent()
    {
        if (!currentDialog)
            return;
        currentDialog.Draw();
    }
}
