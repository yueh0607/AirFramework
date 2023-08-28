using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AirFramework
{
    public abstract class MutiLanBase :MonoBehaviour,ILanItem
    {
        [SerializeField]
        protected string Key= string.Empty;


        public abstract void Switch(string language);
    }
}
