using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;
public class Notification : MonoBehaviour
{

    private string conteudo = "";
    public static string[] tNasc = new string[] {"Nascer do sol","Amanecer","Sortida del sol","Sunrise"};
    public static string[] tPor = new string[] {"Pôr do sol","Puesta de sol","Capvespre","Sunset"};
    public static string[] tDur = new string[] {"Duração do dia","Dia largo","Durada del dia","Day length"};
    public static string[] tInfo = new string[] {"Informações","Informaciones","Informació","Informations"};
    private string titulo = tInfo[SetIdioma.lingua];

    void Start(){

        #if UNITY_IOS 
            UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
        #endif

    }
    
    void OnApplicationPause(bool isPause){

        // Vai requisitar o Json
        #if UNITY_IOS 
            StartCoroutine("GetTempoInfo");
        #endif

    }

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

            conteudo=tNasc[SetIdioma.lingua]+": "+sunrise+"\n"+tPor[SetIdioma.lingua]+": "+sunset+"\n"+tDur[SetIdioma.lingua]+": "+durdia;

            UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
            UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
            DateTime dateToNotify = DateTime.Now.AddSeconds(300); // A cada 5 minutos
            UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
            notif.fireDate = dateToNotify;
            notif.alertTitle = titulo;
            notif.alertBody = conteudo;
            notif.repeatInterval = UnityEngine.iOS.CalendarUnit.Minute;
            UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);

		}

	}

}
