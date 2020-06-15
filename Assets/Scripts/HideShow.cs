using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideShow : MonoBehaviour
{
    public void ShowObjects(bool valor){

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiBike");

        foreach(GameObject f in poiList){
             Debug.Log("objeto");

            if(!valor){
                 //f.SetActive(false);
                f.GetComponent<Renderer>().enabled = false;
            }else{
               //  f.SetActive(true);
                f.GetComponent<Renderer>().enabled = true;
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
            }else{
               //  f.SetActive(true);
                f.GetComponent<Renderer>().enabled = true;
            }
            
        }

    }

}
