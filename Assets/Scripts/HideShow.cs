using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideShow : MonoBehaviour
{   

    public LineRenderer linhaPertoBike;
    public LineRenderer linhaPertoCharge;

    public static bool BikeEna = true;
    public static bool ChargeEna = true;

    public void ShowObjects(bool valor){

        ChargeEna = valor;

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiBike");

        if(!valor){
            linhaPertoBike.GetComponent<Renderer>().enabled = false;
        }else{

            if(LinhasProximas.habLinhas){ // se for para mostrar
                linhaPertoBike.GetComponent<Renderer>().enabled = true;
            }else{
                linhaPertoBike.GetComponent<Renderer>().enabled = false;
            }
        
        }

        foreach(GameObject f in poiList){
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

        BikeEna = valor;

        GameObject[] poiList = GameObject.FindGameObjectsWithTag("poiChage");

        if(!valor){
            linhaPertoCharge.GetComponent<Renderer>().enabled = false;
        }else{

            if(LinhasProximas.habLinhas){ // se for para mostrar
                linhaPertoCharge.GetComponent<Renderer>().enabled = true;
            }else{
                linhaPertoCharge.GetComponent<Renderer>().enabled = false;
            }

        }

        foreach(GameObject f in poiList){

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
