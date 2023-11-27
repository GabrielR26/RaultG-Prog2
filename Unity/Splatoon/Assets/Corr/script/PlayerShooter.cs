using UnityEngine;

public class PlayerShooter : MonoBehaviour
{
    [SerializeField] Camera playerCamera = null;
    [SerializeField] Transform shootPoint = null;
    [SerializeField, Range(1,100)] int shootPower = 2;
    [SerializeField] ColorBall projectile = null;
    [SerializeField] LayerMask shootLayer;
    [SerializeField] Color[] gunColor = new Color[] { Color.red, Color.green };

    bool canShoot = false;
    readonly Vector2 crossHair = new Vector2(0.5f, 0.5f);

    //void Start() => InvokeRepeating(nameof(Shoot), 0, 1);
    void Update() => CanShoot();
    public void Shoot(int _colorIndex = 0)
    {
        if (!canShoot)
            return;
        ColorBall _projectile = Instantiate(projectile, shootPoint.position, shootPoint.rotation);
        _projectile.InitBall(gunColor[_colorIndex], shootPower);
    }

    void CanShoot()
    {
        Ray _ray = playerCamera.ViewportPointToRay(crossHair);
        canShoot = Physics.Raycast(_ray.origin, _ray.direction, 100, shootLayer);
    }
}
