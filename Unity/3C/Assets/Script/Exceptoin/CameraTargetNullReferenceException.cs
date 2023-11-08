using System;

public class CameraTargetNullReferenceException : NullReferenceException
{
    public override string Message => "Camera missing target CONNARD";
}
