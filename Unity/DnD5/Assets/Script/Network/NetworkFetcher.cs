using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;

public class NetworkFetcher : MonoBehaviour
{
    //public static event Action<Deal[]> OnDeals = null;

    IEnumerator Start()
    {
        yield return StartCoroutine(GetDeals());
    }

    IEnumerator GetDeals()
    {
        UnityWebRequest _request = UnityWebRequest.Get(API.Races);
        yield return _request.SendWebRequest();
        if (_request.result != UnityWebRequest.Result.Success)
            Debug.LogError("DOWNLOAD FAILED !");
        else
        {
            //Deal[] _deals = JsonConvert.DeserializeObject<Deal[]>(_request.downloadHandler.text);
            //OnDeals?.Invoke(_deals);
        }
    }

    IEnumerator DownloadImage()
    {
        UnityWebRequest _request = UnityWebRequestTexture.GetTexture(API.Races);
        yield return _request.SendWebRequest();
        Texture2D _t = DownloadHandlerTexture.GetContent(_request);
    }
}
