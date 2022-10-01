using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInput
{
    private PlayerMove _move;
    // private EntranceToTheSubmarine _entrance;
    
    private readonly float _speed;
    private float _speedX;
    private float _speedY;

    private Rigidbody2D RB;
    public PlayerInput(Rigidbody2D rb, float speed)
    {
        RB = rb;
        _speed = speed;
    }

    public void Update(SpriteRenderer sprite)
    {
        _speedX = Input.GetAxis("Horizontal") * _speed;
        _speedY = Input.GetAxis("Vertical") * _speed;

        if (Input.GetAxis("Horizontal") < 0) sprite.flipX = true;
        else if (Input.GetAxis("Horizontal") > 0) sprite.flipX = false;
        
        if (_speedX != 0 
            || _speedY != 0)
        {
            _move = new PlayerMove();
            _move.Move(RB, _speedX, _speedY);
        }
    }
}
