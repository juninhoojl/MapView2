using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SetIdioma : MonoBehaviour
{
    // Start is called before the first frame update

    public TextMeshProUGUI bOpcoes, bOpcoes2, lBikes, lCharge, lNotif, lCentmap, pForaArea, lLinhasProx, lNas, lPor, lDia, bInfo, bInfo2;
    string[] bOptions = new string[] {"Opções", "Opciones", "Opcions", "Options"};
    // Tanto para options quanto para o outro
    string[] tBikes = new string[] {"Sistema de bicicletas públicas","Sistema de bicicletas compartidas","Servei de bicicletes públiques","Bicycle-sharing system"};
    string[] tCharges = new string[] {"Estação de carga","Estación de carga","Estació de càrrega","Charging station"};
    string[] tNotif = new string[] {"Receber notificações","Recibir notificaciones","Rebre notificacions","Receive notifications"};
    string[] tCentmap = new string[] {"Centralizar no mapa","Centrar en el mapa","Centre al mapa","Center on map"};
    string[] tForaArea = new string[] {"Fora de area","Fuera del área","Fora d'àrea","Out of area"};
    string[] tLinhasProx = new string[] {"Encontrar os mais próximos","Encuentra los más cercanos","Trobar mais propers","Find nearest"};
    string[] tNasc = new string[] {"Nascer do sol","Amanecer","Sortida del sol","Sunrise"};
    string[] tPor = new string[] {"Pôr do sol","Puesta de sol","Capvespre","Sunset"};
    string[] tDur = new string[] {"Duração do dia","Dia largo","Durada del dia","Day length"};
    string[] tInfo = new string[] {"Informações","Informaciones","Informació","Informations"};
  
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

    public void alterIdioma(){
        bOpcoes.GetComponent<TextMeshProUGUI>().text = bOptions[lingua];
        bOpcoes2.GetComponent<TextMeshProUGUI>().text = bOptions[lingua];
        lBikes.GetComponent<TextMeshProUGUI>().text = tBikes[lingua];
        lCharge.GetComponent<TextMeshProUGUI>().text = tCharges[lingua];
        lNotif.GetComponent<TextMeshProUGUI>().text = tNotif[lingua];
        lCentmap.GetComponent<TextMeshProUGUI>().text = tCentmap[lingua];
        pForaArea.GetComponent<TextMeshProUGUI>().text = tForaArea[lingua];
        lLinhasProx.GetComponent<TextMeshProUGUI>().text = tLinhasProx[lingua];
        lNas.GetComponent<TextMeshProUGUI>().text = tNasc[lingua];
        lPor.GetComponent<TextMeshProUGUI>().text = tPor[lingua];
        lDia.GetComponent<TextMeshProUGUI>().text = tDur[lingua];

        bInfo.GetComponent<TextMeshProUGUI>().text = tInfo[lingua];
        bInfo2.GetComponent<TextMeshProUGUI>().text = tInfo[lingua];


    }

    public void SelectIdioma(int idioma){
        lingua = idioma;
        alterIdioma();
    }
    
    // Adicionar os botoes especificos tambem

}
