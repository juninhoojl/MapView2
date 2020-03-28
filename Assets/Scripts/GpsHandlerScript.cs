using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GpsHandlerScript : MonoBehaviour
{
    IEnumerator Start(){

        #if UNITY_EDITOR
        //test en local
        GameObject objectm = GameObject.Find("MapHandler");
        objectm.SendMessage("DownloadMap");

        #endif
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield break;
        // Start service before querying location
        Input.location.Start();

        // Wait until service initializes
        int maxWait = 10;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in X seconds
        if (maxWait < 1) {
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed) {
            print("Unable to determine device location");
            yield break;
        }
        else {
            GameObject objectM = GameObject.Find("MapHandler");
            objectM.SendMessage("DownloadMap");
            // Access granted and location value could be retrieved
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }
    }

    /*
    public void Update()
    {
        gpsDebug.GetComponent<Text>().text = Input.location.lastData.latitude.ToString() + ", " + Input.location.lastData.longitude.ToString();
    }
    */
}