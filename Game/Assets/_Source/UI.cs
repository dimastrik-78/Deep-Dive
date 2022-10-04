using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = System.Random;

public class UI : MonoBehaviour
{
    public Player player;
    public Submarine submarine;
    public O2 o2;
    public EntranceToTheSubmarine entranceToTheSubmarine;

    [SerializeField] private Text textO2;
    [SerializeField] private Text textResource;
    [SerializeField] private GameObject gamePanel;
    [SerializeField] private GameObject losePanel;
    [SerializeField] private GameObject pausePanel;
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject[] eventPanel;
    [SerializeField] private GameObject[] submarineHeal;
    [SerializeField] private GameObject[] playerO2;

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
        
        if (player.win
            || submarine.win)
        {
            Win();
        }
    }

    public void Pause()
    {
        Time.timeScale = 0;
        
        pausePanel.SetActive(true);
        gamePanel.SetActive(false);
    }

    public void Continue()
    {
        Time.timeScale = 1;
        
        pausePanel.SetActive(false);
        gamePanel.SetActive(true);
    }

    public void Menu()
    {
        Time.timeScale = 1;
        
        SceneManager.LoadScene(0);
    }

    public void Replay()
    {

        Time.timeScale = 1;
        // SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene(1);

    }
    
    private void Lose()
    {
        Time.timeScale = 0;
        
        losePanel.SetActive(true);
    }
    
    private void Win()
    {
        Time.timeScale = 0;
        
        winPanel.SetActive(true);
        gamePanel.SetActive(false);
    }

    private void UIChange()
    {
        textResource.text = $"{player.resource}/5";
        textO2.text = o2.time.ToString();
        
        if (o2.o2 < 4 
            && !entranceToTheSubmarine.inSubmarine)
        {
            playerO2[o2.o2].SetActive(false);
        }
        else if (o2.o2 < 4 
                 && entranceToTheSubmarine.inSubmarine)
        {
            playerO2[o2.o2].SetActive(true);
        }
        
        if (submarine.submarineHeal < 5)
        {
            submarineHeal[submarine.submarineHeal].SetActive(false);
        }
    }
}
