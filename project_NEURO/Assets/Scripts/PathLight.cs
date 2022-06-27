using System.Collections;
using System.Collections.Generic;
using System.Linq;
using JSNodeMap;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PathLight : MonoBehaviour
{
    /*
     * NOTE: This demo assumes one Agent with type "Player" and one with type "NPC"
     * For your own projects, you may have to get agent-type in a more dynamic way.
     */

    // UI elements
    public Button btnNextTurn;
    public TMP_Text txtTurnNumber;
    public TMP_Text txtPlayerStatus;
    public TMP_Text txtNpcStatus;
    public Canvas cnvBattleText;

    // NodeMap references
    public Map map;
    private Agent playerAgent;
    private Agent npcAgent;

    private int currentTurn = 1;        // Used for keeping track of the main game's turn state
    private bool isPlayerTurn = true;

    private float maxDistance = 1000f;
    void Awake()
    {
        btnNextTurn.onClick.AddListener(ProcessNextTurn);
        if (map.mapAgents.Count < 2)
        {
            Debug.LogError("Agents not properly assigned. Player agent type should be in first slot and NPC in second.");
        }
        playerAgent = map.mapAgents.Find(a => a.agentType == 0);
        playerAgent.OnNodeArrive += PlayerNodeArrive;
        playerAgent.doMove = false;

        npcAgent = map.mapAgents.Find(a => a.agentType == 1);
        npcAgent.SetCurrentNodeByName("C3");
        npcAgent.targetNode = GetRandomNpcTarget();
        npcAgent.OnNodeArrive += NpcNodeArrive;
        npcAgent.doMove = false;
        UpdateNpcStatus();

        UpdateTurnStatus();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && isPlayerTurn)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, maxDistance))
            {
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
        string targetText, routeText;

        // Clear old route
        map.ClearRouteHighlight();

        // Set route and update UI text
        if (targetNode)
        {
            List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, playerAgent);
            targetText = targetNode.nodeName;
            routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
            map.HighlightRoute(route);
        }
        else
        {
            targetText = "None";
            routeText = "No route";
        }
        txtPlayerStatus.text = $"Current Node: {currentNode.nodeName}\nDestination Node: {targetText}\nRoute: {routeText}";

        // Set turn button state
        btnNextTurn.interactable = targetNode != null && currentNode != targetNode && isPlayerTurn;
    }

    private void UpdateNpcStatus()
    {
        Node currentNode = npcAgent.currentNode;
        Node targetNode = npcAgent.targetNode;
        List<Node> route = Pathfinding.FindRoute(currentNode, targetNode, npcAgent);
        // Set UI text
        string routeText = string.Join(", ", route.Select(n => n.nodeName).ToList());
        txtNpcStatus.text = $"Current Node: {currentNode.nodeName}\nDestination Node: {targetNode.nodeName}\nRoute: {routeText}";
    }

    private void UpdateTurnStatus()
    {
        string curAgentTurn = isPlayerTurn ? "Player" : "NPC";
        txtTurnNumber.text = $"Turn: {currentTurn} - {curAgentTurn}";
    }

    private Node GetRandomNpcTarget()
    {
        List<Node> allNodes = new List<Node>(map.mapNodes);
        allNodes.Remove(npcAgent.currentNode);
        return allNodes[Random.Range(0, allNodes.Count - 1)];
    }

    private void PlayerNodeArrive(Node node, bool target)
    {
        Debug.Log($"Player arrive {node.nodeName}");

        // Stop after moving one node
        playerAgent.isMoving = false;
        playerAgent.doMoveToTarget = false;

        // If we've arrived at target node, clear target
        if (target)
        {
            playerAgent.targetNode = null;
        }

        CheckBattleConditions();

        // Update player status
        UpdatePlayerStatus();

        // When player finishes moving, let the NPC move
        npcAgent.doMove = true;
        npcAgent.MoveToTarget(npcAgent.targetNode);

        UpdateTurnStatus();
    }

    private void NpcNodeArrive(Node node, bool target)
    {
        Debug.Log($"NPC arrive {node.nodeName}");

        currentTurn++;

        // Stop after moving one node
        npcAgent.isMoving = false;
        npcAgent.doMoveToTarget = false;

        // If we've arrived at target node, clear target
        if (target)
        {
            Debug.Log("NPC reached target. Selecting new destination.");
            npcAgent.targetNode = GetRandomNpcTarget();
        }

        CheckBattleConditions();

        // When NPC finishes moving, allow the player to set new destination or process next turn
        isPlayerTurn = true;
        UpdatePlayerStatus();
        UpdateNpcStatus();
        UpdateTurnStatus();
    }

    private void CheckBattleConditions()
    {
        if (npcAgent.currentNode == playerAgent.currentNode)
        {
            Debug.Log("BATTLE!");

            Vector3 pos = playerAgent.currentNode.transform.position;
            cnvBattleText.transform.position = new Vector3(pos.x, pos.y + 1, pos.z);
            cnvBattleText.gameObject.SetActive(true);
            StartCoroutine(HideBattleText());
        }
    }

    private IEnumerator HideBattleText()
    {
        yield return new WaitForSeconds(3);
        cnvBattleText.gameObject.SetActive(false);
    }

    private void ProcessNextTurn()
    {
        UpdateTurnStatus();
        isPlayerTurn = false;
        btnNextTurn.interactable = false;

        // Start moving player towards target
        playerAgent.doMove = true;
        playerAgent.MoveToTarget(playerAgent.targetNode);
    }
}
