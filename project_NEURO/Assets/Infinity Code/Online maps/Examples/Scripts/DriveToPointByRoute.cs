/*         INFINITY CODE         */
/*   https://infinity-code.com   */

using System;
using System.Collections.Generic;
using UnityEngine;



namespace InfinityCode.OnlineMapsDemos
{
    [AddComponentMenu("Infinity Code/Online Maps/Demos/DriveToPointByRoute")]

    public class DriveToPointByRoute : MonoBehaviour
    {
        public GameObject prefab;
        public float markerScale = 5f;

        public GameObject targetPrefab;
        public float targetScale = 5f;

        public float speed;
        public float rotation = 0;

        public double[] posLat;
        public double[] posLng;

        public Vector2[] targets;

        private OnlineMaps map;
        private OnlineMapsTileSetControl control;
        private OnlineMapsMarker3D marker;
        private OnlineMapsVector2d[] points;
        private OnlineMapsDrawingLine route;

        public OnlineMapsGoogleDirections request;
        public OnlineMapsGoogleDirectionsResult result;
        public int listpos;


        private void Start()
        {
            listpos = 0;
            if (!OnlineMapsKeyManager.hasGoogleMaps)
            {
                Debug.LogWarning("Please enter Map / Key Manager / Google Maps");
                return;
            }


            map = OnlineMaps.instance;
            control = OnlineMapsTileSetControl.instance;

            //control.OnMapClick += OnMapClick;
            for (int i = 0; i <= targets.Length-1; i++)
            {
                marker = OnlineMapsMarker3DManager.CreateItem(targets[i].y, targets[i].x, prefab);
                marker.scale = markerScale;
                marker.rotationY = rotation;
            }

            posLat = new double[targets.Length];
            posLng = new double[targets.Length];

            for (int i = 0; i <= targets.Length - 1; i++)
            {
                map.projection.CoordinatesToTile(targets[i].x, targets[i].y, map.zoom, out posLat[i], out posLng[i]);

                if (i < targets.Length - 1)
                {
                    listpos = i;
                }
            }

            string way = "enc:29.8325101,-95.7064711";
            Debug.Log(way is string);
            request = new OnlineMapsGoogleDirections(OnlineMapsKeyManager.GoogleMaps(), "29.8403755,-95.7198107", "29.797088,-95.6788216");
            request.requestParams.waypoints += way;
            request.OnComplete += OnRequestComplete;
            request.Send();
            //rotation = (float) OnlineMapsUtils.Angle2D(tx1, ty1, tx2, ty2) - 90;
        }

        public void OnRequestComplete(string response)
        {
             result = OnlineMapsGoogleDirections.GetResult(response);
            if (result == null || result.routes.Length == 0)
            {
                Debug.Log("No result");
                return;
            }

            points = result.routes[0].overview_polylineD;
            if (route == null)
            {
                route = new OnlineMapsDrawingLine(points, Color.green, 3);
                OnlineMapsDrawingElementManager.AddItem(route);
            }
            else route.points = points;
        }

        private void Update()
        {

        }
    }
}