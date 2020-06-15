using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
public class UserScript : MonoBehaviour
{
    public TextMeshProUGUI latlonText;

    public GameObject painelForaArea;

    double latUser;
    double lonUser;

    public LineRenderer linhaCharge;


    public LineRenderer linhaPertoBike;

    public void MapLocation()
    {
        StartCoroutine(Relocation());
    }

    IEnumerator Relocation()
    {
        for (; ; )
        {
            int x = MapHandlerScript.centerTileX;
            int y = MapHandlerScript.centerTileY;
            int zoom = MapHandlerScript.zoom;

            if (Input.location.status == LocationServiceStatus.Running)
            {
                lonUser = Input.location.lastData.longitude;
                latUser = Input.location.lastData.latitude;

            }
            else
            {
                // Teste fora de area
                // lonUser = 2.122638f;  //EETAC
                //  latUser = 41.0f;


                

                lonUser = 2.122638f;  //Barclona
                latUser = 41.381580f;

                //lonUser = 2.186369f;  //Casa
                //latUser = 41.392957f;
                
            }

            // Confere se esta nos intervalos de operacao

            if(latUser > 41.471350 || latUser < 41.317801 || lonUser >2.234448 || lonUser < 2.058771){

                // Fora de area
                painelForaArea.SetActive(true);

            }else{

                painelForaArea.SetActive(false);
                    
                double a = DrawCubeX(lonUser, TileToWorldPos(x, y, zoom).X, TileToWorldPos(x + 1, y, zoom).X);
                double b = DrawCubeY(latUser, TileToWorldPos(x, y + 1, zoom).Y, TileToWorldPos(x, y, zoom).Y);
                
                if (SceneManager.GetActiveScene().name.Contains("Map")){
                    this.transform.position = new Vector3((float)a - 0.5f,(float)b-0.5f, 0.25f);
                }else{
                    this.transform.position = new Vector3((float)a - 0.5f, 0.25f, (float)b-0.5f);
                }

                Debug.Log("User Position: lon=" + lonUser + ", lat=" + latUser + "//a=" + a + ", b=" + b);
                this.transform.position = new Vector3((float)a - 0.5f, (float)b - 0.5f, 0.0f);
                
                posLinha();
                distanciaProx();
            }

            latlonText.GetComponent<TextMeshProUGUI>().text =latUser.ToString("F6")+","+lonUser.ToString("F6");
            
            yield return new WaitForSeconds(3);
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

    void posLinha(){

        // Somente lado do usuario
        float xu = this.transform.position.x;
        float yu = this.transform.position.y;
        linhaCharge.positionCount = 2;
        linhaCharge.SetPosition(0,new Vector3(xu,yu,-0.01f));
        linhaPertoBike.positionCount=2;
        linhaPertoBike.SetPosition(0,new Vector3(xu,yu,-0.01f));
        // Posicao do user na outra linha tb

    }


    public float calcDist(GameObject ponto){

        Vector2 vecponto = ponto.transform.position;
        Vector2 vecuser = this.transform.position;

        return ((vecponto - vecuser).sqrMagnitude);
    }

    void distanciaProx(){

        GameObject[] poiListBike = GameObject.FindGameObjectsWithTag("poiBike");
        bool primeiro = true;
        GameObject maisPertoBike = new GameObject();
        foreach(GameObject o in poiListBike)
        {
            if(primeiro){
                maisPertoBike = o;
                primeiro = false;
            }else{
                if(calcDist(o)<calcDist(maisPertoBike)){
                    maisPertoBike = o;
                }
            }

            Debug.Log("Distancia = "+calcDist(o));

            // Escolhe o que tem menor distancia e salva obj
        }

        Vector2 vecpontoBike = maisPertoBike.transform.position;
        float xbikep = vecpontoBike.x;
        float ybikep = vecpontoBike.y;
        linhaPertoBike.SetPosition(1,new Vector3(xbikep,ybikep,-0.01f));

    }

}
