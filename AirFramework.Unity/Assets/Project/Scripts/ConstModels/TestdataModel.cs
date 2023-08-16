using System;
using System.Collections;
using System.Collections.Generic;
  
namespace AirFramework.ConstModel
{

    public class TestData
    {
        [AirFramework.PrimaryKey]
        public System.Int32 id = default;
        public System.Int32 value = default;
        public UnityEngine.Vector2 position = default;
        public UnityEngine.Vector3 position2 = default;
        public System.Type bindType = default;
        public System.Func<float,float> anal = default;
        public System.Boolean sign = default;
        public System.Int32[] arr = default;

    }

    public class TestDataModel : AirFramework.IModel
    {
        public System.Collections.Generic.List<TestData> Data = new System.Collections.Generic.List<TestData>()
        {
new TestData(){id = 3,value = 336,position = new UnityEngine.Vector2(3.2F,6.4F),position2 = new UnityEngine.Vector3(3.2F,6.4F,9.9F),bindType = typeof(Buff1)/*If the target type cannot be found, it may be due to the current class generated not being able to access the specified type*/,anal = (x)=>4*x,sign = false,arr = new System.Int32[3]{3,4,5}}
,new TestData(){id = 4,value = 337,position = new UnityEngine.Vector2(4.0F,7.7F),position2 = new UnityEngine.Vector3(4.0F,7.7F,8.7F),bindType = typeof(Buff2)/*If the target type cannot be found, it may be due to the current class generated not being able to access the specified type*/,anal = (x)=>5*x,sign = true,arr = new System.Int32[3]{6,7,8}}

        };

        public System.Collections.Generic.Dictionary<System.Int32,TestData> dataMap = null;
        public System.Collections.Generic.Dictionary<System.Int32,TestData> DataMap 
        {
            get
            {
                if(dataMap==null) dataMap = new System.Collections.Generic.Dictionary<System.Int32,TestData>();
                foreach(var item in Data)
                {
                    DataMap.Add(item.id,item);
                }
                return dataMap;
            }

        }

        public TestDataModel(){}
    }
}


