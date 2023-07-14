
using System.IO;
using System.Text;
using UnityEditor;
using UnityEditor.ProjectWindowCallback;

namespace AirFrameworkEditor
{
    //用于创建文本
    class CreateScriptAsset : EndNameEditAction
    {
        public override void Action(int instanceId, string pathName, string sourceCode)
        {
            UnityEngine.Object o = CreateScriptAssetFromTemplate(pathName, sourceCode);
            ProjectWindowUtil.ShowCreatedAsset(o);
        }

        internal static UnityEngine.Object CreateScriptAssetFromTemplate(string pathName, string resourceFile)
        {
            string fullPath = Path.GetFullPath(pathName);

            string text = resourceFile;

            string fileNameWithoutExtension = Path.GetFileNameWithoutExtension(pathName).Split('.')[0];
            text = text.Replace("#NAME#", fileNameWithoutExtension.Replace(" ", string.Empty));

            bool encoderShouldEmitUTF8Identifier = true;
            bool throwOnInvalidBytes = false;
            UTF8Encoding encoding = new UTF8Encoding(encoderShouldEmitUTF8Identifier, throwOnInvalidBytes);
            bool append = false;
            StreamWriter streamWriter = new StreamWriter(fullPath, append, encoding);
            streamWriter.Write(text);
            streamWriter.Close();

            AssetDatabase.ImportAsset(pathName);
            AssetDatabase.Refresh();
            return AssetDatabase.LoadAssetAtPath(pathName, typeof(UnityEngine.Object));
        }
    }
}