using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmarineInput
{
    private SubmarineMove _move;
    
    private readonly float _speed;
    private float _speedX;
    private float _speedY;

    private Rigidbody2D _rb;
    public SubmarineInput(Rigidbody2D rb, float speed)
    {
        _rb = rb;
        _speed = speed;
    }

    public void Update()
    {
        _speedX = Input.GetAxis("Horizontal") * _speed;
        _speedY = Input.GetAxis("Vertical") * _speed;
        
        if (_speedX != 0 
            || _speedY != 0)
        {
            _move = new SubmarineMove();
            _move.Move(_rb, _speedX, _speedY);
        }
    }
}
