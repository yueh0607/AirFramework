using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public abstract class AbstractModule : Unit,IUpdate
    {

        public abstract void OnCreate();
        public abstract void Update(float deltaTime);

        
    }
}
