using UnityEditor;
using UnityEngine;
using EditorsUtils.Handles;
using EditorUtils.Button;
using EditorUtils.Style;
using UnityEditor.SceneManagement;
using UnityEditor.TerrainTools;

[CustomEditor(typeof(SpawnedToolComponent))]
public class SpawnedToolComponentEditor : Editor
{
    SpawnedToolComponent spawnedTool = null;
    //properties of SpawnedToolComponent
    SerializedProperty spawnMode,
                    preview,
                    number1,    //Grid: line;   Line = size; Circle = part;
                    number2,    //Grid: column; Line = none; Circle = radius;
                    number3,    //Grid: none;   Line = none; Circle = none;
                    gap,
                    multipleItems,
                    item,       //only if multipleItems = false
                    items;      //only if multipleItems = true
    //properties of SpawnedItem
    SerializedProperty itemRandomRotation,
                       itemRandomScale,
                       itemSnap;
    SpawnedToolSave save = null;

    private void OnEnable()
    {
        spawnedTool = (SpawnedToolComponent)target;
        save = Resources.Load<SpawnedToolSave>("SaveItemWindow");
        EditorUtility.SetDirty(save);

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
                DrawPreviewLineSpawnedItems();
                break;
            case (int)ESpawnMode.Circle:
                DrawPreviewCircleSpawnedItems();
                break;
            case (int)ESpawnMode.None:
                break;
        }

        if (!spawnedTool.IsValid)
            return;
        Handles.BeginGUI();
            save.ItemWindow = GUILayout.Window(0, save.ItemWindow, DisplaySpawnedToolItemWindow, "Items Properties");
        Handles.EndGUI();
        serializedObject.ApplyModifiedProperties();
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        GUILayout.Space(10);
        DisplaySpawnedToolUI();
        serializedObject.ApplyModifiedProperties();

