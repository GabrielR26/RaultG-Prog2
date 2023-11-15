using System.Collections;
using UnityEngine;

public class CameraTest : MonoBehaviour
{
    [SerializeField] CameraPNJFollow cameraPNJ = null;
    WaitForSeconds wait = new(5);
    private IEnumerator Start()
    {
        CameraManager.Instance?.CreateCameraFollow("camera follow create", transform);
        CameraManager.Instance?.CreateCameraOrbit("camera orbit create", transform);
        CameraManager.Instance?.CreateCamera(cameraPNJ, "camera pnj create", transform);
        yield return wait;
        CameraManager.Instance?.DisableCamera("player");
    }
}
