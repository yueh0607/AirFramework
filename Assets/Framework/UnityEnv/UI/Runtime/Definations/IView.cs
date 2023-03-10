using UnityEngine;
using System.Runtime.CompilerServices;
using UnityEngine.UI;
using UnityEngine.Events;
using System;

namespace AirFramework
{

    public interface IView
    {
        ViewModel BindingContext { get; set; }

    }

    
}
