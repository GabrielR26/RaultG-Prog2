using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{
    [SerializeField] int width = 3;
    [SerializeField] int lenght = 3;
    [SerializeField] int gap = 2;
    [SerializeField] bool debug = false;
    [SerializeField] Node node = null;
    [SerializeField] List<Node> nodes = new List<Node>();

    public int GridSize => nodes.Count;
    public bool IsValid => width > 1 && lenght > 1 && gap > 0;

    private void Start()
    {
        if (!IsValid)
            return;
        CreateGrid();
        InitGrid();
    }

    void CreateGrid()
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                Vector3 _position = transform.position + transform.forward * (i * gap) + transform.right * (j * gap);
                int _index = (i * lenght) + j;
                Node _node = Instantiate(node, _position, transform.rotation, transform);
                _node.name = "Node " + _index.ToString();
                nodes.Add(_node);
            }
        }
    }
    void InitGrid()
    {
        int _index, _nodesIndex = 0;
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                _nodesIndex = (i * lenght) + j;
                if (!nodes[_nodesIndex])
                    continue;
                //Previous
                _index = _nodesIndex - 1;
                if (_index >= (i * lenght))
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 0);

                //Next
                _index = _nodesIndex + 1;
                if (_index < (i * lenght) + lenght)
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 4);

                //Left middle
                _index = _nodesIndex - lenght;
                if (_index >= 0)
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 2);
                //Left up
                _index = _index - 1;
                if (_index >= 0 && _index >= ((i - 1) * lenght))
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 1);
                //Left down
                _index = _index + 2;
                if (_index > 0 && _index < ((i - 1) * lenght) + lenght)
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 3);

                //Right middle
                _index = _nodesIndex + lenght;
                if (_index < nodes.Count)
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 6);
                //Right up
                _index = _index - 1;
                if (_index < nodes.Count && _index >= ((i + 1) * lenght))
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 7);
                //Right down
                _index = _index + 2;
                if (_index < nodes.Count && _index < ((i + 1) * lenght) + lenght)
                    nodes[_nodesIndex].AddSuccesor(nodes[_index], 5);
            }
        }
    }

    private void OnDrawGizmos()
    {
        if (!debug)
            return;
        for (int i = 0; i < nodes.Count; i++)
            nodes[i].DrawNode();
    }
}
