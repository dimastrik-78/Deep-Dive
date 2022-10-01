using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Submarine : MonoBehaviour
{
    [SerializeField] private float _speed;

    [SerializeField] private Rigidbody2D _rb;
    
    private SubmarineInput _playerInput;
    private SubmarineIvent _playerIvent;
    private O2 _o2;

    [HideInInspector] public float timeIvent = 10;
    void Start()
    {
        _playerInput = new SubmarineInput(_rb, _speed);
        _playerIvent = new SubmarineIvent();
        _o2 = FindObjectOfType<O2>();
    }

    void Update()
    {
        _playerInput.Update();

        timeIvent -= Time.deltaTime;
    }
}
