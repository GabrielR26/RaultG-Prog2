using EditorsUtils.Handles;
using EditorUtils.Button;
using EditorUtils.Style;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

[CustomEditor(typeof(ExampleComponent))]
public class ExampleComponentEditor : Editor
{
    ExampleComponent example = null;
    GUISkin customSkin = null;
    SerializedProperty itemNumber, gapNumber, itemType;
    ToolSave save = null;

    // ~= Start()
    void OnEnable()
    {
        example = (ExampleComponent)target;
        customSkin = Resources.Load<GUISkin>("ToolExampleSkin");
        itemNumber = serializedObject.FindProperty("numberOfItems");
        gapNumber = serializedObject.FindProperty("gap");
        itemType = serializedObject.FindProperty("type");
        save = Resources.Load<ToolSave>("WindowToolSave");
        EditorUtility.SetDirty(save);
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI(); // default inspector
        EditSpawnerUI();
        DrawSpawnButtonUI();
        serializedObject.ApplyModifiedProperties();
    }
    private void OnSceneGUI()
    {
        //Handles.DrawSolidDisc(example.transform.position, Vector3.up, 5);
        //Handles.DrawSolidArc(example.transform.position, Vector3.up, example.transform.forward, 60, 10);
        //Handles.DrawWireDisc(example.transform.position, Vector3.up, 5);
        //Handles.Label(example.transform.position, new GUIContent("Example"));
        DrawSpawnPreviewUI();
        DrawInteractSpawnerUI();
    }

    void DrawInteractSpawnerUI()
    {
        Handles.BeginGUI();
        if (save)
            save.Window = GUILayout.Window(0, save.Window, InteractWindow, "Drag window", WindowStyle(save.WindowColor, save.WindowOpacity));
        Handles.EndGUI();
    }
    void InteractWindow(int _id)
    {
        //EditorGUILayout.PropertyField(itemNumber);
        //EditorGUILayout.PropertyField(gapNumber);
        //EditorGUILayout.PropertyField(itemType);
        //ButtonUtils.MakeButton("TEST", () => Debug.Log("button test"));

        if (!save)
            return;
        Rect _toClamp = save.Window;
        _toClamp.x = Mathf.Clamp(_toClamp.x, 0, Screen.width - _toClamp.width);
        _toClamp.y = Mathf.Clamp(_toClamp.y, 0, Screen.height - _toClamp.height - 50);
        save.Window = _toClamp;

        EditSpawnerUI();
        DrawSpawnButtonUI();
        save.R = EditorGUILayout.Slider(new GUIContent("R color:"), save.R, 0, 1);
        save.G = EditorGUILayout.Slider(new GUIContent("G color:"), save.G, 0, 1);
        save.B = EditorGUILayout.Slider(new GUIContent("B color:"), save.B, 0, 1);
        save.WindowColor = new Color(save.R, save.G, save.B);
        save.WindowOpacity = EditorGUILayout.Slider(new GUIContent("Window opacity :"), save.WindowOpacity, 0, 1);
        serializedObject.ApplyModifiedProperties();
        GUI.DragWindow();

        if (GUI.changed)
            EditorSceneManager.SaveScene(EditorSceneManager.GetActiveScene());
    }
    GUIStyle WindowStyle(Color _color, float _opacity = 1)
    {
        GUIStyle _style = new GUIStyle(GUI.skin.window);
        GUI.backgroundColor = new Color(_color.r, _color.g, _color.b, _opacity);
        return _style;
    }

    void DrawSpawnPreviewUI()
    {
        if (!example.IsValid)
            return;
        for (int i = 0, index = 1; i < itemNumber.intValue * gapNumber.intValue; i += gapNumber.intValue, index++)
        {
            Vector3 _point = example.transform.position + new Vector3(i, 0, 0);
            HandlesUtils.SolidDisc(_point, .2f, Color.green);
            HandlesUtils.Label(_point - Vector3.up * 0.2f, $"item {index}\n{_point}", GUIStyleUtils.GetLabelStyle(Color.white, FontStyle.Bold, TextAnchor.MiddleCenter, 12));
            if (i < (itemNumber.intValue - 1) * gapNumber.intValue)
                HandlesUtils.DottedLine(_point, example.transform.position + new Vector3(i + gapNumber.intValue, 0, 0), 5f, Color.yellow);
        }
    }
    void EditSpawnerUI()
    {
        itemNumber.intValue = EditorGUILayout.IntSlider(new GUIContent("Item number", "Number of objects"), itemNumber.intValue, 0, 100);
        gapNumber.intValue = EditorGUILayout.IntSlider("Distance gap", gapNumber.intValue, 0, 100);
        //itemType.enumValueIndex = EditorGUILayout.Popup("Item type", itemType.enumValueIndex, itemType.enumDisplayNames);
        //EditorGUILayout.PropertyField(itemNumber);
        //EditorGUILayout.PropertyField(gapNumber);
        EditorGUILayout.PropertyField(itemType, new GUIContent("Item type", "Select item type"));
    }
    void DrawSpawnButtonUI()
    {
        if (!example.IsValid)
        {
            EditorGUILayout.HelpBox("Invalid number of objects (items < 0)", MessageType.Error);
            return;
        }
        ButtonUtils.MakeButton($"Spawn {itemType.enumDisplayNames[itemType.enumValueIndex]} x {itemNumber.intValue}", example.SpawnObjects, Color.green, FontStyle.Bold, 20, new Padding2D(20, 5));
        ButtonUtils.MakeButtonWithAlert($"Destroy {itemType.enumDisplayNames[itemType.enumValueIndex]}", example.ClearObjects, Color.red, FontStyle.Bold, 20, new Padding2D(10, 5),
            new AlertBox($"Delete {itemNumber.intValue} items", "Are you sure ?", "YES", "NO"));

        // OLD
        //GUI.skin = customSkin;
        //if (GUILayout.Button("Spawn Objects", GUIStyleUtils.DefineButtonStyle(Color.green), GUILayout.Height(50)))
        //    example.SpawnObjects();
        //GUILayout.Space(10);
        //GUI.color = Color.red;
        //if (GUILayout.Button("Destroy Objects", GUIStyleUtils.DefineButtonStyle(Color.red)))
        //    example.ClearObjects();
        //GUI.color = Color.white;
    }
}
