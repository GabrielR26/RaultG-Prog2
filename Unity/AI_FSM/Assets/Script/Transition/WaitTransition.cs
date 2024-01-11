using System.Collections;
using System.Collections.Generic;
using System.Timers;
using UnityEngine;

[CreateAssetMenu(fileName = "WaitTransition", menuName ="FSM/Transition/Create WaitTransition")]
public class WaitTransition : Transition
{
	[SerializeField, Range(0, 5)] float waitTime = 3;

	bool isDone = false;

	public override bool IsValidTransition => isDone;

	public override void InitTransition(FSM _owner)
	{
		base.InitTransition(_owner);
		_owner.Owner.StartCoroutine(Wait());
	}
	IEnumerator Wait()
	{
		yield return new WaitForSeconds(waitTime);
		isDone = true;
	}
}
