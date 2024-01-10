using System.Collections;
using System.Collections.Generic;
using System.Timers;
using UnityEngine;

[CreateAssetMenu(fileName = "WaitTransition asset")]
public class WaitTransition : Transition
{
	[SerializeField] float waitTime = 3;

	bool isDone = false;
	Timer timer;

	public override void InitTransition()
	{
		timer = new Timer();
		timer.Elapsed += (o, e) => Wait();
		timer.Interval = waitTime * 1000;
		timer.Start();
	}
	public override bool IsValidTransition()
	{
		Debug.Log(isDone);
		return isDone;
	}
	void Wait()
	{
		isDone = true;
		Debug.Log("WAIT");
		timer.Stop();
	}
}
