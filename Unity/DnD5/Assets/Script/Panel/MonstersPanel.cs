using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MonstersPanel : MonoBehaviour
{
    [SerializeField] Transform content = null;
    [SerializeField] ButtonActionMonster prefab;
    [SerializeField] Transform target = null;
    [SerializeField] TMP_Dropdown pageList = null;
    string NextPage = string.Empty;

    public bool IsValid => content && prefab && target;

    void Awake()
    {
        NetworkFetcher.OnMonsters += (_m) => InitPanel(_m);
        StartCoroutine(NetworkFetcher.GetMonsters());
    }

    private void Start()
    {
        List<string> _list = new();
        for (int i = 1; i < 50; i++)
            _list.Add($"PAGE {i}");
        pageList.ClearOptions();
        pageList.AddOptions(_list);
        pageList.onValueChanged.AddListener((_e) => StartCoroutine(NetworkFetcher.GetMonsters((_e + 1).ToString())));
    }

    void ClearTransform(Transform _trans)
    {
        for (int i = 0; i < _trans.childCount; i++)
            Destroy(_trans.GetChild(i).gameObject);
    }

    void InitPanel(MonsterResponse _response)
    {
        ClearTransform(content);
        for (int i = 0; IsValid && i < _response.Results.Length; i++)
        {
            int _index = i;
            ButtonActionMonster _button = Instantiate(prefab, content);
            _button.Init(_response.Results[_index], transform, target);
        }
    }
}
