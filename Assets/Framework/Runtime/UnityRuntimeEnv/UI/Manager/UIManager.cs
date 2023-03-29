using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{

    public class UIManager : GlobalManager
    {
        public override string Name => "UIManager";
        private Canvas canvas = null;
        public bool Initialized => canvas != null;



        protected override void OnDispose()
        {

        }

        private Dictionary<string, GameObject> mapper = new();


        private Stack<GameObject> panel_stack = new();

        public ModelManager Models { get; protected set; } = new ModelManager();


        private void EnStack<T>(GameObject panel)
        {
            if (panel.transform.IsChildOf(canvas.transform))
            {

            }
        }

        public void Open<T>() where T : Controller
        {
            string path = typeof(T).Name;

        }
        public void Close<T>() where T : Controller
        {

        }




    }
}
