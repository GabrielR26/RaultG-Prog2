using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor; 
#endif

[Serializable]
public class Corr_Answer
{
    [SerializeField] string text = "Answer text";
    [SerializeField] Rect answerRect = new Rect(300, 200, 300, 100);

    public Rect AnswerRect { get => answerRect; set => answerRect = value;}
    public string Answertext { get => text; set => text = value;}

    public Corr_Answer(Vector2 _init) => answerRect = new Rect(_init.x, _init.y, 300, 100);

#if UNITY_EDITOR
    public void DrawCurve(Rect _origin)
    {
        Vector3 _from = new Vector2(_origin.x + _origin.width, _origin.y + _origin.height * 0.5f),
                _to = new Vector2(answerRect.x, answerRect.y + answerRect.height * 0.5f),
                _bez = _to - _from;
        _bez.x *= .2f;
        _bez.y *= .4f;
        Handles.DrawBezier(_from, _to, _from + _bez, _to - _bez, Color.green, null, 5);
    }
    public void Draw(int _id, Action _callback)
    {
        EditorGUILayout.HelpBox("Answer content :", MessageType.None);
        text = EditorGUILayout.TextArea(text);
        GUI.backgroundColor = Color.red;
        if (GUILayout.Button("Delete answer", GUILayout.Height(30)))
            _callback();
        GUI.DragWindow();
    } 
#endif
}
