using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "WaitProjectileDestroy asset", menuName = "FSM/Transition/Create WaitProjectileDestroy")]
public class WaitProjectileDestroy : Transition
{
    public override bool IsValidTransition => !FSMOwner.Owner.PLS.CurrentProjectile;
}
