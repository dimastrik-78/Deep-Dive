using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private PlayerInput _playerInput;

    [SerializeField] private Rigidbody2D rb;
    [SerializeField] private SpriteRenderer sprite;
    
    [SerializeField] private float speed;

    [HideInInspector] public int resource;
    [HideInInspector] public bool win;
    
    void Start()
    {
        _playerInput = new PlayerInput(rb, speed);
    }

    void Update()
    {
        _playerInput.Update(sprite);
    }
    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.layer == 3)
        {
            _playerInput.PickUpResource(ref resource);
        }
    }
    
    private void OnTriggerEnter2D(Collider2D col) // добавлено
    {
        if (col.gameObject.layer == 8)
        {
            win = true;
        }
    }
}
