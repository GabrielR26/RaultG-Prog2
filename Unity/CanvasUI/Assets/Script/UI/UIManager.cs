using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using TMPro;
using System;

public class UIManager : MonoBehaviour
{
    public static event Action OnPlayButton = null,
                               OnQuitButton = null,
                               OnMenuButton = null;
    [SerializeField] Button playButton = null,
                            quitButton = null,
                            menuButton = null;
    [SerializeField] GameObject mainGamePage = null;

    public bool IsValidUI => playButton && quitButton && menuButton;


    void Awake()
    {
        OnPlayButton += OnPlayUI;
        OnQuitButton += OnQuitUI;
        OnMenuButton += OnMenuUI;
    }
    void Start() => InitUI();
    void OnDestroy()
    {
        OnPlayButton = null;
        OnQuitButton = null;
    }

    void HideUIElement(GameObject _el)
    {
        _el?.SetActive(false);
    }
    void ShowUIElement(GameObject _el)
    {
        _el?.SetActive(true);
    }
    void InitUI()
    {
        if (!IsValidUI)
        {
            Debug.LogError("UI => Missing elements");
            return;
        }
        playButton.onClick.AddListener(() => OnPlayButton?.Invoke());
        quitButton.onClick.AddListener(() => OnQuitButton?.Invoke());
        menuButton.onClick.AddListener(() => OnMenuButton?.Invoke());
    }
    void OnPlayUI()
    {
        Debug.Log("Play");
        HideUIElement(mainGamePage);
        ShowUIElement(menuButton?.gameObject);
    }
    void OnMenuUI()
    {
        Debug.Log("Menu");
        ShowUIElement(mainGamePage);
        HideUIElement(menuButton?.gameObject);
    }
    void OnQuitUI()
    {
        Debug.Log("Quit");
        //Test PreProcess
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }
}
