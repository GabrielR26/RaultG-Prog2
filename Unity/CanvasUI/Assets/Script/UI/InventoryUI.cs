using UnityEngine;
using UnityEngine.UI;

public class InventoryUI : MonoBehaviour
{
    [SerializeField] InventoryButton inventoryItem = null;
    [SerializeField] Transform inventoryContent = null;

    public bool IsValid => inventoryItem && inventoryContent;

    private void Awake()
    {
        NetworkFetcher.OnDeals += GenerateInventory;
    }
    //void Start() => GenerateInventory();

    void ClearTransform(Transform _trans)
    {
        for (int i = 0; i < _trans.childCount; i++)
        {
            Destroy(_trans.GetChild(i).gameObject);
        }
    }
    void GenerateInventory(Deal[] _deals)
    {
        ClearTransform(inventoryContent);
        for (int i = 0; IsValid && i < _deals.Length; i++)
        {
            int _index = i;
            InventoryButton _bt = Instantiate(inventoryItem, inventoryContent);
            _bt.Init($"{_deals[_index].Title}", () => Debug.Log($"{_deals[_index].SalePrice}"));
        }
    }
}
