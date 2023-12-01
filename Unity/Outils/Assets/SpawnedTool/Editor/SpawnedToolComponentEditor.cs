using UnityEditor;
using UnityEngine;
using EditorsUtils.Handles;
using EditorUtils.Button;
using EditorUtils.Style;

[CustomEditor(typeof(SpawnedToolComponent))]
public class SpawnedToolComponentEditor : Editor
{
    SpawnedToolComponent spawnedTool = null;
    //properties of SpawnedToolComponent
    SerializedProperty spawnMode,
                    preview,
                    number1,    //grid: line; 
                    number2,    //grid: column; 
                    number3,    //grid: none;
                    gap,
                    multipleItems,
                    item,       //only if multipleItems = false
                    items;      //only if multipleItems = true
    //properties of SpawnedItem
    SerializedProperty itemRandomRotation,
                       itemRandomScale,
                       itemSnap;
    Rect itemWindow = new Rect(100, 100, 200, 100);

    private void OnEnable()
    {
        spawnedTool = (SpawnedToolComponent)target;

        spawnMode = serializedObject.FindProperty("spawnMode");
        preview = serializedObject.FindProperty("preview");
        number1 = serializedObject.FindProperty("number1");
        number2 = serializedObject.FindProperty("number2");
        number3 = serializedObject.FindProperty("number3");
        gap = serializedObject.FindProperty("gap");
        multipleItems = serializedObject.FindProperty("multipleItems");
        item = serializedObject.FindProperty("item");
        items = serializedObject.FindProperty("items");

        itemRandomRotation = serializedObject.FindProperty("itemRandomRotation");
        itemRandomScale = serializedObject.FindProperty("itemRandomScale");
        itemSnap = serializedObject.FindProperty("itemSnap");
    }

    private void OnSceneGUI()
    {
        switch (spawnMode.enumValueFlag)
        {
            case (int)ESpawnMode.Grid:
                DrawPreviewGridSpawnedItems();
                break;
            case (int)ESpawnMode.Line:
                break;
            case (int)ESpawnMode.Circle:
                break;
            case (int)ESpawnMode.Random:
                break;
            case (int)ESpawnMode.None:
                break;
        }
        if (!spawnedTool.IsValid)
            return;
        Handles.BeginGUI();
            itemWindow = GUILayout.Window(0, itemWindow, DisplaySpawnedToolItemWindow, "Items Properties");
        Handles.EndGUI();
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        DisplaySpawnedToolUI();
        serializedObject.ApplyModifiedProperties();
    }
    void DisplaySpawnedToolUI()
    {
        switch (spawnMode.enumValueFlag)
        {
            case (int)ESpawnMode.Grid:
                DisplayGridModeUI();
                break;
            case (int)ESpawnMode.Line:
                break;
            case (int)ESpawnMode.Circle:
                break;
            case (int)ESpawnMode.Random:
                break;
            case (int)ESpawnMode.None:
                break;
        }
    }

    private void DisplayGridModeUI()
    {
        //Property Preview
        GUILayout.BeginHorizontal();
        GUILayout.Label("Preview", GUILayout.MaxWidth(150));
        preview.boolValue = GUILayout.Toggle(preview.boolValue, "");
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        //Property Dimension: line && column
        GUILayout.BeginHorizontal();
        GUILayout.Label("Dimension", GUILayout.MaxWidth(150));
        GUILayout.BeginVertical(GUILayout.MaxWidth(50));
        GUILayout.Label("line", GUILayout.MaxWidth(50));
        GUILayout.Label("column", GUILayout.MaxWidth(50));
        GUILayout.EndVertical();
        GUILayout.BeginVertical();
        number1.intValue = number1.intValue > 0 ? EditorGUILayout.IntField(number1.intValue, GUILayout.MaxWidth(40)) : 1;
        number2.intValue = number2.intValue > 0 ? EditorGUILayout.IntField(number2.intValue, GUILayout.MaxWidth(40)) : 1;
        GUILayout.EndVertical();
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        //Property Gap
        GUILayout.BeginHorizontal();
        GUILayout.Label("Gap", GUILayout.MaxWidth(150));
        gap.intValue = gap.intValue > 0 ? EditorGUILayout.IntField(gap.intValue, GUILayout.MaxWidth(40)) : 1;
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        //Property Multiple items
        GUILayout.BeginHorizontal();
        GUILayout.Label("Multiple items", GUILayout.MaxWidth(150));
        multipleItems.boolValue = GUILayout.Toggle(multipleItems.boolValue, "");
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        //Property Item || Items
        if (!multipleItems.boolValue)
            EditorGUILayout.ObjectField(item);
        else
            EditorGUILayout.PropertyField(items);
        GUILayout.Space(10);

        DisplaySpawnedToolButton();
    }
    void DrawPreviewGridSpawnedItems()
    {
        //TODO snap
        if (!preview.boolValue)
            return;
        Transform _transform = spawnedTool.transform;
        for (int line = 0; line < number1.intValue * gap.intValue; line += gap.intValue)
        {
            for (int col = 0; col < number2.intValue * gap.intValue; col += gap.intValue)
            {
                Vector3 _offset = _transform.forward * line + _transform.right * col;
                Vector3 _position = _transform.position + _offset;
                HandlesUtils.SolidDisc(_position, 0.2f, Color.red);
            }
        }
    }

    void DisplaySpawnedToolButton()
    {
        //TODO bind fonction
        //Display button CREATE && DESTROY
        GUILayout.BeginHorizontal();
        ButtonUtils.MakeButton("CREATE", CreateItems, GUIStyleUtils.GetButtonStyle(Color.green));
        ButtonUtils.MakeButtonWithAlert("DESTROY", spawnedTool.DestroyllItems, GUIStyleUtils.GetButtonStyle(Color.red),
            new AlertBox("Destroy spawned item", "Are you sure ?", "YES", "CANCEL"));
        GUILayout.EndHorizontal();
    }
    void CreateItems()
    {
        if (multipleItems.boolValue)
            spawnedTool.SpawnUniqueItems();
        else
            spawnedTool.SpawnmultipleItems();
    }

    void DisplaySpawnedToolItemWindow(int _id)
    {
        GUILayout.Space(10);
        GUILayout.BeginHorizontal();
        GUILayout.Label("Random rotation", GUILayout.MaxWidth(150));
        itemRandomRotation.boolValue = GUILayout.Toggle(itemRandomRotation.boolValue, "");
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        GUILayout.BeginHorizontal();
        GUILayout.Label("Random scale", GUILayout.MaxWidth(150));
        itemRandomScale.boolValue = GUILayout.Toggle(itemRandomScale.boolValue, "");
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        GUILayout.BeginHorizontal();
        GUILayout.Label("Snap", GUILayout.MaxWidth(150));
        itemSnap.boolValue = GUILayout.Toggle(itemSnap.boolValue, "");
        GUILayout.EndHorizontal();
        GUILayout.Space(10);

        itemWindow.x = Mathf.Clamp(itemWindow.x, 0, Screen.width - itemWindow.width);
        itemWindow.y = Mathf.Clamp(itemWindow.y, 0, Screen.height - itemWindow.height - 50);
        GUI.DragWindow();
    }
}
