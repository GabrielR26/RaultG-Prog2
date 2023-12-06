using UnityEditor;
using UnityEngine;

public class DialogSystemToolEditor
{
    static DialogSystemWindowTool windowTool = null;
    [MenuItem("Dialog System/Open")]
    public static void OpenWindow()
    {
        if (windowTool)
            return;
        windowTool = EditorWindow.GetWindow<DialogSystemWindowTool>("DialogSystemWindowTool");
        Rect _rect = new Rect(300, 200, 1200, 700);
        windowTool.position = _rect;
        windowTool.Show();
    }
    [MenuItem("Dialog System/Close")]
    public static void CloseWindow()
    {
        windowTool.Close();
    }
}
