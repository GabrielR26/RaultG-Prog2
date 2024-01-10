using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectilLauncherSystem : MonoBehaviour
{
    [SerializeField] Projectile projectile = null;

    public Projectile CurrentProjectile { get; private set; }

    public void Launch()
    {
        if (!projectile || CurrentProjectile)
            return;
        CurrentProjectile = Instantiate(projectile, transform.position + transform.forward, transform.rotation);
        Destroy(CurrentProjectile.gameObject, 2);
    }
}
