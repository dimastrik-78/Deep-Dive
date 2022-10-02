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
    [HideInInspector] public float submarineHeal = 5;
    [HideInInspector] public bool eventInProgress;
    
    private bool _canMove = true;
    
    void Start()
    {
        _submarineInput = new SubmarineInput(rb, speed);
        _submarineEvent = new SubmarineEvent();
    }

    void Update()
    {
        if (_canMove
            && !eventInProgress)
        {
            _submarineInput.Update();
        }

        _submarineEvent.Update(ref timeEvent, eventInProgress);
    }
    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.layer == 7)
        {
            _canMove = false;
        }
    }
}
