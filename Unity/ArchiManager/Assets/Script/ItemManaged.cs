using UnityEngine;

public class ItemManaged : MonoBehaviour, IManagedItem<string, ItemManaged>
{
    [SerializeField] string id = "Item";
    public string ItemID => id;

    #region Implement
    public void Disable()
    {

    }
    public void Enable()
    {

    }
    public void Register()
    {

    } 
    #endregion
}
