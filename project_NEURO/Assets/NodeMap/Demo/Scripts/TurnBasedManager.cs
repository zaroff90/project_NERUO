using System.Collections;
using System.Collections.Generic;
using System.Linq;
using JSNodeMap;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TurnBasedManager : MonoBehaviour
{
    // NodeMap references
    public Map map;
    private Agent playerAgent;
    private Agent npcAgent;

    private int currentTurn = 0;        // Used for keeping track of the main game's turn state
    private bool isPlayerTurn = true;
    
    private float maxDistance = 1000f;

    public GameObject loseScreen;
    void Awake()
    {
        playerAgent = map.mapAgents.Find(a => a.agentType == 0);
        playerAgent.OnNodeArrive += PlayerNodeArrive;
        playerAgent.SetCurrentNodeByName("startNode");

        npcAgent = map.mapAgents.Find(a => a.agentType == 1);
        npcAgent.SetCurrentNodeByName("npcNode");
        npcAgent.targetNode = GetRandomNpcTarget();
        npcAgent.OnNodeArrive += NpcNodeArrive;
        UpdateNpcStatus();

    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && isPlayerTurn) {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, maxDistance)) {
                Node hitNode = hit.transform.GetComponent<Node>();
                if (hitNode != null)
                {
                    playerAgent.targetNode = hitNode;
                    UpdatePlayerStatus();
                }
            }
        }

    }

    private void UpdatePlayerStatus()
    {
        Node currentNode = playerAgent.currentNode;
        Node targetNode = playerAgent.targetNode;
        // Clear old route
        map.ClearRouteHighlight();
        map.current = playerAgent.currentNode;
        List<Node> neighborNodes = Pathfinding.GetNeighbors(playerAgent.currentNode, playerAgent);

        map.HighlightRoute(neighborNodes);

    }

    private void UpdateNpcStatus()
    {
        Node currentNode = npcAgent.currentNode;
        Node targetNode = npcAgent.targetNode;
        List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, npcAgent);
    }

    private Node GetRandomNpcTarget()
    {
        List<Node> allNodes = new List<Node>(map.mapNodes);
        allNodes.Remove(npcAgent.currentNode);
        return allNodes[Random.Range(0, allNodes.Count - 1)];
    }
    
    private void PlayerNodeArrive(Node node, bool target)
    {
        currentTurn++;
        GameObject.Find("turns").GetComponent<TextMeshProUGUI>().text = "TURNS: " + currentTurn;
        //playerAgent.currentNode.HidePaths();

        // If we've arrived at target node, clear target
        if (target)
        {
            playerAgent.targetNode = null;
        }
        
        // Update player status
        UpdatePlayerStatus();
        
        // When player finishes moving, let the NPC move
        npcAgent.MoveToTarget(npcAgent.targetNode);

        /*
        int count = playerAgent.currentNode.DeadEnd();
        if (count <= 0)
        {
            GameOver();
        }
        */
    }
    
    private void NpcNodeArrive(Node node, bool target)
    {                    
        // If we've arrived at target node, clear target
        if (target)
        {
            npcAgent.targetNode = playerAgent.currentNode;
            StartCoroutine(TimeReset());
        }
        
        // When NPC finishes moving, allow the player to set new destination or process next turn
        UpdateNpcStatus();
    }

    public void GameOver()
    {
        loseScreen.SetActive(true);
    }

    private void ProcessNextTurn()
    {
        isPlayerTurn = false;
        
        // Start moving player towards target
        playerAgent.doMove = true;
        playerAgent.MoveToTarget(playerAgent.targetNode);
    }

    public void Reset()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public IEnumerator TimeReset()
    {
        yield return new WaitForSeconds(.1f);
        npcAgent.targetNode = playerAgent.currentNode;
        npcAgent.MoveToTarget(npcAgent.targetNode);
        StartCoroutine(TimeReset());
        }
}
