using UnityEngine;

[RequireComponent(typeof(PNJDialogueCameraSystem), typeof(DialogUI))]
public class PNJ : MonoBehaviour
{
    [SerializeField] PNJDialogueCameraSystem PNJDialogueCamera = null;
    [SerializeField] DialogData dialogData = null;
    [SerializeField] DialogUI dialogUI = null;

    private void Awake()
    {
        PNJDialogueCamera = GetComponent<PNJDialogueCameraSystem>();
        PNJDialogueCamera.InitCameraDialog();

        #region ExoDialog
        dialogData.OnNext += (_d) =>
        {
            PNJDialogueCamera.SetLookAt(_d.IsPNJ);
            dialogUI.Generate(dialogData);
        };
        dialogData.StartDialog();
        #endregion
    }
}
