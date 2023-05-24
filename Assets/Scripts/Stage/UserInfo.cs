using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class UserInfo : MonoBehaviour
{
    public Transform scrollContent;
    public ChestSelect scroll;

    string infoFormat = "x {0}";
    public TMPro.TextMeshProUGUI dmg;
    public float Dmg {
        set {
            dmg.text = string.Format(infoFormat, value);
        }
    }
    
    public TMPro.TextMeshProUGUI fire;
    public float Fire {
        set {
            fire.text = string.Format(infoFormat, value);
        }
    }

    public TMPro.TextMeshProUGUI speed;
    public float Speed {
        set {
            speed.text = string.Format(infoFormat, value);
        }
    }


    List<ChestData> scrolls = new List<ChestData>();

    public void SetSclolls(List<ChestData> list)
    {
        foreach (var scroll in list)
        {
            AddScroll(scroll);
        }
    }

    public void AddScroll(ChestData sc)
    {
        if (scrolls.Contains(sc))
            return;
        scrolls.Add(sc);

        var s = Instantiate(scroll, scrollContent);
        s.Image.sprite = sc.img;
        s.comment.text = sc.comment;
    }

    public void Close()
    {
        gameObject.SetActive(false);
    }

    public void OnEnable()
    {
        GameManager.instance.MouseLock(false);
    }
    public void OnDisable()
    {
        GameManager.instance.MouseLock(true);
    }
}
