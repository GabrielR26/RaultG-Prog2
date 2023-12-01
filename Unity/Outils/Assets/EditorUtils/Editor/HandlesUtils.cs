using EditorUtils.Style;
using System;
using UnityEditor.PackageManager.UI;
using UnityEngine;
using Hdl = UnityEditor.Handles;

namespace EditorsUtils.Handles
{
    public class HandlesUtils
    {
        public static void Label(Vector3 _position, string _text, Color _color, FontStyle _font, TextAnchor _anchor, int _fontSize = 12)
        {
            Hdl.Label(_position, _text, GUIStyleUtils.GetLabelStyle(_color, _font, _anchor, _fontSize));
        }
        public static void Label(Vector3 _position, string _text, GUIStyle _style)
        {
            Hdl.Label(_position, _text, _style);
        }
        public static void SolidDisc(Vector3 _position, float _radius, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawSolidDisc(_position, Vector3.up, _radius);
            Hdl.color = Color.white;
        }
        public static void DottedLine(Vector3 _from, Vector3 _to, float space, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawDottedLine(_from, _to, space);
            Hdl.color = Color.white;
        }
    }
}
