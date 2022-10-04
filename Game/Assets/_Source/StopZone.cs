using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StopZone : MonoBehaviour
{
    [SerializeField] private Player _player;
    [SerializeField] private Submarine _submarine;
    [SerializeField] private GameObject onTriggerZone;
    
    void Update()
    {
        if (_player.resource >= 5)
        {
            onTriggerZone.SetActive(true);
    
            _submarine.canMove = true;
            _player.resource = 0;
                
            Destroy(gameObject);
        }
    }
}
