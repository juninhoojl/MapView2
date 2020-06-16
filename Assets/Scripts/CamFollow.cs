using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform target;
    Vector3 tempVec3 = new Vector3();

    public static bool centralizar = false;
    //public Transform target; // Quem queremos seguir
    public float smoothSpeed = 0.125f; // Velocidade que vai seguir

    // Logo depois


    public void AltOpCentraliza(bool devoCent){
        centralizar = devoCent;
    }

    void LateUpdate(){
        
        // Vai conferir se o usuario quer que fique centralizando ou nao

        tempVec3.x = target.position.x;
        tempVec3.y = target.position.y;
        tempVec3.z = this.transform.position.z;
        this.transform.position = tempVec3;

    }
}
