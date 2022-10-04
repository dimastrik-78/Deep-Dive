using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIMenu : MonoBehaviour
{
    public GameObject MenuPanel;
    public GameObject TutorPanel;
    public GameObject StoryPanel;
    
    public void Tutorial()
    {
        MenuPanel.SetActive(false);
        TutorPanel.SetActive(true);
    }

    public void Menu()
    {
        MenuPanel.SetActive(true);
        TutorPanel.SetActive(false);
    }

    public void StartGame()
    {
        Time.timeScale = 1;
        
        SceneManager.LoadScene(1);
    }

    public void Play()
    {
        StoryPanel.SetActive(true);
    }
}
