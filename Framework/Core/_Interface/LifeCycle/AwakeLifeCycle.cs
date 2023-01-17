using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public class AwakeLifeCycle : ICustomLifeCycle<IAwake>
    {
        public bool IsOnce => true;

        public int SortingLayer => 0;

        public Action GetLifeFunc(Unit unit)
        {
            return (life as IAwake).Awake;
        }
        public void LifeFunc(Action lifeFunc)
        {
            lifeFunc.Invoke();
        }
    }
}
