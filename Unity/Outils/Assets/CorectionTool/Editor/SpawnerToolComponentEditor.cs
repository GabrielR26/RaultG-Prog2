using EditorUtils.Button;
using System;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(SpawnerToolComponent))]
public class SpawnerToolComponentEditor : Editor
{
    SpawnerToolComponent spawner = null;

    SerializedProperty modules = null;
    SerializedProperty itemBehaviour = null;
    SerializedProperty item = null;
    SerializedProperty items = null;

    private void OnEnable()
    {
        spawner = (SpawnerToolComponent)target;
        spawner.name = "[SPAWNER TOOL]";
        spawner.InitModules();
        InitProperties();
    }
    void InitProperties()
    {
        modules = serializedObject.FindProperty("modules");
        itemBehaviour = serializedObject.FindProperty("itemBehaviour.useSingleItem");
        item = serializedObject.FindProperty("itemBehaviour.item");
        items = serializedObject.FindProperty("itemBehaviour.items");
    }

    public override void OnInspectorGUI()
    {
        //base.OnInspectorGUI();
        DrawAllModulesUI();
        DrawSpawnerBehaviourUI();
        if (GUI.changed)
            SceneView.RepaintAll();
        serializedObject.ApplyModifiedProperties();
    }
    private void OnSceneGUI()
    {
        DrawAllModulesScene();
    }

    void DrawAllModulesUI()
    {
        for (int i = 0; i < modules.arraySize; i++)
        {
            SpawnerModule _module = (SpawnerModule)modules.GetArrayElementAtIndex(i).objectReferenceValue;
            _module.DrawModule(spawner);
        }
    }
    void DrawAllModulesScene()
    {
        for (int i = 0; i < modules.arraySize; i++)
        {
            SpawnerModule _module = (SpawnerModule)modules.GetArrayElementAtIndex(i).objectReferenceValue;
            _module.DrawSceneModule(spawner.transform.position);
        }
    }
    void DrawSpawnerBehaviourUI()
    {
        Action _spawn = () =>
        {
            for (int i = 0; i < modules.arraySize; i++)
            {
                SpawnerModule _module = (SpawnerModule)modules.GetArrayElementAtIndex(i).objectReferenceValue;
                if (_module.ModuleEnable)
                    spawner.AddNewItems(_module.ModuleName, _module.Spawn(spawner));
            }
        };
        Action _destroy = () =>
        {
            for (int i = 0; i < modules.arraySize; i++)
            {
                SpawnerModule _module = (SpawnerModule)modules.GetArrayElementAtIndex(i).objectReferenceValue;
                if (_module.ModuleEnable)
                    spawner.ClearItems(_module.ModuleName);
            }
        };

        EditorGUILayout.Space(20);
        EditorGUILayout.HelpBox("Item to spawn selection:", MessageType.Info);
        EditorGUILayout.Space(5);
        EditorGUILayout.PropertyField(itemBehaviour);
        if (itemBehaviour.boolValue)
            EditorGUILayout.PropertyField(item);
        else
            EditorGUILayout.PropertyField(items);

        ButtonUtils.MakeButton("SPAWN", _spawn, Color.green, FontStyle.Bold, 18, 5);
        ButtonUtils.MakeButtonWithAlert("DESTROY", _destroy, Color.red, FontStyle.Bold, 18, 5, 
            new AlertBox("Destroy all items", "Are you sure ?", "YES", "CANCEL"));
    }
}
