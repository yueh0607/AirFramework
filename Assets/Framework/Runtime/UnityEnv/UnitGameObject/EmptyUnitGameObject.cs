using UnityEngine;

namespace AirFramework
{
    public class EmptyUnitGameObject : UnitGameObject<EmptyUnitGameObject>
    {


        public EmptyUnitGameObject InitializeEmpty()
        {
            var unit =  base.Bind<EmptyUnitGameObject>(new GameObject("EmptyGameObject"));
            OnLoad();
            return unit;
        }

        public override void OnLoad()
        {
            
        }

        public override void OnUnload()
        {
            
        }

        protected override void OnAllocateObject()
        {
            
        }

        protected override void OnRecycleObject()
        {
            
        }
    }
}
