using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class WindowExample : EditorWindow
{
    Rect node = new Rect(50,50,200,200);
    private void OnEnable()
    {
        EditorUtility.SetDirty(this);
    }

    private void OnGUI()
    {
        //GUILayout.Box("Test");
        //GUILayout.Button("Hello");
        //EditorGUILayout.
        //get position.position
        //Handles.DrawLine
        //Handles.DrawBezier
        BeginWindows();
            node = GUILayout.Window(0, node, Window, "Example");
        EndWindows();
    }

    void Window(int _id)
    {
        GUILayout.Box("Test");
        if (GUILayout.Button("Hello"))
        {
            SaveChanges();
            Close();
        }

        Rect _window = node;
        _window.x = Mathf.Clamp(_window.x, 0, Screen.width - _window.width);
        _window.y = Mathf.Clamp(_window.y, 0, Screen.height - _window.height);
        node = _window;

        GUI.DragWindow();
    }
}
