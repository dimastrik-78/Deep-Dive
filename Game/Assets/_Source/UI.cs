using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public class UI : MonoBehaviour
{
    public Player player;
    public Submarine submarine;
    public O2 o2;

    [SerializeField] private Slider slider;
    [SerializeField] private Text text;
    [SerializeField] private GameObject[] iventPanel;
    
    void Update()
    {
        text.text = o2.time.ToString();
        slider.value = o2.o2;

        if (submarine.timeIvent <= 0)
        {
            Random ran = new Random();
            iventPanel[ran.Next(0, iventPanel.Length)].SetActive(true);
            
            submarine.timeIvent = 10;
        }
    }
}
