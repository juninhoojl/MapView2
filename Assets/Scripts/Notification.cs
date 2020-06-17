using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Notification : MonoBehaviour
{

    private string titulo = "Notificacao";
    private string conteudo = "Notificacao"; 

    void Start(){

        #if UNITY_IOS 
            UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
        #endif
    }

    void OnApplicationPause(bool isPause){

        #if UNITY_IOS 
            UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
            UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();

            if(isPause){
                DateTime dateToNotify = DateTime.Now.AddSeconds(30);
                UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
                notif.fireDate = dateToNotify;
                notif.alertTitle = titulo;
                notif.alertBody = conteudo;
                notif.repeatInterval = UnityEngine.iOS.CalendarUnit.Minute;
                UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
            }
            
        #endif

    }

}
