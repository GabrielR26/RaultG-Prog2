using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MonsterElement : MonoBehaviour
{
    [SerializeField] TMP_Text monsterName = null;
    [SerializeField] TMP_Text monsterDesc = null;
    [SerializeField] TMP_Text monsterType = null;
    [SerializeField] TMP_Text monsterArmor = null;
    [SerializeField] TMP_Text monsterLife = null;
    [SerializeField] TMP_Text monsterAttack = null;
    [SerializeField] TMP_Text monsterImmunities = null;
    [SerializeField] ButtonLink prefabLink = null;
    [SerializeField] RawImage monsterImage = null;
    List<ButtonLink> listConditions = null;

    private void Awake()
    {
        ButtonActionMonster.OnData += (_r) =>
        {
            StartCoroutine(NetworkFetcher.DownloadImage(_r.Img_main));
            Init(_r);
        };
        NetworkFetcher.OnImage += (_i) => monsterImage.texture = _i;
        listConditions = new List<ButtonLink>();
    }

    void Init(Monster _res)
    {
        ClearListConditions();
        monsterName.text = _res.Name;
        monsterDesc.text = $"Description: {_res.Desc}";
        monsterType.text = $"Type: {_res.Type}";
        monsterArmor.text = $"Armor: {_res.Armor_class.ToString()}";
        monsterLife.text = $"Life: {_res.Hit_points}";
        monsterAttack.text = $"Attack: {_res.Hit_dice}";

        if (_res.Condition_immunities.Length == 0)
            return;
        RectTransform _rect = monsterImmunities.rectTransform;
        string[] _imuns = _res.Condition_immunities.Split(", ");
        for (int i = 0; i < _imuns.Length; i++)
        {
            int _index = i;
            Vector3 _pos = new Vector3(_rect.position.x + ((_rect.rect.width * (_index + 1)) + 20), _rect.position.y, 0);
            ButtonLink _button = Instantiate(prefabLink, _pos, Quaternion.identity, transform);

            listConditions.Add(_button);
            _button.Init(_imuns[i], monsterImmunities.fontSize);
        }
    }

    private void ClearListConditions()
    {
        for (int i = 0; i < listConditions.Count; i++)
            Destroy(listConditions[i].gameObject);
        listConditions.Clear();
    }
}
