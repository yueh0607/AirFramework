using System.Reflection;
using UnityEditor;

namespace AirFrameworkEditor
{
    public class CreateFormat
    {

        [MenuItem("Assets/Create/Format/C# Script", false, 0)]
        public static void CreateCsharpScript()
        {
            ProjectWindowUtilEx.CreateScriptUtil("Assets/Framework/Editors/UnityEnv/Configurations/Format/CSharpFormat.cs.txt", "haha.cs");
        }
        [MenuItem("Assets/Create/Format/Mono Script", false, 0)]
        public static void CreateMonoScript()
        {

        }

        [MenuItem("Assets/Create/Format/Unit Script", false, 0)]
        public static void CreateUnitScript()
        {

        }

        [MenuItem("Assets/Create/Format/Pool Script", false, 0)]
        public static void CreatePoolScript()
        {

        }
    }
    public class ProjectWindowUtilEx
    {
        public static void CreateScriptUtil(string path, string templete)
        {
            MethodInfo method = typeof(ProjectWindowUtil).GetMethod("CreateScriptAsset",
                BindingFlags.Static | BindingFlags.NonPublic);
            if (method != null)
                method.Invoke(null, new object[] { templete, path });
        }

    }
}
