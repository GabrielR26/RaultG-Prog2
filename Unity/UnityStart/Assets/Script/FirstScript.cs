using UnityEngine;

public class FirstScript : MonoBehaviour
{
    [SerializeField] float value = 2f;
    public float Value => value;

    // = Avant start
    void Awake()
    {
        //Debug.Log("Awake");
    }

    // Start is called before the first frame update
    // = BeginPlay()
    void Start()
    {
        Debug.Log($"Start => {value}");
        //Debug.Log(transform.position); //Pareil
        //Debug.Log(gameObject.transform.position); //Pareil
        //Debug.Log(gameObject.transform.gameObject.transform.gameObject.transform.position); //Pareil
    }

    // Update is called once per frame
    // = Tick()
    void Update()
    {
        //Debug.Log("Update");
    }

    //Fin de l'update
    void LateUpdate()
    {
        //Debug.Log("Late Update");
    }

    //Regulier -> calcul constant (physics)
    void FixedUpdate()
    {
        //Debug.Log("Fixed Update");
    }

    //Destruction component
    void OnDestroy()
    {
        //Debug.Log("Destroy");
    }
}
