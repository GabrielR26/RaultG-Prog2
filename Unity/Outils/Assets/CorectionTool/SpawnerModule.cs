using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

public abstract class SpawnerModule : ScriptableObject
{
    [SerializeField] protected string moduleName = "Module";
    [SerializeField] protected bool moduleEnable = false;

    public string ModuleName => moduleName;
    public bool ModuleEnable { get =>  moduleEnable; set => moduleEnable = value;}

    public virtual List<GameObject> Spawn(SpawnerToolComponent _tool)
    {
        return new List<GameObject>();
    }

    //Solution Runtime<->Editor
#if UNITY_EDITOR
    public virtual void DrawModule(SpawnerToolComponent _tool)
    {
        EditorGUILayout.Space(10);
        EditorGUILayout.BeginHorizontal();
            EditorGUILayout.HelpBox(ModuleName, MessageType.Info);
            GUI.backgroundColor = ModuleEnable ? Color.green : Color.grey;
            if (GUILayout.Button("Enable", GUILayout.Height(38)))
            {
                _tool.DisableAllModule();
                moduleEnable = true;
            }
            GUI.backgroundColor = Color.white;
        EditorGUILayout.EndHorizontal();
    }
    public virtual void DrawSceneModule(Vector3 _origin)
    {

    }
#endif
}
