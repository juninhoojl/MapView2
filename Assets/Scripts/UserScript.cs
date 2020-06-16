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

    private MapHandlerScript mapH;

    public static double lonUser = 2.122638f;  //Barclona
    public static double latUser = 41.381580f;

    // Uma coisa por vez

    // public LineRenderer linhaCharge;

    //public int ultimoAt = 2;
    public LineRenderer linhaPertoBike;
    public LineRenderer linhaPertoCharge;
    public void MapLocation()
    {
        StartCoroutine(Relocation());
    }

    IEnumerator Relocation()
    {

        while(true)
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
                //lonUser = 2.122638f;  //Barclona
               // latUser = 41.381580f;
               // latUser-=0.0008;
               // lonUser+=0.0008;
                
                //lonUser = 2.186369f;  //Casa
                //latUser = 41.392957f;
                
            }

            // Confere se esta nos intervalos de operacao

            if(latUser > 41.471350 || latUser < 41.317801 || lonUser >2.234448 || lonUser < 2.058771){

                // Fora de area
                painelForaArea.SetActive(true);

            }else{


                //mapH = GameObject.Find("MapHandler").GetComponent<MapHandlerScript>();
                //mapH.DownloadMap();

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
                
                // Para nao ficar muito pesado (as chances de mudar drasticamente sao minimas)
                //if(ultimoAt == 2){
                   // ultimoAt = 1;
                    distanciaProxBike();
                    
              //  }else{
                 //   ultimoAt = 2;
                    distanciaProxCharge();
               // }
                
            }

            latlonText.GetComponent<TextMeshProUGUI>().text =latUser.ToString("F6")+","+lonUser.ToString("F6");
            
            yield return new WaitForSeconds(2);
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
        //linhaCharge.positionCount = 2;
        //linhaCharge.SetPosition(0,new Vector3(xu,yu,-0.01f));
        linhaPertoBike.positionCount=2;
        linhaPertoBike.SetPosition(0,new Vector3(xu,yu,-0.01f));
        linhaPertoCharge.positionCount=2;
        linhaPertoCharge.SetPosition(0,new Vector3(xu,yu,-0.01f));
        // Posicao do user na outra linha tb

    }


    public float calcDist(GameObject ponto){

        Vector2 vecponto = ponto.transform.position;
        Vector2 vecuser = this.transform.position;

        return ((vecponto - vecuser).sqrMagnitude);
    }

    void distanciaProxBike(){

        // A ideia da notificacao eh controlar se a distancia eh menor que o valor
        // do slider envia senao nao

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

            //Debug.Log("Distancia = "+calcDist(o));
            // Escolhe o que tem menor distancia e salva obj
        }

        Vector2 vecpontoBike = maisPertoBike.transform.position;
        float xbikep = vecpontoBike.x;
        float ybikep = vecpontoBike.y;
        linhaPertoBike.SetPosition(1,new Vector3(xbikep,ybikep,-0.01f));

        // Fazer a mesma coisa para os pontos de carregamento de carro
        // Se possivel colocar uma etiqueta com a distancia


    }


    void distanciaProxCharge(){

        // A ideia da notificacao eh controlar se a distancia eh menor que o valor
        // do slider envia senao nao
        
        GameObject[] poiListCharge = GameObject.FindGameObjectsWithTag("poiChage");

        bool primeiro = true;
        GameObject maisPertoCharge = new GameObject();

        foreach(GameObject o in poiListCharge)
        {
            if(primeiro){
                maisPertoCharge = o;
                primeiro = false;
            }else{
                if(calcDist(o)<calcDist(maisPertoCharge)){
                    maisPertoCharge = o;
                }
            }

            // Debug.Log("Distancia = "+calcDist(o));
            // Escolhe o que tem menor distancia e salva obj
        }

        Vector2 vecpontoCharge = maisPertoCharge.transform.position;
        float xchargep = vecpontoCharge.x;
        float ychargep = vecpontoCharge.y;
        linhaPertoCharge.SetPosition(1,new Vector3(xchargep,ychargep,-0.01f));

    }

}
