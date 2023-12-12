using UnityEngine;
using UnityEngine.UI;
using static UnityEngine.GridBrushBase;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class Corr_Dialog : ScriptableObject
{
    [SerializeField] string title = "Dialog";
    [SerializeField] string text = "text";
    [SerializeField, HideInInspector] Rect dialogRect = new Rect(200, 200, 300, 150);
    [SerializeField] List<Corr_Answer> answers = new();

    Rect toolRect;

    public void InitDialog(string _title) => title = _title;

#if UNITY_EDITOR
    public void Draw(Rect _tool)
    {
        toolRect = _tool;
        dialogRect = GUILayout.Window(GetInstanceID(), dialogRect, DialogWindow, title);
        dialogRect = ClampWindow(dialogRect);
        DrawAnswers();
    }
    Rect ClampWindow(Rect _toClamp)
    {
        _toClamp.x = Mathf.Clamp(_toClamp.x, toolRect.x, toolRect.width - _toClamp.width);
        _toClamp.y = Mathf.Clamp(_toClamp.y, toolRect.y, toolRect.height - _toClamp.height);
        return _toClamp;
    }

    void DialogWindow(int _id)
    {
        title = EditorGUILayout.TextField("Dialog name", title);
        name = title;
        AssetDatabase.RenameAsset(AssetDatabase.GetAssetPath(this), title);
        text = EditorGUILayout.TextArea(text);
        GUI.color = Color.green;
        if (GUILayout.Button("add answer"))
            AddAnswer();
        GUI.DragWindow();
    }
    void AddAnswer()
    {
        Vector2 _position = answers.Count == 0 ? new Vector2(dialogRect.x, dialogRect.y) + new Vector2(dialogRect.width * 1.2f, 0)
            : new Vector2(answers[answers.Count - 1].AnswerRect.x, answers[answers.Count - 1].AnswerRect.y) + new Vector2(0, answers[answers.Count - 1].AnswerRect.height + 20);
        answers.Add(new Corr_Answer(_position));
    }

    void DrawAnswers()
    {
        for (int i = 0; i < answers.Count; i++)
        {
            int _index = i;
            answers[i].AnswerRect = GUILayout.Window(answers[i].GetHashCode(), answers[i].AnswerRect, (_id) => answers[_index].Draw(_id, () => answers.RemoveAt(_index)), $"Answer : {i + 1}");
            answers[i].AnswerRect = ClampWindow(answers[i].AnswerRect);
            answers[i].DrawCurve(dialogRect);
        }
    }
#endif
}
