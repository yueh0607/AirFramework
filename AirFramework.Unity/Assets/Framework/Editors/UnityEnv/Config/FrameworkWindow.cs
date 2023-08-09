using AirFramework;
using UnityEditor;
using UnityEngine;

namespace AirEditor
{
    public class FrameworkWindow : EditorWindow
    {
        [MenuItem("Setting", menuItem = "AirFramework/Settings")]
        static void OpenWindow()
        {
            var window = GetWindow<FrameworkWindow>();
            window.name = "AirFramework Settings";
            window.minSize = new Vector2(600, 400);
            window.Show();
        }


        Texture logo;
        RuntimeConfigData runtimeConfigData;
        private void OnEnable()
        {
            logo = AssetDatabase.LoadAssetAtPath<Texture>("Assets/Framework/Editors/UnityEnv/Icons/logo.png");
            runtimeConfigData = RuntimeConfigData.Read();
        }

        private void OnGUI()
        {
            if (logo == null) Debug.Log("null");
            //GUILayout.Label(logo, GUILayout.ExpandWidth(true), GUILayout.ExpandHeight(true));
            // 获取顶端区域的矩形范围
            Rect rect = GUILayoutUtility.GetRect(0, position.width, 0, logo.height);

            // 绘制图片
            GUI.DrawTexture(rect, logo, ScaleMode.ScaleAndCrop, true);
            string introducation = "AirFramework是一款游戏开发框架，拥有较为完整的工作流与规范" +
                "，框架采用模块化的开发方式，为用户提供一条完整的开发流水线和较高的拓展性";
            GUILayout.TextArea(introducation, GUILayout.ExpandWidth(true), GUILayout.ExpandHeight(true));


            if (GUILayout.Button("Github - AirFramework"))
            {
                Application.OpenURL("https://github.com/yueh0607/AirFramework");
            }

            EditorGUILayout.Space();

            var last = runtimeConfigData.initializeType;
            runtimeConfigData.initializeType = (RuntimeMode)EditorGUILayout.EnumPopup("RuntimeMode", runtimeConfigData.initializeType);
            if (last != runtimeConfigData.initializeType)
            {
                runtimeConfigData.Write();
                AssetDatabase.Refresh();
            }
            if (runtimeConfigData.initializeType == RuntimeMode.Host)
            {
                runtimeConfigData.ServerPath1 = EditorGUILayout.TextField("ResServer1", runtimeConfigData.ServerPath1);
                runtimeConfigData.ServerPath2 = EditorGUILayout.TextField("ResServer2", runtimeConfigData.ServerPath2);
            }
        }
    }
}

