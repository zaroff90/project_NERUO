﻿using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace JSNodeMap {
	[System.Serializable]
	[ExecuteInEditMode]
	public class Map : MonoBehaviour {
		public string version = "1.0";

		public float defaultMarkerSpacing = 1f;
		public float redrawThreshhold = 0.1f;

		[HideInInspector]
		public DrawMode drawMode;
		public float nodeScale = 1f;

		public bool drawNodes = true;
		public bool drawMarkers = true;
		public bool drawLines = false;
		public float lineWidth = 0.5f;
		public LineAlignment lineOrientation = LineAlignment.TransformZ;
		public MovementType defaultPathDirection = MovementType.TwoWay;

		public NodeTypeData nodeData;

		[SerializeField]
		public List<Node> mapNodes = new List<Node> ();

		[SerializeField]
		public List<Agent> mapAgents = new List<Agent> ();

		public string[] agentTypes = { "Default" };

		public bool allPaused;

		public Node current;

		// Built-in
		void OnValidate () {
			defaultMarkerSpacing = Mathf.Max (0.01f, defaultMarkerSpacing);

			// Resize nodes as needed
			// ResizeNodes ();
		}

		void OnDrawGizmos () {
			nodeScale = Mathf.Clamp (nodeScale, 0, System.Single.MaxValue);
		}

		// Private Methods

		public void ResizeNodes () {
			Node[] nodes = GetComponentsInChildren<Node> ();
			foreach (Node node in nodes) {
				node.gameObject.transform.localScale = new Vector3 (nodeScale, nodeScale, nodeScale);

				Path[] paths = node.transform.GetComponentsInChildren<Path> ();
				foreach (Path path in paths) {
					path.gameObject.transform.localScale = new Vector3 (1f / nodeScale, 1f / nodeScale, 1f / nodeScale);
				}
			}
		}

		// Static Methods

		public static Path FindValidPath (Node nodeA, Node nodeB) {
			Path[] paths = nodeA.paths.Concat (nodeB.paths).ToArray ();

			foreach (Path path in paths) {
				if (path.IsValid () == false) {
					continue;
				}
				if ((path.toNode == nodeB && path.fromNode == nodeA) || (path.toNode == nodeA && path.fromNode == nodeB)) {
					return path;
				}
			}

			return null;
		}

		public static Vector3 GetPointOnPath (Path path, float normalizedDistance) {
			if (path.IsValid () == false) {
				return Vector3.zero;
			}
			normalizedDistance = Mathf.Clamp (normalizedDistance, 0f, 1f);

			Vector3 pointA = path.fromNode.transform.position;
			Vector3 pointB = path.toNode.transform.position;

			Vector3 pos = pointA + (pointB - pointA) * normalizedDistance;

			return pos;
		}

		public static void RemovePath (Path path) {
			if (path == null) return;
			path.fromNode.paths.Remove (path);
			path.fromNode = null;
			path.toNode = null;
			DestroyImmediate (path.gameObject);
		}

		public static void RemoveNode (Node node) {
			if (node == null) return;
			foreach (Path path in node.paths) {
				RemovePath (path);
			}
			node.nodeMap.ClearPathsToNode (node);

			node.nodeMap.mapNodes.Remove (node);
			DestroyImmediate (node.gameObject);
		}

		// Public Methods

		public void ClearPathsToNode (Node clearNode) {
			Path[] delPaths = GetPathsToNode (clearNode);
			foreach (Path path in delPaths) {
				if (path != null) DestroyImmediate (path.gameObject);
			}
			Refresh ();
		}

		public Agent CreateAgent (Node node = null) {
			if (node == null) node = transform.GetComponentInChildren<Node> ();
			if (node == null) return null;

			GameObject newAgentObj = new GameObject ("Agent");
			newAgentObj.transform.SetParent (transform.Find ("Agents"));
			newAgentObj.transform.position = (node != null) ? node.transform.position : Vector3.zero;
			newAgentObj.transform.localRotation = Quaternion.identity;

			Agent newAgent = newAgentObj.AddComponent<Agent> ();
			newAgent.Initialize (this, node);

			mapAgents.Add (newAgent);

			return newAgent;
		}

		public Node CreateNode () {
			GameObject newNodeObj = new GameObject ("Node " + mapNodes.Count);
			newNodeObj.transform.SetParent (transform.Find ("Nodes"));
			newNodeObj.transform.localPosition = Vector3.zero;
			newNodeObj.transform.localScale = new Vector3(nodeScale, nodeScale, nodeScale);
			Quaternion objRot = (drawMode == DrawMode.Object) ? Quaternion.identity : Quaternion.Euler (90f, 0f, 0f);
			newNodeObj.transform.localRotation = objRot;
			newNodeObj.isStatic = true;

			Node newNode = newNodeObj.AddComponent<Node> ();
			newNode.Initialize (this);

			mapNodes.Add (newNode);

			return newNode;
		}

		public Node GetNodeByName (string name) {
			return mapNodes.FirstOrDefault (n => n.nodeName == name);
		}

		public Path[] GetPathsToNode (Node node) {
			// UpdateAllReferences();
			return mapNodes.SelectMany (n => n.paths).Where (p => p.toNode == node).ToArray ();
		}

		public int GetNodeTypeIndexByName(string typeName) {
			return System.Array.FindIndex(nodeData.nodeTypes, t => t.name == typeName);
		}

		public int GetMarkerTypeIndexByName(string typeName) {
			return System.Array.FindIndex(nodeData.markerTypes, t => t.name == typeName);
		}

		public int GetAgentTypeIndexByName(string typeName) {
			return System.Array.IndexOf(agentTypes, typeName);
		}

		public bool IsNodeType(Node node, string typeName) {
			return node.nodeType == GetNodeTypeIndexByName(typeName);
		}

		public bool IsMarkerType(Marker marker, string typeName) {
			return marker.markerType == GetMarkerTypeIndexByName(typeName);
		}

		public bool IsAgentType(Agent agent, string typeName) {
			return agent.agentType == GetAgentTypeIndexByName(typeName);
		}

		public void RedrawMap(bool drawModeChanged) {
			Refresh();
			
			if (mapNodes == null || mapNodes.Count == 0) {
				mapNodes = transform.GetComponentsInChildren<Node> ().ToList ();
			}

			foreach (Node node in mapNodes) {
				if (drawModeChanged) {
					node.SetDrawMode (drawMode, nodeData);
					node.SetVisible (node.drawNode);
				}

				if (node.paths == null || node.paths.Count == 0) {
					node.paths = node.transform.GetComponentsInChildren<Path> ().ToList ();
				}

				foreach (Path path in node.paths) {
					path.RedrawMarkers ();

					if (path.drawLine) {
						path.line.widthMultiplier = lineWidth;
					}
				}
			}
		}

		public void Refresh () {
			mapNodes = transform.GetComponentsInChildren<Node> ().ToList ();
			for (int i = 0; i < mapNodes.Count; i++) {
				Node node = mapNodes[i];
				
				if (node == null) {
					mapNodes.RemoveAt(i);
					continue;
				}
				
				List<Path> paths = node.transform.GetComponentsInChildren<Path> ().ToList ();
				node.paths = new List<Path> ();

				for (int j = 0; j < paths.Count; j++) {
					Path path = paths[j];
					
					if (path == null) {
						paths.RemoveAt(j);
						continue;
					}
					
					if (path.IsValid ()) node.paths.Add (path);
					path.line = path.gameObject.GetComponent<LineRenderer> ();
					if (path.line == null) {
						path.line = path.gameObject.AddComponent<LineRenderer> ();
						path.Initialize (this, path.fromNode, path.toNode);
					}
				}
			}
			mapAgents = transform.GetComponentsInChildren<Agent> ().ToList ();
		}

		public void PauseAll () {
			foreach (Agent agent in mapAgents) {
				agent.Pause ();
			}
		}

		public void PlayAll () {
			foreach (Agent agent in mapAgents) {
				agent.Play ();
			}
		}

		public void HighlightRoute(List<Node> route)
		{
			Debug.Log(route.Count);
			for (int i = 0; i < route.Count; i++)
			{
				Node node = route[i];
				
				if (drawMode == DrawMode.Object)
				{
					node.gameObject.GetComponent<MeshRenderer>().material = nodeData.highlightMaterial;
				}
				else
				{
					node.gameObject.GetComponent<SpriteRenderer>().material = nodeData.highlightMaterial;
				}
				Path path = FindValidPath(current, route[i]);
				if (path != null)
				{
					path.line.material = nodeData.highlightMaterial;
					path.drawLine = false;
				}
				// Highlight paths for all but last set of nodes
				if (i != route.Count - 1)
				{


					/*
					Marker[] markers = path.transform.GetComponentsInChildren<Marker>();
					if (drawMode == DrawMode.Object)
					{
						foreach (Marker marker in markers)
						{
							marker.GetComponent<MeshRenderer>().material = nodeData.highlightMaterial;
						}
					}
					else
					{
						foreach (Marker marker in markers)
						{
							marker.GetComponent<SpriteRenderer>().material = nodeData.highlightMaterial;
						}
					}
					*/
				}
			}
		}

		public void ClearRouteHighlight()
		{
			foreach (Node node in mapNodes)
			{
				if (drawMode == DrawMode.Object)
				{
					node.gameObject.GetComponent<MeshRenderer>().material = nodeData.meshMaterial;
				}
				else
				{
					node.gameObject.GetComponent<SpriteRenderer>().color = Color.white;
				}

				foreach (Path path in node.paths)
				{
					Marker[] markers = path.transform.GetComponentsInChildren<Marker>();
					if (drawMode == DrawMode.Object)
					{
						foreach (Marker marker in markers)
						{
							marker.GetComponent<MeshRenderer>().material = nodeData.meshMaterial;
						}
					}
					else
					{
						foreach (Marker marker in markers)
						{
							marker.GetComponent<SpriteRenderer>().material = nodeData.meshMaterial;
						}
					}
					path.line.material = nodeData.lineMaterial;
				}
			}
		}
	}

	public enum DrawMode {
		Sprite,
		Object
	}
}