using UnityEngine;
using UnityEditor;
using System;

namespace EditorUtils.Style
{
    public class GUIStyleUtils
    {
        public static GUIStyle GetButtonStyle(Color _color)
        {
            GUIStyle _style = new(GUI.skin.button);
            GUI.backgroundColor = _color;
            return _style;
        }
        public static GUIStyle GetButtonStyle(Color _color, FontStyle _font, int _fontSize)
        {
            GUIStyle _style = new(GUI.skin.button);
            GUI.backgroundColor = _color;
            _style.fontSize = _fontSize;
            return _style;
        }
        public static GUIStyle GetLabelStyle(Color _color, FontStyle _font, TextAnchor _anchor, int _fontSize)
        {
            GUIStyle _style = new(GUI.skin.label);
            _style.normal.textColor = _color;
            _style.fontSize = _fontSize;
            _style.fontStyle = _font;
            _style.alignment = _anchor;
            return _style;
        }
        public static GUIStyle GetLabelStyle(Color _color)
        {
            GUIStyle _style = new(GUI.skin.label);
            _style.normal.textColor = _color;
            return _style;
        }
    }
}
