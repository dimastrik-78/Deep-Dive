using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EntranceToTheSubmarine : MonoBehaviour
{
    [SerializeField] private GameObject submarine;
    [SerializeField] private Rigidbody2D submarineRB;
    [SerializeField] private GameObject submarineCanvas;
    [SerializeField] private GameObject playerCanvas;
    [SerializeField] private GameObject player;
    [SerializeField] private Transform position;
    
    [HideInInspector] public bool inSubmarine = true;
    
    private bool _canEntrance;

    public void Update()
    {
        if (Input.GetKeyUp(KeyCode.Space) 
            && _canEntrance)
        {
            submarineRB.constraints = RigidbodyConstraints2D.FreezeRotation; 
            
            player.SetActive(false);
            playerCanvas.SetActive(false);
            submarine.transform.GetChild(0).gameObject.SetActive(true);
            submarineCanvas.SetActive(true);
            
            player.GetComponent<Player>().enabled = false;
            submarine.GetComponent<Submarine>().enabled = true;

            inSubmarine = true;
        }
        else if (Input.GetKeyUp(KeyCode.Space) 
                 && submarineRB.velocity == Vector2.zero)
        {
            submarineRB.constraints = RigidbodyConstraints2D.FreezeAll; 
            
            player.transform.position = new Vector2(position.position.x, position.position.y);
            
            player.SetActive(true);
            playerCanvas.SetActive(true);
            submarine.transform.GetChild(0).gameObject.SetActive(false);
            submarineCanvas.SetActive(false);
            
            player.GetComponent<Player>().enabled = true;
            submarine.GetComponent<Submarine>().enabled = false;
            
            inSubmarine = false;
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.layer == 6)
        {
            _canEntrance = true;
        }
    }
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.layer == 6)
        {
            _canEntrance = false;
        }
    }
}
