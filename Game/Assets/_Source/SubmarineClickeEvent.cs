using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmarineClickeEvent : MonoBehaviour
{
    private EventControl _eventControl;
    
    private float _time = 10;
    private int _taskProgress;

    private void Start()
    {
        _eventControl = new EventControl();
    }

    private void Update()
    {
        _time -= Time.deltaTime;
        if (_time <= 0)
        {
            _eventControl.MissionFailed();
            _eventControl.ResetEvent(gameObject, ref _time, ref _taskProgress);
        }
    }

    public void TaskCompletion()
    {
        _taskProgress++;

        if (_taskProgress >= 5)
        {
            _eventControl.TaskCompleted();
            _eventControl.ResetEvent(gameObject, ref _time, ref _taskProgress);
        }
    }
}
