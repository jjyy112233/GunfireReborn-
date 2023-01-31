using UnityEngine;
using UnityEngine.UI;

public class StageManager : MonoBehaviour
{
    public Transform[] spawns;
    public GameObject[] preCharactors;
    GameObject myCharactor;

    public Button Reload;
    public Button Skil;
    public Button Jump;
    public Button Rolling;
    public Button throwAttack;
    public Joystick leftJoystick;
    public Joystick rightJoystick;

    Camera mainCam;

    private void Awake()
    {
        myCharactor = Instantiate(preCharactors[GameManager.instance.charactorIdx],
            spawns[0].position, Quaternion.identity);
        mainCam = Camera.main;

    }
    void Start()
    {
        mainCam.transform.parent = myCharactor.transform;
        mainCam.transform.rotation = myCharactor.transform.rotation;
        mainCam.transform.localPosition = new Vector3(0, 1.1f, 0);
    }
}
