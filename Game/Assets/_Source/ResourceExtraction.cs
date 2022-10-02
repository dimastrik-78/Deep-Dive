using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ResourceExtraction : MonoBehaviour
{
    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.layer == 6
            && Input.GetKey(KeyCode.E))
        { 
            Destroy(gameObject.transform.parent.gameObject);
        }
    }
}
