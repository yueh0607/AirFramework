using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceLocations;

namespace AirFramework
{

    public class UIManager : GlobalManager
    {
        public override string Name => "UIManager";

        protected override void OnDispose()
        {

        }

        public ModelManager Models { get; protected set; } = new ModelManager();


        /// <summary>
        /// 加载面板资源
        /// </summary>
        /// <param name="group"></param>
        public void LoadPanel(MVVMGroup group)
        {

        }
        /// <summary>
        /// 卸载面板资源
        /// </summary>
        /// <param name="group"></param>
        public void UnloadPanel(MVVMGroup group)
        {

        }

        /// <summary>
        /// 打开面板
        /// </summary>
        public void OpenPanel()
        {

        }
        /// <summary>
        /// 关闭面板
        /// </summary>
        public void ClosePanel()
        {

        }

    }
}
