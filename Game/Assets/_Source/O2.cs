using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class O2 : MonoBehaviour
{
    [SerializeField] private EntranceToTheSubmarine entranceToTheSubmarine;
    [HideInInspector] public float time = 10;
    [HideInInspector] public int o2 = 4;

    private void Update()
    {
        if (!entranceToTheSubmarine.inSubmarine)
        {
            WasteOxygen();
        }
        else if (entranceToTheSubmarine 
                 && o2 < 5)
        {
            OxygenReplenished();
        }
        
        if (o2 <= 0)
        {
            Debug.Log("Lose");
            Time.timeScale = 0;
        }
    }

    private void WasteOxygen()
    {
        time -= Time.deltaTime;
        
        if (time <= 0)
        {
            o2--;
            time = 10;
        }
    }

    private void OxygenReplenished()
    {
        time += Time.deltaTime;
        if (time >= 10)
        { 
            time = 0;
            o2++;
        }
    }
}
