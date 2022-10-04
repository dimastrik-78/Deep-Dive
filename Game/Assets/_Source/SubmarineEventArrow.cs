using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

public class SubmarineEventArrow : MonoBehaviour
{
    private EventControl _eventControl;

    public GameObject[] TaskProgress;

    private float _time = 5;
    private int _taskProgress;
    private int[] _whichArrow;
    
    private KeyCode[] _arrow = new[]
    {
        KeyCode.UpArrow,
        KeyCode.DownArrow,
        KeyCode.LeftArrow,
        KeyCode.RightArrow
    };

    private KeyCode[] combinations = new KeyCode[4];
    private void Start()
    {
        _eventControl = new EventControl();
        combinations = GenerateCombination();
    }

    private void Update()
    {
        _time -= Time.deltaTime;

        if (_time <= 0)
        {
            combinations = GenerateCombination();
            _eventControl.MissionFailed();
            _eventControl.ResetEvent(gameObject,  ref _taskProgress);
            _time = 5;
        }

        if (_taskProgress == 0
            && Input.GetKeyDown(combinations[0]))
        {
            TaskCompletion();
        }
        else if (_taskProgress == 1
                 && Input.GetKeyDown(combinations[1]))
        {
            TaskCompletion();
        }
        else if (_taskProgress == 2
                 && Input.GetKeyDown(combinations[2]))
        {
            TaskCompletion();
        }
        else if (_taskProgress == 3
                 && Input.GetKeyDown(combinations[3]))
        {
            TaskCompletion();
        }
        else if (Input.GetKeyDown(combinations[0]) 
                 || Input.GetKeyDown(combinations[1])
                 || Input.GetKeyDown(combinations[2])
                 || Input.GetKeyDown(combinations[3]))
        {
            combinations = GenerateCombination();
            _eventControl.MissionFailed();
            _eventControl.ResetEvent(gameObject, ref _taskProgress);
            _time = 5;
        }
    }

    private KeyCode[] GenerateCombination()
    {
        Random ran = new Random();
        _whichArrow = new int[]
        {
            ran.Next(0, 4),
            ran.Next(0, 4),
            ran.Next(0, 4),
            ran.Next(0, 4)
        };
        KeyCode[] combination = new KeyCode[]
        {
            _arrow[_whichArrow[0]],
            _arrow[_whichArrow[1]],
            _arrow[_whichArrow[2]],
            _arrow[_whichArrow[3]]
        };
        for (int i = 0; i < TaskProgress.Length; i++)
        {
            if (_whichArrow[i] == 0)
            {
                TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 0);
            }
            else if (_whichArrow[i] == 1)
            {
                TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 180);
            }
            else if (_whichArrow[i] == 2)
            {
                TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, 90);
            }
            else if (_whichArrow[i] == 3)
            {
                TaskProgress[i].transform.rotation = Quaternion.Euler(0, 0, -90);
            }
        }
        return combination;
    }
    private void TaskCompletion()
    {
        TaskProgress[_taskProgress].SetActive(false);
        
        _taskProgress++;
    
        if (_taskProgress >= 4)
        {
            combinations = GenerateCombination();
            _eventControl.TaskCompleted();
            _eventControl.ResetEvent(gameObject,  ref _taskProgress);
            _time = 5;
        }
    }
}
