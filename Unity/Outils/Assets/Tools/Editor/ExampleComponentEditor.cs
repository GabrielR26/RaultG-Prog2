using EditorUtils.Button;
using EditorUtils.Style;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(ExampleComponent))]
public class ExampleComponentEditor : Editor
{
    ExampleComponent example = null;
    GUISkin customSkin = null;
    SerializedProperty itemNumber, gapNumber, itemType;

    // ~= Start()
    void OnEnable()
    {
        example = (ExampleComponent)target;
        customSkin = Resources.Load<GUISkin>("ToolExampleSkin");
        itemNumber = serializedObject.FindProperty("numberOfItems");
        gapNumber = serializedObject.FindProperty("gap");
        itemType = serializedObject.FindProperty("type");
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI(); // default inspector
        EditSpawnerUI();
        DrawSpawnButtonUI();
        serializedObject.ApplyModifiedProperties();
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
        ButtonUtils.MakeButton($"Spawn {itemType.enumDisplayNames[itemType.enumValueIndex]} * {itemNumber.intValue}", example.SpawnObjects, Color.green, FontStyle.Bold, 20, new Padding2D(20, 5));
        ButtonUtils.MakeButtonWithAlert($"Destroy {itemType.enumDisplayNames[itemType.enumValueIndex]}", example.ClearObjects, Color.red, FontStyle.Bold, 20, new Padding2D(10, 5), 
            new AlertBox( $"Delete {itemNumber.intValue} items", "Are you sure ?", "YES", "NO"));

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
