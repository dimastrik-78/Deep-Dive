using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using Random = System.Random;

public class SubmarineClickeEvent : MonoBehaviour
{
    private EventControl _eventControl;

    [SerializeField] private GameObject[] Button;
    [SerializeField] private Transform[] positionButton;
    
    private float _time = 3;
    private int _taskProgress;
    private int _countButton;

    private void Start()
    {
        _eventControl = new EventControl();

        CreateCombination();
    }

    private void Update()
    {
        _time -= Time.deltaTime;
        if (_time <= 0)
        {
            CreateCombination();
            _eventControl.MissionFailed();
            _eventControl.ResetEvent(gameObject, ref _taskProgress);
            _time = 3;
        }
    }

    private void CreateCombination()
    {
        for (int i = 0; i < Button.Length; i++)
        {
            Button[i].transform.position = new Vector2(0, 0);
        }
        
        Random ran = new Random();
        while (_countButton < 5)
        {
            for (int i = 0; i < positionButton.Length; i++)
            {
                if (ran.Next(0, 2) == 0 
                    && positionButton[i].gameObject.activeSelf)
                {
                    Button[_countButton].transform.position = new Vector2(positionButton[i].position.x, positionButton[i].position.y);
                    positionButton[i].gameObject.SetActive(false);
                    _countButton++;
                    
                    if (_countButton >= 5)
                    {
                        break;
                    }
                }
            }
        }

        _countButton = 0;
    }

    public void TaskCompletion()
    {
        _taskProgress++;

        if (_taskProgress >= 5)
        {
            CreateCombination();
            _eventControl.TaskCompleted();
            _eventControl.ResetEvent(gameObject, ref _taskProgress);
            _time = 3;
        }
    }
}
