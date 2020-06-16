using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinhasProximas : MonoBehaviour
{
    public LineRenderer linhaPertoBike;
    public LineRenderer linhaPertoCharge;
    public static bool habLinhas = true;

    public void habilitaLinhas(bool queroLinhas){
        habLinhas = queroLinhas;
        atLinhas();
    }

    void atLinhas(){

        if(HideShow.BikeEna && habLinhas){
            linhaPertoBike.GetComponent<Renderer>().enabled = true;
        }else{
            linhaPertoBike.GetComponent<Renderer>().enabled = false;
        }

        if(HideShow.ChargeEna && habLinhas){
            linhaPertoCharge.GetComponent<Renderer>().enabled = true;
        }else{
            linhaPertoCharge.GetComponent<Renderer>().enabled = false;
        }

    }

}
