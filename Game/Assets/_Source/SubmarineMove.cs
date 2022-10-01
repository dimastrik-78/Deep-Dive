using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmarineMove
{
    public void Move(Rigidbody2D RB, float SpeedX, float SpeedY)
    {
        RB.AddForce(new Vector2(SpeedX, SpeedY));
    }
}
