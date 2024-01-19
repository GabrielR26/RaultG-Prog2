using System.Collections.Generic;
using UnityEngine;

//  
//  1   0   7
//  2   *   6
//  3   4   5
//

public class Node : MonoBehaviour
{
    [field: SerializeField] List<Node> succesors = new();

    public Vector3 Position { get => transform.position; }

    private void Awake()
    {
        for (int i = 0; i < 8; i++)
            succesors.Add(null);
    }

    public void AddSuccesor(Node _node, int _index)
    {
        succesors[_index] = _node;
    }

    public void DrawNode()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawSphere(transform.position, 0.1f);
        Gizmos.color = Color.blue;
        for (int i = 0; i < succesors.Count; i++)
        {
            if (succesors[i])
                Gizmos.DrawLine(transform.position, succesors[i].Position);
        }
    }
}
