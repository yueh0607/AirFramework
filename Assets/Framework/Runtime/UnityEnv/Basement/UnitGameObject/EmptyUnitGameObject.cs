using UnityEngine;

namespace AirFramework
{
    public class EmptyUnitGameObject : UnitGameObject<EmptyUnitGameObject>
    {

        public EmptyUnitGameObject()
        {
            LoadSync(new GameObject("EmptyUnitGameObject"));
        }


        public override void OnLoad()
        {

        }

        public override void OnUnload()
        {

        }


    }
}
