using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class WindowCaller
{
    [MenuItem("Tool/Call")] //add tool bar
    public static void CallWindow()
    {
        //WindowExample _window =  EditorWindow.GetWindow<WindowExample>(true, "WindowTool");
        WindowExample _window =  EditorWindow.CreateWindow<WindowExample>("WindowTool");
        _window.Show();
    }
    [MenuItem("Tool/Spawner/Init")]
    public static void InitSpawner()
    {
        SpawnerToolComponent _instance = GameObject.FindAnyObjectByType<SpawnerToolComponent>();
        if (_instance)
        {
            Selection.activeGameObject = _instance.gameObject;
            return;
        }
        GameObject _spawner = new GameObject("Spawner", typeof(SpawnerToolComponent));
        Selection.activeGameObject = _spawner;
    }
}
