using UnityEngine;

namespace AirFramework
{
    public class UICamera : UnitGameObject<UICamera>
    {

        public Camera Camera { get; private set; } = null;

        public override void OnLoad()
        {
            Camera = GetComponent<Camera>();
        }

        public override void OnUnload()
        {
            Camera = null;
        }
    }
}
