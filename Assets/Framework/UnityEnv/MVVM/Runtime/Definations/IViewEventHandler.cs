using UnityEngine;
using System.Runtime.CompilerServices;
using UnityEngine.UI;
using UnityEngine.Events;
using System;

namespace AirFramework
{

    public interface IViewEventHandler
    {
    
        public void OnOpen();

        public void OnClose();

        public  void OnUnload();

        public void OnLoad();

    }

    
}
