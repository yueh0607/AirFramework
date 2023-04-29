
/******************************

 * Author: 闪电黑客

 * 日期: 2021/12/18 17:32:33

 * 最后日期: 2021/12/18 17:33:17

 * 最后修改: 闪电黑客

 * 描述:  

******************************/
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.ProjectWindowCallback;
using UnityEngine;

public class LuaScriptEditor : MonoBehaviour
{

    [MenuItem("Assets/Create/Lua Script", false, 81)]
    internal static void CreateLua()
    {
        ProjectWindowUtil.StartNameEditingIfProjectWindowExists(0,
        ScriptableObject.CreateInstance<CreateScriptAsset>(),
        GetSelectedPathOrFallback() + "/NewLuaObject.lua.txt",
        null,
@"
#NAME#=LuaObject:Extend({TableName = '#NAME#'})
"
       );
    }

    [MenuItem("Assets/Create/LuaObject Script", false, 81)]
    internal static void CreateLuaObject()
    {
        ProjectWindowUtil.StartNameEditingIfProjectWindowExists(0,
        ScriptableObject.CreateInstance<CreateScriptAsset>(),
        GetSelectedPathOrFallback() + "/NewLuaObject.lua.txt",
        null,
@"
using 'LuaObjectPoolBuilder'

-- 对象池对象
#NAME# = LuaObjectItem:Extend({ TableName = '#NAME#'})
#NAME#.pool = LuaObjectPoolBuilder.Construct(#NAME#)

-- 获取对象
function #NAME#.Get()
    return #NAME#.pool:Get()
end


function #NAME#:ObjectOnNew()
    
end


function #NAME#:ObjectOnDestroy()
   
end


function #NAME#:ObjectOnGet()
    
end


function #NAME#:ObjectOnRecycle()
   
end



"
       );
    }

    [MenuItem("Assets/Create/LuaMonoObject Script", false, 81)]
    internal static void CreateLuaMonoObject()
    {
        ProjectWindowUtil.StartNameEditingIfProjectWindowExists(0,
        ScriptableObject.CreateInstance<CreateScriptAsset>(),
        GetSelectedPathOrFallback() + "/NewLuaObject.lua.txt",
        null,
@"
using 'LuaMonoObjectPoolBuilder'

-- Mono对象池对象
#NAME# = LuaMonoObjectItem:Extend({TableName = '#NAME#'})
#NAME#.pool = LuaMonoObjectPoolBuilder.Construct(#NAME#,nil)

-- 获取对象
function #NAME#.Get()
    return #NAME#.pool:GetTable()
end

-- 获取对象，并设置父物体
function #NAME#.Get(parent)
    return #NAME#.pool:GetTable(parent)
end


function #NAME#:ObjectOnNew()
    
end


function #NAME#:ObjectOnDestroy()
   
end


function #NAME#:ObjectOnGet()
    
end


function #NAME#:ObjectOnRecycle()
   
end


function #NAME#:MonoUpdate()

end

"
       );
    }
    //获取选中路径
    public static string GetSelectedPathOrFallback()
    {
        string path = "Assets";
        foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
        {
            path = AssetDatabase.GetAssetPath(obj);
            if (!string.IsNullOrEmpty(path) && File.Exists(path))
            {
                path = Path.GetDirectoryName(path);
                break;
            }
        }
        return path;
    }


    [UnityEditor.Callbacks.OnOpenAssetAttribute(1)]
    public static bool step1(int instanceID, int line)
    {
        return false;
    }
    [UnityEditor.Callbacks.OnOpenAssetAttribute(2)]
    public static bool step2(int instanceID, int line)
    {
        string strFilePath = AssetDatabase.GetAssetPath(EditorUtility.InstanceIDToObject(instanceID));
        string strFileName = Application.dataPath + "/" + strFilePath.Replace("Assets/", "");

        //我的 Lua 文件后缀是 .bytes ，这里替换成你的就好
        if (strFileName.EndsWith(".lua") || strFileName.EndsWith(".lua.txt"))
        {
            System.Diagnostics.Process process = new System.Diagnostics.Process();
            System.Diagnostics.ProcessStartInfo startInfo = new System.Diagnostics.ProcessStartInfo();
            startInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Normal;

            //填写编写Lua代码的编辑器路径
            startInfo.FileName = "D:/1Make/Code/VSCode/Microsoft VS Code/Code.exe";

            startInfo.Arguments = strFileName;
            process.StartInfo = startInfo;
            try
            {
                process.Start();
                return true;
            }
            catch
            {
                return false;
            }
        }
        return false;
    }




}

//用于创建文本
class CreateScriptAsset : EndNameEditAction
{
    public override void Action(int instanceId, string pathName, string resourceFile)
    {
        UnityEngine.Object o = CreateScriptAssetFromTemplate(pathName, resourceFile);
        ProjectWindowUtil.ShowCreatedAsset(o);
    }

    internal static UnityEngine.Object CreateScriptAssetFromTemplate(string pathName, string resourceFile)
    {
        string fullPath = Path.GetFullPath(pathName);

        // StreamReader streamReader = new StreamReader(resourceFile);
        // string text = streamReader.ReadToEnd();
        // streamReader.Close();

        string text = resourceFile;
        //XXX/AAA/xyz.lua.bytes
        string fileNameWithoutExtension = Path.GetFileNameWithoutExtension(pathName).Split('.')[0];
        text = Regex.Replace(text, "#NAME#", fileNameWithoutExtension);

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


    // [ScriptedImporter(1, ".lua")] //!虽然能识别但是无法被AB工具插件打包,暂时无用
    // public class LuaImporter : ScriptedImporter
    // {
    //     public override void OnImportAsset(AssetImportContext ctx)
    //     {
    //         var luaTxt = File.ReadAllText(ctx.assetPath); //作为string读取

    //         // Debug.Log("Import:" + ctx.assetPath);

    //         var assetsText = new TextAsset(luaTxt); //转化为TextAsset，也可写个LuaAsset的类作为保存对象，但要继承Object的类

    //         ctx.AddObjectToAsset("main obj", assetsText);  //这一步和下面一步看似重复了，但少了哪一步都会报异常

    //         ctx.SetMainObject(assetsText);
    //     }
    // }

}