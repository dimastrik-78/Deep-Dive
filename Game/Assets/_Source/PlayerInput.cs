using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PlayerInput
{
    private PlayerMove _move;
    
    private readonly float _speed;
    private float _speedX;
    private float _speedY;

    private float _timeLimitation = 1;

    private Rigidbody2D _rb;
    public PlayerInput(Rigidbody2D rb, float speed)
    {
        _rb = rb;
        _speed = speed;
    }

    public void Update(SpriteRenderer sprite)
    {
        _speedX = Input.GetAxis("Horizontal") * _speed;
        _speedY = Input.GetAxis("Vertical") * _speed;

        if (Input.GetAxis("Horizontal") < 0)
        {
            sprite.flipX = true;
        }
        else if (Input.GetAxis("Horizontal") > 0)
        {
            sprite.flipX = false;
        }
        
        if (_speedX != 0 
            || _speedY != 0)
        {
            _move = new PlayerMove();
            _move.Move(_rb, _speedX, _speedY);
        }

        if (_timeLimitation > 0)
        {
            _timeLimitation -= Time.deltaTime;
        }
    }

    public void PickUpResource(ref int resource)
    {
        if (Input.GetKey(KeyCode.E) && _timeLimitation <= 0)
        {
            resource++;

            _timeLimitation = 1;
        }
    }
}
