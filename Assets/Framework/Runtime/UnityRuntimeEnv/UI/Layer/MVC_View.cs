using UnityEngine;

namespace AirFramework
{
    /// <summary>
    /// 该层内只允许做一些用户输入控制，以及UI参数的更新，值将会自动更新到Model
    /// </summary>
    public abstract partial class View : MonoBehaviour
    {
        public abstract void InitComponents();
    }
  

}
