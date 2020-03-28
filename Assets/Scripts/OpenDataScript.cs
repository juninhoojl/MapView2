﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;

public class OpenDataScript : MonoBehaviour
{
[SerializeField]
    GameObject prefabPoint;
    // Start is called before the first frame update
    void Start()
    {
        
    
        StartCoroutine("OpenDataBcn");

    }

    IEnumerator OpenDataBcn()
    {

        WWW www = new WWW("https://api.bsmsa.eu/ext/api/bsm/chargepoints/v1/chargepoints");
        yield return www;

        JObject obj = JObject.Parse(www.text);
        JArray chargePoints = (JArray)obj["result"]["chargepoint"];

        Debug.Log("Number chargePoints: " + chargePoints.Count);
        List<string> nameList = new List<string>();


        for (var i = 0; i < chargePoints.Count; i++)
        {
            JObject chargePoint = (JObject)chargePoints.GetItem(i);
            float lat = (float)chargePoint["Lat"];
            float lon = (float)chargePoint["Lng"];
            string nameP = (string)chargePoint["ParkingName"];
            Debug.Log("Charge Point info lat, lon: " + lat.ToString()+","+lon.ToString());

            if(!nameList.Contains(nameP)){
                nameList.Add(nameP);
                GameObject o = Instantiate(prefabPoint);
                o.GetComponent<PoiScript>().latObject = lat;
                o.GetComponent<PoiScript>().lonObject = lon;
                o.GetComponent<PoiScript>().textDescription = nameP;
                o.SendMessage("MapLocation");

            }
       

        }
        

    }
   
}
