using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "name asset")]
public class ToolSave : ScriptableObject
{
    [SerializeField] Rect window = new Rect(100, 100, 300, 200);
    [SerializeField] Color windowColor = Color.white;
    [SerializeField] float windowOpacity = 1,
        r = 1,
        g = 1,
        b = 1;

    public Rect Window {  get => window; set => window = value; }
    public Color WindowColor { get => windowColor; set => windowColor = value; }
    public float WindowOpacity { get => windowOpacity; set => windowOpacity = value; }
    public float R { get => r; set => r = value; }
    public float G { get => g; set => g = value; }
    public float B { get => b; set => b = value; }
}
