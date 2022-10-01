using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove
{
    public void Move(Rigidbody2D RB, float SpeedX, float SpeedY)
    {
        RB.velocity = new Vector2(SpeedX, SpeedY);
    }
}
