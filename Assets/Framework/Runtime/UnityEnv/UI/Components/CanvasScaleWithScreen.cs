using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AirFramework
{
    public class CanvasScaleWithScreen : CanvasScaler
    {


        
        protected override void Awake()
        {
            base.Awake();

           
            if (!base.m_PresetInfoIsWorld) return;
            float x = Screen.width;
            float y = Screen.height;


            Vector2 current = GetComponent<RectTransform>().sizeDelta;



        }
    }
}
