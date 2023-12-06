using UnityEngine;
using UnityEngine.UI;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class Corr_Dialog : ScriptableObject
{
    [SerializeField] string title = "Dialog";
    [SerializeField] string text = "text";
    [SerializeField, HideInInspector] Rect dialogRect = new Rect(200, 200, 300, 150);

    public void InitDialog(string _title) => title = _title;

#if UNITY_EDITOR
    public void Draw()
    {
        dialogRect = GUILayout.Window(0, dialogRect, DialogWindow, title);
    }

    void DialogWindow(int _id)
    {
        title = EditorGUILayout.TextField("Dialog name", title);
        name = title;
        AssetDatabase.RenameAsset(AssetDatabase.GetAssetPath(this), title);
        text = EditorGUILayout.TextArea(text);
        GUI.color = Color.green;
        if (GUILayout.Button("add answer"))
            Debug.Log("Add");
        GUI.DragWindow();
    }
#endif
}
