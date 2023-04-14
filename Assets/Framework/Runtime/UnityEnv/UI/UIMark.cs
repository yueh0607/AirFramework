using UnityEngine;
namespace AirFramework
{

    public class UIMark : MonoBehaviour
    {

#if UNITY_EDITOR

        public Component buildTarget = null;

        public string buildName = string.Empty;
#endif

    }
}
