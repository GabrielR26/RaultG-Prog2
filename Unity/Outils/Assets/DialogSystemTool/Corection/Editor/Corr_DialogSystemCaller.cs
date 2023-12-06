using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Corr_DialogSystemCaller : MonoBehaviour
{
    [MenuItem("Corr_DialogSystem/Call")]
    public static void CallWindow()
    {
        EditorWindow.GetWindow<Corr_DialogSystemWindow>("WindowTool");
    }
}
