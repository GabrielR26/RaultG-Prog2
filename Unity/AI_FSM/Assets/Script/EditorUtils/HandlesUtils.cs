using EditorUtils.Style;
using System;
using UnityEditor.PackageManager.UI;
using UnityEngine;
using Hdl = UnityEditor.Handles;

namespace EditorsUtils.Handles
{
    public class HandlesUtils
    {
        public static void Label(Vector3 _position, string _text, Color _color)
        {
            Hdl.Label(_position, _text, GUIStyleUtils.GetLabelStyle(_color));
        }
        public static void Label(Vector3 _position, string _text, Color _color, FontStyle _font, TextAnchor _anchor, int _fontSize = 12)
        {
            Hdl.Label(_position, _text, GUIStyleUtils.GetLabelStyle(_color, _font, _anchor, _fontSize));
        }
        public static void Label(Vector3 _position, string _text, GUIStyle _style)
        {
            Hdl.Label(_position, _text, _style);
        }
        public static void Line(Vector3 _from, Vector3 _to, float _thick, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawLine(_from, _to, _thick);
            Hdl.color = Color.white;
        }
        public static void Cube(Vector3 _position, Vector3 _size, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawWireCube(_position, _size);
            Hdl.color = Color.white;
        }
        public static void SolidRect(Rect _rect, Color _color, Color _outlineColor)
        {
            Hdl.DrawSolidRectangleWithOutline(_rect, _color, _outlineColor);
        }
        public static void Disc(Vector3 _position, float _radius, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawWireDisc(_position, Vector3.up, _radius);
            Hdl.color = Color.white;
        }
        public static void SolidDisc(Vector3 _position, float _radius, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawSolidDisc(_position, Vector3.up, _radius);
            Hdl.color = Color.white;
        }
        public static void SolidDisc3(Vector3 _position, float _radius, Color _color)
        {
            Hdl.color = _color;
            Hdl.DrawSolidDisc(_position, Vector3.up, _radius);
            Hdl.DrawSolidDisc(_position, Vector3.forward, _radius);
            Hdl.DrawSolidDisc(_position, Vector3.right, _radius);
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
