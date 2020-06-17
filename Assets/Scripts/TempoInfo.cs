using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Newtonsoft.Json.Linq;
public class TempoInfo : MonoBehaviour
{
    public TextMeshProUGUI vDia, vPor, vNas;

    public void GetInfo(){
		StartCoroutine("GetTempoInfo");
	}

    public void ClockTimeInfo(){
        // Usar aqui para cria notificacao no mesmo horario
		int hourNow = System.DateTime.Now.Hour;
		int minutesNow = System.DateTime.Now.Minute;
		
		//dateTime.GetComponent<Text>().text = hourNow+"--"+minutesNow;

	}

    void Falhou(){

        vPor.GetComponent<TextMeshProUGUI>().text = "--";
        vNas.GetComponent<TextMeshProUGUI>().text = "--";
        vDia.GetComponent<TextMeshProUGUI>().text = "--";

    }

    // Criar funcao caso nao retorne ok ou caso nao consiga
    IEnumerator GetTempoInfo(){

        // Criar url
        string requisicao = "https://api.sunrise-sunset.org/json?lat="+UserScript.latUser+"&lng="+UserScript.lonUser+"&date=today";
		WWW www = new WWW(requisicao);
		yield return www;

        JObject obj = JObject.Parse(www.text);

        string status = (string)obj["status"];

		if(string.Compare(status, "OK") == 0){
  
            string sunset = (string)obj["results"]["sunset"];
            string sunrise = (string)obj["results"]["sunrise"];
            string durdia = (string)obj["results"]["day_length"];

            vPor.GetComponent<TextMeshProUGUI>().text = sunset;
            vNas.GetComponent<TextMeshProUGUI>().text = sunrise;
            vDia.GetComponent<TextMeshProUGUI>().text = durdia;

		}else{
			// Falhou
            Falhou();
		}

	}

}
