using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

public class StageManager : MonoBehaviour
{
    GameObject[] spawns;
    public GameObject[] preCharactors;
    PlayerController myCharactor;

    public Button Reload;
    public Button Skil;
    public Button Jump;
    public Button Rolling;
    public Image RollingDelay;
    public Button throwAttack;
    public Joystick leftJoystick;
    public Joystick rightJoystick;
    public TextMeshProUGUI coin;

    public UserInfo userState;

    public Camera mainCam;
    public bool readyStage = false;

    public void Init()
    {
        Debug.Log("Stage Init");
        spawns = GameObject.FindGameObjectsWithTag("PlayerSpawn");

        myCharactor.Init();
        myCharactor.transform.position = spawns[0].transform.position;
        myCharactor.transform.rotation = spawns[0].transform.rotation;

        if (Camera.main != null)
        {
            Debug.Log("Destroy camera");
            Destroy(Camera.main.gameObject);
        }
        else
        {
            Debug.Log("NOT Destroy camera");
        }
    }

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        GameManager.instance.stageManager = this;
        spawns = GameObject.FindGameObjectsWithTag("PlayerSpawn");

        myCharactor = Instantiate(preCharactors[GameManager.instance.charactorIdx],
            spawns[0].transform.position, Quaternion.identity).GetComponent<PlayerController>();

        mainCam = Camera.main;

        mainCam.transform.parent = myCharactor.transform;
        mainCam.transform.rotation = myCharactor.transform.rotation;
        mainCam.transform.localPosition = new Vector3(0, 1.1f, 0);

        myCharactor.cam = mainCam;
        mainCam.tag = "PlayerCam";
        myCharactor.Init();

        myCharactor.coinTxt = coin;
        coin.text = myCharactor.coin.ToString();
        userState.Dmg = myCharactor.level.DmgLevel;
        userState.Speed = myCharactor.level.SpeedLevel;
        userState.Fire = myCharactor.level.FireLevel;
        userState.SetSclolls(myCharactor.level.myScroll);
    }

    public void SetUserInven()
    {
        userState.gameObject.SetActive(true);
    }
}
