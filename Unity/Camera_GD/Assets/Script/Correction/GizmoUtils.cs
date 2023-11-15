using UnityEngine;

public class GizmoUtils
{
    public static void DrawCicle(Vector3 _origin, float _radius, Color _color, int _definition = 10)
    {
        Gizmos.color = _color;
        int part = 360 / _definition;
        for (int i = 0; i <= _definition; i++)
        {
            float _alpha = i * part * Mathf.Deg2Rad;
            float _beta = (i + 1) * part * Mathf.Deg2Rad;

            Vector3 _a = _origin + new Vector3(Mathf.Cos(_alpha) * _radius, 0, Mathf.Sin(_alpha) * _radius);
            Vector3 _b = _origin + new Vector3(Mathf.Cos(_beta) * _radius, 0, Mathf.Sin(_beta) * _radius);

            Gizmos.DrawLine(_a, _b);
        }
        Gizmos.color = Color.white;
    }
}
