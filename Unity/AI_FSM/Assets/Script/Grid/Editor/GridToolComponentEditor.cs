using EditorsUtils.Handles;
using EditorUtils.Button;
using EditorUtils.Style;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(Grid))]
public class GridEditor : Editor
{
    Grid grid = null;
    SerializedProperty  width,
                        lenght,
                        gap,
                        debug = null;

    private void OnEnable()
    {
        grid = (Grid)target;
        width = serializedObject.FindProperty("width");
        lenght = serializedObject.FindProperty("lenght");
        gap = serializedObject.FindProperty("gap");
        debug = serializedObject.FindProperty("debug");
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
    }

    void OnSceneGUI()
    {
        if (debug.boolValue)
            GridPreview();
    }

    void GridPreview()
    {
        for (int i = 0; i < width.intValue; i++)
        {
            for (int j = 0; j < lenght.intValue; j++)
            {
                Vector3 _position = grid.transform.position + grid.transform.forward * (i * gap.intValue) + grid.transform.right * (j * gap.intValue);
                HandlesUtils.SolidDisc(_position, .1f, Color.red);
            }
        }
    }
}
