using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TestPanel : MonoBehaviour
{
    [SerializeField] Transform content = null;
    [SerializeField] TMP_Text prefab;

    public bool IsValid => content && prefab;

    void Awake()
    {
        InitPanel();
    }

    void ClearTransform(Transform _trans)
    {
        for (int i = 0; i < _trans.childCount; i++)
            Destroy(_trans.GetChild(i).gameObject);
    }

    void InitPanel()
    {
        ClearTransform(content);
        for (int i = 0; i < 50; i++)
        {
            TMP_Text _txt = Instantiate(prefab, content);
            _txt.text = "\"**_Dwarven Resilience._** You have advantage on saving throws against poison, " +
                "and you have resistance against poison damage.\\n\\n**_Dwarven Combat Training._** You " +
                "have proficiency with the battleaxe, handaxe, light hammer, and warhammer.\\n\\n**_Tool " +
                "Proficiency._** You gain proficiency with the artisan's tools of your choice: smith's " +
                "tools, brewer's supplies, or mason's tools.\\n\\n**_Stonecunning._** Whenever you make an " +
                "Intelligence (History) check related to the origin of stonework, you are considered " +
                "proficient in the History skill and add double your proficiency bonus to the check, " +
                "instead of your normal proficiency bonus.\"";
        }
    }
}
