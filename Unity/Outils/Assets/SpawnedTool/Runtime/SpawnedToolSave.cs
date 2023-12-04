using UnityEngine;

[CreateAssetMenu(fileName = "SpawnedTool save")]
public class SpawnedToolSave : ScriptableObject
{
    [SerializeField] Rect itemWindow = new Rect(100, 100, 200, 100);

    public Rect ItemWindow {  get => itemWindow; set => itemWindow = value;}
}
