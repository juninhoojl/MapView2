using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideShow : MonoBehaviour
{   

    public LineRenderer linhaPertoBike;
    public LineRenderer linhaPertoCharge;

    public void ShowObjects(bool valor){

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiBike");

        foreach(GameObject f in poiList){
             Debug.Log("objeto");

            if(!valor){
                 //f.SetActive(false);
                f.GetComponent<Renderer>().enabled = false;
                linhaPertoBike.GetComponent<Renderer>().enabled = false;
            }else{
               //  f.SetActive(true);
                f.GetComponent<Renderer>().enabled = true;
                linhaPertoBike.GetComponent<Renderer>().enabled = true;
            }
            
        }

    }

        public void ShowObjectsBike(bool valor){

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiChage");

        foreach(GameObject f in poiList){
             Debug.Log("objeto");

            if(!valor){
                 //f.SetActive(false);
                f.GetComponent<Renderer>().enabled = false;
                linhaPertoCharge.GetComponent<Renderer>().enabled = false;
            }else{
               //  f.SetActive(true);
                f.GetComponent<Renderer>().enabled = true;
                linhaPertoCharge.GetComponent<Renderer>().enabled = true;
            }
            
        }

    }

}
