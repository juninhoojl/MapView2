﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;

public class MapHandlerScript : MonoBehaviour{

    [SerializeField]
    GameObject centroA;
    [SerializeField]
    GameObject centroB;
    [SerializeField]
    GameObject centroC;


    [SerializeField]
    GameObject direitaA;
    [SerializeField]
    GameObject direitaB;
    [SerializeField]
    GameObject direitaC;


    [SerializeField]
    GameObject esquerdaA;
    [SerializeField]
    GameObject esquerdaB;
    [SerializeField]
    GameObject esquerdaC;


    public static int centerTileX, centerTileY;
    public static int zoom;

    public void DownloadMap() {
        zoom = 13;
        if (Input.location.status == LocationServiceStatus.Running){
            WorldToTilePos(Input.location.lastData.longitude, Input.location.lastData.latitude, zoom);
        }else{
            WorldToTilePos(2.122279f, 41.384616f, zoom);    // barcelona
            //EETAC
            //WorldToTilePos(2.186369f, 41.392957f, zoom);  //Casa
        }

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poi");
        foreach (GameObject o in poiList){
            o.SendMessage("MapLocation");
        }

        GameObject objectU = GameObject.Find("User");
        objectU.SendMessage("MapLocation");

        GameObject objectOpenData = GameObject.Find("Opendata");
        objectOpenData.SendMessage("OpenDataBcn");

        StartCoroutine(LoadTile(centerTileX, centerTileY-1, centroA));
        StartCoroutine(LoadTile(centerTileX+1, centerTileY-1, direitaA));
        StartCoroutine(LoadTile(centerTileX-1, centerTileY-1, esquerdaA));

        StartCoroutine(LoadTile(centerTileX, centerTileY, centroB));
        StartCoroutine(LoadTile(centerTileX+1, centerTileY, direitaB));
        StartCoroutine(LoadTile(centerTileX-1, centerTileY, esquerdaB));

        StartCoroutine(LoadTile(centerTileX, centerTileY+1, centroC));
        StartCoroutine(LoadTile(centerTileX+1, centerTileY+1, direitaC));
        StartCoroutine(LoadTile(centerTileX-1, centerTileY+1, esquerdaC));

    }
    //public void DownLoadCenterMapTileGps()
    //{
    //    WorldToTilePos(41.275250f, 1.987500f, zoom);
    //    LoadTile(centerTileX, centerTileY, centerTileMap);
    //}

    public void WorldToTilePos(float lon, float lat, int zoom){
        double tileX, tileY;
        tileX = (double)((lon + 180.0f) / 360.0f * (1 << zoom));
        tileY = (double)((1.0f - Mathf.Log(Mathf.Tan((float)lat * Mathf.PI / 180.0f) + 1.0f / Mathf.Cos((float)lat * Mathf.PI / 180.0f)) / Mathf.PI) / 2.0f * (1 << zoom));
        centerTileX = Mathf.FloorToInt((float)tileX);
        centerTileY = Mathf.FloorToInt((float)tileY);
        //Debug.Log("X:" + tileX + "Y" + tileY);
    }

    IEnumerator LoadTile(int x, int y, GameObject quadTile){
       // Debug.Log("loadTile");
        //string uri = "https://a.tile.openstreetmap.org/" + zoom + "/" + x + "/" + y + ".png";
        
        //CustomCertificateHandler certHandler = new CustomCertificateHandler();
        UnityWebRequest www = UnityWebRequestTexture.GetTexture("https://a.tile.openstreetmap.org/"+zoom+"/"+x+"/"+y+".png");
        //www.certificateHandler = certHandler;
        yield return www.SendWebRequest();

       // Debug.Log("server");
        if (www.isNetworkError || www.isHttpError){
            Debug.Log(www.error);
        }else{
           // Debug.Log("Received");
            quadTile.GetComponent<MeshRenderer>().material.mainTexture = DownloadHandlerTexture.GetContent(www);
        } 
    }
}