        if (GUI.changed)
            EditorSceneManager.SaveScene(EditorSceneManager.GetActiveScene());
    }
    void DisplaySpawnedToolUI()
    {
        switch (spawnMode.enumValueFlag)
        {
            case (int)ESpawnMode.Grid:
                DisplayGridModeUI();
                break;
            case (int)ESpawnMode.Line:
                DisplayLineModeUI();
                break;
            case (int)ESpawnMode.Circle:
                DisplayCircleModeUI();
                break;
            case (int)ESpawnMode.None:
                break;
        }
    }

    void DisplayGridModeUI()
    {
        //Property Preview
        preview.boolValue = EditorGUILayout.Toggle("Preview", preview.boolValue);
        GUILayout.Space(10);

        //Property Dimension: line && column
        GUILayout.Label("Dimension:", GUILayout.MaxWidth(150));
        number1.intValue = number1.intValue > 0 ? EditorGUILayout.IntField("line", number1.intValue, GUILayout.MaxWidth(180)) : 1;
        number2.intValue = number2.intValue > 0 ? EditorGUILayout.IntField("column", number2.intValue, GUILayout.MaxWidth(180)) : 1;
        GUILayout.Space(10);

        //Property Gap
        gap.intValue = gap.intValue > 0 ? EditorGUILayout.IntField("Gap", gap.intValue, GUILayout.MaxWidth(170)) : 1;
        GUILayout.Space(10);

        //Property Multiple items
        multipleItems.boolValue = EditorGUILayout.Toggle("Multiple items", multipleItems.boolValue);
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
        if (!preview.boolValue)
            return;
        Transform _transform = spawnedTool.transform;
        for (int line = 0; line < number1.intValue * gap.intValue; line += gap.intValue)
        {
            for (int col = 0; col < number2.intValue * gap.intValue; col += gap.intValue)
            {
                Vector3 _offset = _transform.forward * line + _transform.right * col;
                Vector3 _position = _transform.position + _offset;
                if (itemSnap.boolValue)
                {
                    bool _hit = Physics.Raycast(_position, Vector3.down, out RaycastHit _res, float.MaxValue);
                    if (_hit)
                        HandlesUtils.SolidDisc3(_res.point, 0.2f, Color.red);
                    else
                        HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
                }
                else
                    HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
            }
        }
    }

    void DisplayLineModeUI()
    {
        //Property Preview
        preview.boolValue = EditorGUILayout.Toggle("Preview", preview.boolValue);
        GUILayout.Space(10);

        //Property Size
        number1.intValue = number1.intValue > 0 ? EditorGUILayout.IntField("Size", number1.intValue, GUILayout.MaxWidth(180)) : 1;
        GUILayout.Space(10);

        //Property Gap
        gap.intValue = gap.intValue > 0 ? EditorGUILayout.IntField("Gap", gap.intValue, GUILayout.MaxWidth(170)) : 1;
        GUILayout.Space(10);

        //Property Multiple items
        multipleItems.boolValue = EditorGUILayout.Toggle("Multiple items", multipleItems.boolValue);
        GUILayout.Space(10);

        //Property Item || Items
        if (!multipleItems.boolValue)
            EditorGUILayout.ObjectField(item);
        else
            EditorGUILayout.PropertyField(items);
        GUILayout.Space(10);

        DisplaySpawnedToolButton();
    }
    void DrawPreviewLineSpawnedItems()
    {
        if (!preview.boolValue)
            return;
        Transform _transform = spawnedTool.transform;
        for (int line = 0; line < number1.intValue * gap.intValue; line += gap.intValue)
        {
            Vector3 _offset = _transform.forward * line;
            Vector3 _position = _transform.position + _offset;
            if (itemSnap.boolValue)
            {
                bool _hit = Physics.Raycast(_position, Vector3.down, out RaycastHit _res, float.MaxValue);
                if (_hit)
                    HandlesUtils.SolidDisc3(_res.point, 0.2f, Color.red);
                else
                    HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
            }
            else
                HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
        }
    }

    void DisplayCircleModeUI()
    {
        //Property Preview
        preview.boolValue = EditorGUILayout.Toggle("Preview", preview.boolValue);
        GUILayout.Space(10);

        //Property Definition
        number1.intValue = number1.intValue > 0 ? EditorGUILayout.IntField("Definition", number1.intValue, GUILayout.MaxWidth(180)) : 1;
        GUILayout.Space(10);

        //Property Radius
        number2.intValue = number2.intValue > 0 ? EditorGUILayout.IntField("Radius", number2.intValue, GUILayout.MaxWidth(180)) : 1;
        GUILayout.Space(10);

        //Property Multiple items
        multipleItems.boolValue = EditorGUILayout.Toggle("Multiple items", multipleItems.boolValue);
        GUILayout.Space(10);

        //Property Item || Items
        if (!multipleItems.boolValue)
            EditorGUILayout.ObjectField(item);
        else
            EditorGUILayout.PropertyField(items);
        GUILayout.Space(10);

        DisplaySpawnedToolButton();
    }
    void DrawPreviewCircleSpawnedItems()
    {
        if (!preview.boolValue)
            return;
        Transform _transform = spawnedTool.transform;
        float _part = 360f / number1.intValue;
        for (float i = 0; i <= 360; i += _part)
        {
            float _x = Mathf.Cos(Mathf.Deg2Rad * i) * number2.intValue;
            float _z = Mathf.Sin(Mathf.Deg2Rad * i) * number2.intValue;
            Vector3 _offset = new Vector3(_x, 0, _z);
            Vector3 _position = _transform.position + _offset;
            if (itemSnap.boolValue)
            {
                bool _hit = Physics.Raycast(_position, Vector3.down, out RaycastHit _res, float.MaxValue);
                if (_hit)
                    HandlesUtils.SolidDisc3(_res.point, 0.2f, Color.red);
                else
                    HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
            }
            else
                HandlesUtils.SolidDisc3(_position, 0.2f, Color.red);
        }
    }

    void DisplaySpawnedToolButton()
    {
        //Display button CREATE && DESTROY
        GUILayout.BeginHorizontal();
        ButtonUtils.MakeButton("CREATE", SpawnItemInSpawnMode, GUIStyleUtils.GetButtonStyle(Color.green));
        ButtonUtils.MakeButtonWithAlert("DESTROY", spawnedTool.DestroyllItems, GUIStyleUtils.GetButtonStyle(Color.red),
            new AlertBox("Destroy spawned item", "Are you sure ?", "YES", "CANCEL"));
        GUILayout.EndHorizontal();
    }
    void SpawnItemInSpawnMode()
    {
        switch (spawnMode.enumValueFlag)
        {
            case (int)ESpawnMode.Grid:
                spawnedTool.SpawnGridItems();
                break;
            case (int)ESpawnMode.Line:
                spawnedTool.SpawnLineItems();
                break;
            case (int)ESpawnMode.Circle:
                spawnedTool.SpawnCircleItems();
                break;
        }
    }

    void DisplaySpawnedToolItemWindow(int _id)
    {
        GUILayout.Space(10);
        //Property random rotation
        itemRandomRotation.boolValue = EditorGUILayout.Toggle("Random rotation", itemRandomRotation.boolValue);
        GUILayout.Space(10);

        //Property random scale
        itemRandomScale.boolValue = EditorGUILayout.Toggle("Random scale", itemRandomScale.boolValue);
        GUILayout.Space(10);

        //Property snap
        itemSnap.boolValue = EditorGUILayout.Toggle("Snap", itemSnap.boolValue);
        GUILayout.Space(10);

        //Drag window
        Rect _toClamp = save.ItemWindow;
        _toClamp.x = Mathf.Clamp(_toClamp.x, 0, Screen.width - _toClamp.width);
        _toClamp.y = Mathf.Clamp(_toClamp.y, 0, Screen.height - _toClamp.height - 50);
        save.ItemWindow = _toClamp;
        GUI.DragWindow();
    }
}
