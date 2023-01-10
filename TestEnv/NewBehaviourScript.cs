using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootFramework;
using System.Text;

namespace DevTest
{
   
        

    public class TempObj
    {
        public TempObj()
        {
            Debug.Log("AAA");
        
        }
        public static TempObj OnCreate()
        {
            return new TempObj();
        }
        public static void OnDestroy(TempObj item)
        {

        }
        public static void OnRelease(TempObj item) { }
        public static void OnAllocate(TempObj item) { }

        
    }
    public class NewBehaviourScript : MonoBehaviour
    {

        void Start()
        {
            Pool.Custom(TempObj.OnCreate, TempObj.OnDestroy, TempObj.OnRelease, TempObj.OnAllocate);

            TempObj sb = Pool.Allocate<TempObj>();
            Pool.Release(sb);
            TempObj sa = Pool.Allocate<TempObj>();
            Pool.Release(sa);
            Pool.Dispose<TempObj>();
        }


        void Update()
        {

        }
    }
}
