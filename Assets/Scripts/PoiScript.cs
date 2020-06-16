using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;


public class PoiScript: MonoBehaviour
{
    [SerializeField]
    public double latObject;
    [SerializeField]
    public double lonObject;
    [SerializeField]
    public string textDescription;

    public int pkId;
    
    //public TextMeshProUGUI textDesc;

    public Texture bikeSelected;
    public Texture bikeNormal;

    // public LineRenderer linhaCharge;

    GameObject description;

    // Start is called before the first frame update
    void Start()
    {
        description = GameObject.Find("textDesc");
    }

    public void MapLocation()
    {
        int x = MapHandlerScript.centerTileX;
        int y = MapHandlerScript.centerTileY;
        int zoom = MapHandlerScript.zoom;

        double a = DrawCubeX(lonObject, TileToWorldPos(x, y, zoom).X, TileToWorldPos(x + 1, y, zoom).X);
        double b = DrawCubeY(latObject, TileToWorldPos(x, y + 1, zoom).Y, TileToWorldPos(x, y, zoom).Y);

        

    if (SceneManager.GetActiveScene().name.Contains("Map")){
        this.transform.position = new Vector3((float)a - 0.5f,(float)b-0.5f, -0.02f);

    }else{

        this.transform.position = new Vector3((float)a - 0.5f, 0.0f, (float)b-0.5f);

    }


    }
    public struct Point
    {
        public double X;
        public double Y;
    }


    // p.X -> longitud
    // p.Y -> latitud
    // left upper corner
    public Point TileToWorldPos(double tile_x, double tile_y, int zoom)
    {
        Point p = new Point();
        double n = System.Math.PI - ((2.0 * System.Math.PI * tile_y) / System.Math.Pow(2.0, zoom));

        p.X = ((tile_x / System.Math.Pow(2.0, zoom) * 360.0) - 180.0);
        p.Y = (180.0 / System.Math.PI * System.Math.Atan(System.Math.Sinh(n)));

        return p;
    }

    public double DrawCubeY(double targetLat, double minLat, double maxLat)
    {
        double pixelY = ((targetLat - minLat) / (maxLat - minLat));
        return pixelY;
    }

    public double DrawCubeX(double targetLong, double minLong, double maxLong)
    {
        double pixelX = ((targetLong - minLong) / (maxLong - minLong));
        return pixelX;
    }

    public void SetUnpressedColor()
    {

        this.GetComponent<MeshRenderer>().material.mainTexture = bikeNormal;
        //this.GetComponent<MeshRenderer>().material.color = Color.red;
    }
    public void OnMouseDown()
    {

        if(!TapManager.mapPause){// Se nao estiver pausado

            GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiChage");
            GameObject[] poiListBike = GameObject.FindGameObjectsWithTag("poiBike");

            foreach (GameObject o in poiList)
            {
                o.SendMessage("SetUnpressedColor");
            }

            foreach (GameObject o in poiListBike)
            {
                o.SendMessage("SetUnpressedColor");
            }

            this.GetComponent<MeshRenderer>().material.mainTexture = bikeSelected;
            //this.GetComponent<MeshRenderer>().material.color = Color.blue;
            //textDesc.GetComponent<TextMeshProUGUI>().text = textDescription;
            description.GetComponent<TextMeshProUGUI>().text = textDescription;
            //posLinha();
        }

    }

/*
    void posLinha(){
        
        GameObject linhades = GameObject.Find("LINHA");
        linhaCharge = linhades.GetComponent<LineRenderer>();

        float xu = this.transform.position.x;
        float yu = this.transform.position.y;
        linhaCharge.positionCount = 2;
        linhaCharge.SetPosition(1,new Vector3(xu,yu,-0.01f));
    }
*/
}
