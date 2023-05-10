using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace AirFramework
{
    public class UIEventSystem : UnitGameObject<UIEventSystem>
    {

        public EventSystem eventSystem;

        public override void OnLoad()
        {
            eventSystem= GetComponent<EventSystem>();
        }

        public override void OnUnload()
        {
            eventSystem = null;
        }
    }
}
