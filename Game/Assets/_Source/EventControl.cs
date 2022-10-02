using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventControl
{
    private Submarine _submarine = GameObject.FindObjectOfType<Submarine>();

    public void TaskCompleted()
    {
        _submarine.eventInProgress = false;
    }

    public void MissionFailed()
    {
        _submarine.submarineHeal--;
        _submarine.eventInProgress = false;
    }

    public void ResetEvent(GameObject gameObject, ref float time, ref int taskProgress)
    {
        time = 10;
        taskProgress = 0;
        gameObject.SetActive(false);

        for (int i = 0; i < gameObject.transform.childCount; i++)
        {
            if (!gameObject.transform.GetChild(i).gameObject.activeSelf)
            {
                gameObject.transform.GetChild(i).gameObject.SetActive(true);
            }
        }
    }
}
