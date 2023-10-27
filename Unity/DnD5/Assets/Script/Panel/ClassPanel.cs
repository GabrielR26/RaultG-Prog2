using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClassPanel : MonoBehaviour
{
    [SerializeField] Transform content = null;
    [SerializeField] ButtonActionClass prefab;
    [SerializeField] Transform target = null;

    public bool IsValid => content && prefab;

    void Awake()
    {
        NetworkFetcher.OnClass += (_c) => InitPanel(_c);
        StartCoroutine(NetworkFetcher.GetClass());
    }

    void ClearTransform(Transform _trans)
    {
        for (int i = 0; i < _trans.childCount; i++)
            Destroy(_trans.GetChild(i).gameObject);
    }

    void InitPanel(ClassResponse _response)
    {
        ClearTransform(content);
        for (int i = 0; IsValid && i < _response.Results.Length; i++)
        {
            int _index = i;
            ButtonActionClass _button = Instantiate(prefab, content);
            _button.Init(_response.Results[_index], transform, target);
        }
    }
}
