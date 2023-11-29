using UnityEditor;
using UnityEditor.PackageManager.UI;
using UnityEngine;

[CustomEditor(typeof(TextureGenerator))]
public class TextureGeneratorEditor : Editor
{
    TextureGenerator textureGenerator = null;

    void OnEnable()
    {
        textureGenerator = (TextureGenerator)target;
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        GenerateButtonUI();
    }
    void GenerateButtonUI()
    {
        if (GUILayout.Button("Generate"))
        {
            textureGenerator.GenerateTexures();
            AssetDatabase.Refresh();
        }
    }
}
