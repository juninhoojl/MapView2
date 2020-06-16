﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SetIdioma : MonoBehaviour
{
    // Start is called before the first frame update

    public TextMeshProUGUI bOpcoes, bOpcoes2, lBikes, lCharge, lNotif;
    string[] bOptions = new string[] {"Opções", "Opciones", "Opcions", "Options"};
    // Tanto para options quanto para o outro
    string[] tBikes = new string[] {"Sistema de bicicletas públicas","Sistema de bicicletas compartidas","Servei de bicicletes públiques","Bicycle-sharing system"};
    string[] tCharges = new string[] {"Estação de carga","Estación de carga","Estació de càrrega","Charging station"};
    string[] tNotif = new string[] {"Receber notificações","Recibir notificaciones","Rebre notificacions","Receive notifications"};

    public static int lingua = 3; // Ingles padrao
    // 0 - Portugues
    // 1 - Espanol
    // 2 - Catalan
    // 3 - English
    void Start()
    {
        if(Application.systemLanguage == SystemLanguage.Portuguese){
            lingua = 0;
        }else if(Application.systemLanguage == SystemLanguage.Spanish){
            lingua = 1;
        }else if(Application.systemLanguage == SystemLanguage.Catalan){
            lingua = 2;
        }else{
            lingua = 3;
        }

        alterIdioma();

    }


    void alterIdioma(){

        bOpcoes.GetComponent<TextMeshProUGUI>().text = bOptions[lingua];
        bOpcoes2.GetComponent<TextMeshProUGUI>().text = bOptions[lingua];
        lBikes.GetComponent<TextMeshProUGUI>().text = tBikes[lingua];
        lCharge.GetComponent<TextMeshProUGUI>().text = tCharges[lingua];
        lNotif.GetComponent<TextMeshProUGUI>().text = tNotif[lingua];
        
    }

    // Adicionar os botoes especificos tambem

}
