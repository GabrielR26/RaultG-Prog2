using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using UnityEngine.UIElements;

public class NetworkFetcher : MonoBehaviour
{
    public static event Action<RaceResponse> OnRaces = null;
    public static event Action<ClassResponse> OnClass = null;
    public static event Action<BackgroundResponse> OnBackgrounds = null;
    public static event Action<FeatResponse> OnFeats = null;
    public static event Action<SpellResponse> OnSpells = null;
    public static event Action<SpellClassResponse> OnSpellClass = null;
    public static event Action<WeaponResponse> OnWeapons = null;
    public static event Action<ArmorResponse> OnArmors = null;
    public static event Action<MagicItemResponse> OnMagicItems = null;
    public static event Action<MonsterResponse> OnMonsters = null;
    public static event Action<FeatResponse> OnConditions = null;

    void Start()
    {
        //StartCoroutine(GetRaces());
    }

    public static IEnumerator GetRaces()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Races);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD RACES FAILED !");
        else
        {
            RaceResponse _races = JsonConvert.DeserializeObject<RaceResponse>(_request.downloadHandler.text);
            OnRaces?.Invoke(_races);
        }
    }
    public static IEnumerator GetClass()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Class);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD CLASS FAILED !");
        else
        {
            ClassResponse _class = JsonConvert.DeserializeObject<ClassResponse>(_request.downloadHandler.text);
            OnClass?.Invoke(_class);
        }
    }
    public static IEnumerator GetBackgrounds()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Backgrounds);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD BACKGROUND FAILED !");
        else
        {
            BackgroundResponse _bkg = JsonConvert.DeserializeObject<BackgroundResponse>(_request.downloadHandler.text);
            OnBackgrounds?.Invoke(_bkg);
        }
    }
    public static IEnumerator GetFeats()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Feats);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD FEATS FAILED !");
        else
        {
            FeatResponse _feats = JsonConvert.DeserializeObject<FeatResponse>(_request.downloadHandler.text);
            OnFeats?.Invoke(_feats);
        }
    }
    public static IEnumerator GetSpells()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Spells);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD SPELLS FAILED !");
        else
        {
            SpellResponse _spells = JsonConvert.DeserializeObject<SpellResponse>(_request.downloadHandler.text);
            OnSpells?.Invoke(_spells);
        }
    }
    public static IEnumerator GetSpellClass()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.SpellClass);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD SPELLClASS FAILED !");
        else
        {
            SpellClassResponse _spellClass = JsonConvert.DeserializeObject<SpellClassResponse>(_request.downloadHandler.text);
            OnSpellClass?.Invoke(_spellClass);
        }
    }
    public static IEnumerator GetWeapons()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Weapons);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD WEAPONS FAILED !");
        else
        {
            WeaponResponse _weapons = JsonConvert.DeserializeObject<WeaponResponse>(_request.downloadHandler.text);
            OnWeapons?.Invoke(_weapons);
        }
    }
    public static IEnumerator GetArmors()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Armors);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD ARMORS FAILED !");
        else
        {
            ArmorResponse _armor = JsonConvert.DeserializeObject<ArmorResponse>(_request.downloadHandler.text);
            OnArmors?.Invoke(_armor);
        }
    }
    public static IEnumerator GetMagicItems()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.MagicItems);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD MAGIC_ITEMS FAILED !");
        else
        {
            MagicItemResponse _magicItems = JsonConvert.DeserializeObject<MagicItemResponse>(_request.downloadHandler.text);
            OnMagicItems?.Invoke(_magicItems);
        }
    }
    public static IEnumerator GetMonsters()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Monsters);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD MONSTERS FAILED !");
        else
        {
            MonsterResponse _monsters = JsonConvert.DeserializeObject<MonsterResponse>(_request.downloadHandler.text);
            OnMonsters?.Invoke(_monsters);
        }
    }
    public static IEnumerator GetConditions()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Conditions);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD CONDITIONS FAILED !");
        else
        {
            FeatResponse _conditions = JsonConvert.DeserializeObject<FeatResponse>(_request.downloadHandler.text);
            OnConditions?.Invoke(_conditions);
        }
    }

    IEnumerator DownloadImage(string _name)
    {
        UnityWebRequest _request = UnityWebRequestTexture.GetTexture(API.GetImage(_name));
        yield return _request.SendWebRequest();
        Texture2D _image = DownloadHandlerTexture.GetContent(_request);
        //OnGetImage?.Invoke(_image);
    }
}
