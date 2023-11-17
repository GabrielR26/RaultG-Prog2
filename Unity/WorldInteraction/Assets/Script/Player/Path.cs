using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Path : Singleton<Path>
{
    [SerializeField] List<Node> nodes = new();
    [SerializeField, Range(1, 20)] int speed = 5;
    int currentNode = 0;

    public Vector3 CurrentNodePosition => nodes[currentNode].Position;

    public void AddNode(Node _node)
    {
        nodes.Add(_node);
    }

    public Vector3 GetFirstNode()
    {
        if (nodes.Count == 0)
            return Vector3.zero;
        return nodes[0].Position;
    }

    public Vector3 GoToNextNode(Vector3 _follower)
    {
        if (_follower == CurrentNodePosition)
            currentNode = currentNode == nodes.Count - 1 ? 0 : currentNode + 1;
        if (currentNode == 0)
            return nodes[0].Position;
        else
            return Vector3.MoveTowards(_follower, CurrentNodePosition, Time.deltaTime * speed);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        for (int i = 0; i < nodes.Count; i++)
        {
            if (i == nodes.Count - 1)
                return;
            Gizmos.DrawLine(nodes[i].Position, nodes[i + 1].Position);
        }
    }
}
