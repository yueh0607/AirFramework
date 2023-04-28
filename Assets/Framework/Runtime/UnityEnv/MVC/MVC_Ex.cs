using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public static class MVC_Ex 
    {
        public static AsyncTask Hide<T>(this Controller controller) where T : Controller
        {
            return Framework.MVC.Hide<T>(controller);
        }

    }
}
