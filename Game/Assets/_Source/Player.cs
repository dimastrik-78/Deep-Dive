using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private PlayerInput _playerInput;
    private O2 _o2;

    [SerializeField] private Rigidbody2D _rb;
    [SerializeField] private SpriteRenderer _sprite;
    
    [SerializeField] private float speed;
    
    void Start()
    {
        _playerInput = new PlayerInput(_rb, speed);
        _o2 = FindObjectOfType<O2>();
    }

    void Update()
    {
        _playerInput.Update(_sprite);
    }
}
