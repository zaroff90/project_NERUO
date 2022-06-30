using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target;
    public GameObject canvas;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z);
    }

    public void GameStart()
    {
        canvas.SetActive(true);
        GameObject.Find("PlayerAgent").GetComponent<DirectMove>().enabled = true;
    }
}
