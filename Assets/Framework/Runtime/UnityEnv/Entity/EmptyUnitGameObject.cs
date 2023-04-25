using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework.Assets.Framework.Runtime.UnityEnv.Entity
{
    public class EmptyUnitGameObject : UnitGameObject<EmptyUnitGameObject>
    {
        protected override void OnAllocateObject()
        {
            
        }

        protected override void OnCreateObject()
        {
            //此处不需要调用base，因为就是为了覆盖掉父类行为，改成空物体
   
            UnitGameObject.Instantiate<UnitGameObject<EmptyUnitGameObject>>(new GameObject("Empty_GameObject"), this);
        }

        protected override void OnRecycleObject()
        {
           
        }
    }
}
