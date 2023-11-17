using UnityEngine;

public class TriggerEvent : MonoBehaviour
{
    private void OnTriggerEnter(UnityEngine.Collider other)
    {
        Debug.Log("Enter");
    }
    private void OnTriggerStay(UnityEngine.Collider other)
    {
        Debug.Log("Stay");
    }
    private void OnTriggerExit(UnityEngine.Collider other)
    {
        Debug.Log("Exit");
    }
    private void OnCollisionEnter(Collision collision)
    {

    }
}
