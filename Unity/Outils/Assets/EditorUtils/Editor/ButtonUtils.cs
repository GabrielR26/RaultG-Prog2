using UnityEngine;
using UnityEditor;
using System;

using EditorUtils.Style;

namespace EditorUtils.Button
{
    public class ButtonUtils
    {
        public static void MakeButton(string _label, Action _callback)
        {
            if (GUILayout.Button(_label))
                _callback?.Invoke();            
        }
        public static void MakeButton(string _label, Action _callback, Color _color)
        {
            GUI.backgroundColor = _color;
            MakeButton(_label, _callback);
            GUI.backgroundColor = Color.white;
        }
        public static void MakeButton(string _label, Action _callback, Color _color, FontStyle _font, int _fontSize)
        {
            if (GUILayout.Button(_label, GUIStyleUtils.GetButtonStyle(_color, _font, _fontSize)))
                _callback?.Invoke();
        }
        public static void MakeButton(string _label, Action _callback, Color _color, FontStyle _font, int _fontSize, Padding2D _padding)
        {
            GUILayout.Space(_padding.Top);
            MakeButton(_label, _callback, _color, _font, _fontSize);
            GUILayout.Space(_padding.Bottom);
        }
        public static void MakeButton(string _label, Action _callback, Color _color, FontStyle _font, int _fontSize, int _padding)
        {
            GUILayout.Space(_padding);
            MakeButton(_label, _callback, _color, _font, _fontSize);
            GUILayout.Space(_padding);
        }
        public static void MakeButton(string _label, Action _callback, GUIStyle _style)
        {
            if (GUILayout.Button(_label, _style))
                _callback?.Invoke();
        }
        public static void MakeButton(string _label, Action _callback, GUIStyle _style, Padding2D _padding)
        {
            GUILayout.Space(_padding.Top);
            MakeButton(_label, _callback, _style);
            GUILayout.Space(_padding.Bottom);
        }

        public static void MakeButtonWithAlert(string _label, Action _callback, Color _color, FontStyle _font, int _fontSize, int _padding, AlertBox _alertBox)
        {
            MakeButton(_label, () =>
            {
                if (EditorUtility.DisplayDialog(_alertBox.Title, _alertBox.Message, _alertBox.Valid, _alertBox.Cancel))
                    _callback?.Invoke();
            }, _color, _font, _fontSize, _padding);
        }
        public static void MakeButtonWithAlert(string _label, Action _callback, Color _color, FontStyle _font, int _fontSize, Padding2D _padding, AlertBox _alertBox)
        {
            MakeButton(_label, () =>
            {
                if (EditorUtility.DisplayDialog(_alertBox.Title, _alertBox.Message, _alertBox.Valid, _alertBox.Cancel))
                    _callback?.Invoke();
            }, _color, _font, _fontSize, _padding);
        }
        public static void MakeButtonWithAlert(string _label, Action _callback, GUIStyle _style, AlertBox _alertBox)
        {
            MakeButton(_label, () =>
            {
                if (EditorUtility.DisplayDialog(_alertBox.Title, _alertBox.Message, _alertBox.Valid, _alertBox.Cancel))
                    _callback?.Invoke();
            }, _style);
        }
    }

    public struct AlertBox
    {
        public string Title { get; set; }
        public string Message { get; set; }
        public string Valid { get; set; }
        public string Cancel { get; set; }

        public AlertBox(string _title, string _message, string _valid, string _cancel)
        {
            Title = _title;
            Message = _message;
            Valid = _valid;
            Cancel = _cancel;
        }
    }
}
