using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ExampleComponent))]
public class ExampleComponentEditor : Editor
{
    ExampleComponent example = null;
    GUISkin customSkin = null;

    // ~= Start()
    void OnEnable()
    {
        example = (ExampleComponent)target;
        customSkin = Resources.Load<GUISkin>("ToolExampleSkin");
    }

    public override void OnInspectorGUI()
    {        
        base.OnInspectorGUI(); // default inspector
        DrawSpawnButtonUI();
    }

    void DrawSpawnButtonUI()
    {
        //GUI.skin = customSkin;
        if (GUILayout.Button("Spawn Objects", DefineButtonStyle(Color.green), GUILayout.Height(50)))
            example.SpawnObjects();
        GUILayout.Space(10);
        //GUI.color = Color.red;
        if (GUILayout.Button("Destroy Objects", DefineButtonStyle(Color.red)))
            example.ClearObjects();
        GUI.color = Color.white;
    }

    GUIStyle DefineButtonStyle(Color _color)
    {
        GUIStyle _style = new(GUI.skin.button);
        GUI.backgroundColor = _color;
        return _style;
    }
}
