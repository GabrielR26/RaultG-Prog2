using UnityEngine;
using UnityEditor;
using System;

namespace EditorUtils.Style
{
    public class GUIStyleUtils
    {
        public static GUIStyle DefineButtonStyle(Color _color)
        {
            GUIStyle _style = new(GUI.skin.button);
            GUI.backgroundColor = _color;
            return _style;
        }
        public static GUIStyle DefineButtonStyle(Color _color, FontStyle _font, int _fontSize)
        {
            GUIStyle _style = new(GUI.skin.button);
            GUI.backgroundColor = _color;
            _style.fontSize = _fontSize;
            return _style;
        }
    }
}
