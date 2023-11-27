using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorBall : MonoBehaviour
{
    [SerializeField] int lifeSpan = 2;
    [SerializeField] Rigidbody physic = null;
    [SerializeField] Renderer ballRenderer = null;
    Color ballColor;

    public void InitBall(Color _color, int _force)
    {
        ballColor = _color;
        ballRenderer.material.color = _color;
        Destroy(gameObject, lifeSpan);
        physic.AddForce(transform.forward * _force, ForceMode.Impulse);
    }

    private void OnTriggerEnter(Collider other)
    {
        ColorItem _item = other.GetComponent<ColorItem>();
        if (!_item)
            return;
        _item.SetColor(ballColor);
        Destroy(gameObject);
    }
}
