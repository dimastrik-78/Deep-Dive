using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmarineEvent
{
    public void Update(ref float timeEvent, bool eventInProgress)
    {
        if (!eventInProgress)
        {
            timeEvent -= Time.deltaTime;
        }
    }
}
