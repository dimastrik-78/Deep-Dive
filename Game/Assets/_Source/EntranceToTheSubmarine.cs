using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class EntranceToTheSubmarine : MonoBehaviour
{
    [SerializeField] private GameObject submarine;
    [SerializeField] private GameObject player;
    
    [HideInInspector] public bool inSubmarine;
    
    private bool _canEntrance;

    public void Update()
    {
        if (Input.GetKeyUp(KeyCode.Space) && _canEntrance)
        {
            player.SetActive(false);
            submarine.transform.GetChild(0).gameObject.SetActive(true);
            
            player.GetComponent<Player>().enabled = false;
            submarine.GetComponent<Submarine>().enabled = true;

            inSubmarine = true;
        }
        else if (Input.GetKeyUp(KeyCode.Space) 
                 && Input.GetAxis("Horizontal") == 0 
                 && Input.GetAxis("Vertical") == 0)
        {
            player.transform.position = new Vector2(-15, -1);
            
            player.SetActive(true);
            submarine.transform.GetChild(0).gameObject.SetActive(false);
            
            player.GetComponent<Player>().enabled = true;
            submarine.GetComponent<Submarine>().enabled = false;
            
            inSubmarine = false;
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.layer == 0) _canEntrance = true;
    }
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.layer == 0) _canEntrance = false;
    }
}
