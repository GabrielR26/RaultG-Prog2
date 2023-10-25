using UnityEngine;
using UnityEngine.UI;

public class RacesPanel : MonoBehaviour
{
    [SerializeField] Transform content = null;
    [SerializeField] ButtonActionRace prefab;
    [SerializeField] Transform target = null;

    public bool IsValid => content && prefab;

    void Awake()
    {
        NetworkFetcher.OnRaces += (_r) => InitPanel(_r);
        StartCoroutine(NetworkFetcher.GetRaces());
    }

    void ClearTransform(Transform _trans)
    {
        for (int i = 0; i < _trans.childCount; i++)
            Destroy(_trans.GetChild(i).gameObject);
    }

    void InitPanel(RaceResponse _response)
    {
        ClearTransform(content);
        for (int i = 0; IsValid && i < _response.Results.Length; i++)
        {
            int _index = i;
            ButtonActionRace _button = Instantiate(prefab, content);
            _button.Init(_response.Results[_index], transform, target);
        }
    }
}
