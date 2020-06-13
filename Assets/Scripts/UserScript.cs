using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
public class UserScript : MonoBehaviour
{
    public TextMeshProUGUI latText;

    public TextMeshProUGUI lonText;
    double latUser;
    double lonUser;

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

                lonUser = 2.122279f;  //EETAC
                latUser = 41.384616f;

                //lonUser = 2.186369f;  //Casa
                //latUser = 41.392957f;
                
            }

            double a = DrawCubeX(lonUser, TileToWorldPos(x, y, zoom).X, TileToWorldPos(x + 1, y, zoom).X);
            double b = DrawCubeY(latUser, TileToWorldPos(x, y + 1, zoom).Y, TileToWorldPos(x, y, zoom).Y);
             if (SceneManager.GetActiveScene().name.Contains("Map")){
        this.transform.position = new Vector3((float)a - 0.5f,(float)b-0.5f, 0.25f);

    }else{

this.transform.position = new Vector3((float)a - 0.5f, 0.25f, (float)b-0.5f);

    }
            Debug.Log("User Position: lon=" + lonUser + ", lat=" + latUser + "//a=" + a + ", b=" + b);
            this.transform.position = new Vector3((float)a - 0.5f, (float)b - 0.5f, 0.0f);


            latText.GetComponent<TextMeshProUGUI>().text =latUser.ToString("F8");
            lonText.GetComponent<TextMeshProUGUI>().text =lonUser.ToString("F8");

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
}
