﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapManager : MonoBehaviour
{
    [SerializeField]
    Camera selectedCamera;

    Vector2 curDist;
    Vector2 prevDist;
    float touchDelta = 0.0f;
    float speedTouch0 = 0.0f;
    float speedTouch1 = 0.0f;

    public int speed = 4;
    
    public float MINSCALE = 2.0F;
    public float MAXSCALE = 5.0F;
    public float minPinchSpeed = 5.0F;
    public float varianceInDistances = 5.0F;
    //



    //https://kylewbanks.com/blog/unity3d-panning-and-pinch-to-zoom-camera-with-touch-and-mouse-input

    // Update is called once per frame
    void Update()
    {

        if (Input.touchCount == 2 && Input.GetTouch(0).phase == TouchPhase.Moved && Input.GetTouch(1).phase == TouchPhase.Moved)
        {
            Debug.Log("Touch screen");
            curDist = Input.GetTouch(0).position - Input.GetTouch(1).position; //current distance between finger touches
            prevDist = ((Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition) - (Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition)); //difference in previous locations using delta positions
            touchDelta = curDist.magnitude - prevDist.magnitude;
            speedTouch0 = Input.GetTouch(0).deltaPosition.magnitude / Input.GetTouch(0).deltaTime;
            speedTouch1 = Input.GetTouch(1).deltaPosition.magnitude / Input.GetTouch(1).deltaTime;


            if ((touchDelta + varianceInDistances <= 1) && (speedTouch0 > minPinchSpeed) && (speedTouch1 > minPinchSpeed))
            {

                selectedCamera.fieldOfView = Mathf.Clamp(selectedCamera.fieldOfView + (1 * speed), 15, 70);
            }

            if ((touchDelta + varianceInDistances > 1) && (speedTouch0 > minPinchSpeed) && (speedTouch1 > minPinchSpeed))
            {

                selectedCamera.fieldOfView = Mathf.Clamp(selectedCamera.fieldOfView - (1 * speed), 15, 70);
            }

        }


        if (Input.touchCount > 1 && Input.GetTouch(0).phase == TouchPhase.Began)
        {

            Debug.Log("Hit");
            RaycastHit hit;
            Vector3 vec = new Vector3(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y, 0f);
            Ray ray = Camera.main.ScreenPointToRay(vec);
            if (Physics.Raycast(ray, out hit, Mathf.Infinity))
            {
                string nameHit = hit.transform.name.ToString();
                GameObject o =GameObject.Find(nameHit);
                
                selectedCamera.transform.position = new Vector3(o.transform.position.x, o.transform.position.y, -2);


            }
        }
    }            
}