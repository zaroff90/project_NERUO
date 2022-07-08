using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public GameObject canvas;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(GameObject.Find("PlayerAgent").transform.position.x, transform.position.y, GameObject.Find("PlayerAgent").transform.position.z);
    }

    public void GameStart()
    {
        canvas.SetActive(true);
        GameObject.Find("PlayerAgent").GetComponent<DirectMove>().enabled = true;
    }
}
