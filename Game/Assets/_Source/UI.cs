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

    [SerializeField] private Slider sliderO2;
    [SerializeField] private Slider sliderSubmarineHeal;
    [SerializeField] private Text textO2;
    [SerializeField] private Text textResource;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private GameObject[] eventPanel;

    void Update()
    {
        UIChange();

        if (submarine.timeEvent <= 0)
        {
            Random ran = new Random();
            eventPanel[ran.Next(0, eventPanel.Length)].SetActive(true);

            submarine.eventInProgress = true;
            submarine.timeEvent = 10;
        }

        if (o2.o2 <= 0 
            || submarine.submarineHeal <= 0)
            Lose();
    }

    private void Lose()
    {
        losePanel.SetActive(true);
        Time.timeScale = 0;
    }

    private void UIChange()
    {
        textResource.text = $"{player.resource}/30";
        textO2.text = o2.time.ToString();
        sliderO2.value = o2.o2;
        sliderSubmarineHeal.value = submarine.submarineHeal;
    }
}
