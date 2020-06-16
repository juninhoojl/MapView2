using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomManager : MonoBehaviour
{
    // Start is called before the first frame update

    private MapHandlerScript mapH;

    // Update is called once per frame
    public void zoomOut()
    {
        mapH = GameObject.Find("MapHandler").GetComponent<MapHandlerScript>();
        mapH.ZoomOut();
    }
}
