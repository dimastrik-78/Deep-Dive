using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Submarine : MonoBehaviour
{
    [SerializeField] private float speed;

    [SerializeField] private Rigidbody2D rb;
    
    private SubmarineInput _submarineInput;
    private SubmarineEvent _submarineEvent;
    
    [HideInInspector] public float timeEvent;
    [HideInInspector] public int submarineHeal = 5;
    [HideInInspector] public bool eventInProgress;
    [HideInInspector] public bool win;
    [HideInInspector] public bool canMove = true;
    
    void Start()
    {
        _submarineInput = new SubmarineInput(rb, speed);
        _submarineEvent = new SubmarineEvent();
    }

    void Update()
    {
        if (canMove
            && !eventInProgress)
        {
            _submarineInput.Update();
        }

        if(!(rb.velocity.x <= 0.3
            && rb.velocity.x >= -0.3
            && rb.velocity.y <= 0.3
            && rb.velocity.y >= -0.3))
        {
            _submarineEvent.Update(ref timeEvent, eventInProgress);
        }
    }
    
    private void OnTriggerEnter2D(Collider2D other) // изменён тригер
    {
        if (other.gameObject.layer == 7)
        {
            canMove = false;
        }
        if (other.gameObject.layer == 8)
        {
            win = true;
        }
    } 
}
