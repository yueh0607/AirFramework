using UnityEngine;

namespace CoFramework.Events
{
    internal class CoEventLateUpdateDriver : MonoBehaviour
    {
        void FixedUpdate()
        {
            this.Operator<IFixedUpdate>().Send();
        }
    }
}
