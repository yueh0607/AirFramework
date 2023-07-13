using UnityEngine;

namespace CoFramework.Events
{
    internal class CoEventUpdateDriver : MonoBehaviour
    {


        void Update()
        {
            this.Operator<IUpdate>().Send(Time.deltaTime);
        }

    }
}
