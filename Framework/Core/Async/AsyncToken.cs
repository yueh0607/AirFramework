using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class AsyncToken: PoolableObject<AsyncToken>
    {
        
        private bool isRunning = true;
        public bool IsRunning=>isRunning;
       




        private bool alreadyCanceld = false;

     

        
        public void Continue()
        {
            if (alreadyCanceld) throw new InvalidOperationException("This Task alreay canceld.");
           // if (Task == null) throw new InvalidOperationException("AsyncToken.Task must have binded before call any method.");
            isRunning = true;
        }
        public void Yield()
        {
            if (alreadyCanceld) throw new InvalidOperationException("This Task alreay canceld.");
           // if (Task == null) throw new InvalidOperationException("AsyncToken.Task must have binded before call any method.");
            isRunning = false;
        }
        public void Cancel()
        {
            if(alreadyCanceld) throw new InvalidOperationException("This Task alreay canceld.");
           // if (Task == null) throw new InvalidOperationException("AsyncToken.Task must have binded before call any method.");
            isRunning = false;
            alreadyCanceld= false;
        }


        public override void OnAllocate()
        {
            
        }

        public override void OnRecycle()
        {
            //Task = null;
            
            alreadyCanceld= false;
        }
    }


}
