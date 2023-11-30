using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public struct Padding2D
{
    public int Top {  get; set; }
    public int Bottom {  get; set; }

    public Padding2D(int _top, int _bottom)
    { 
        Top = _top;
        Bottom = _bottom;
    }
}
