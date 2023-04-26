/***********************************************************************************
 * Author      : YueZhenpeng                            
 * Version     : Unity2021.1.2f1c1
 * Date        : 2023/4/25
 * Description : 用于生成代码标注
 ************************************************************************************/



using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace AirFrameworkEditor
{
    public static class TitleInfoGenerator
    {
        private const string sign = "#SIGN#"; 
        public static string GetTitle(string author,string date,string description,string version)
        {
            string line1 = "/***********************************************************************************";
            string line2 = "************************************************************************************/";
            string a1 = $" * Author      : {sign}".Replace(sign,author);
            string a2 = $" * Version     : {sign}".Replace(sign, version);
            string a3 = $" * Date        : {sign}".Replace(sign, date);
            string a4 = $" * Description : {sign}".Replace(sign, description);

            List<string> lines = new List<string>();

            lines.Add(line1);
            lines.Add(a1);
            lines.Add(a2);
            lines.Add(a3);
            lines.Add(a4);
            lines.Add(line2);


            StringBuilder builder = new();

            foreach(string line in lines)
            {
                builder.AppendLine(line);
            }

            return builder.ToString();
        }


        public static string GetTitleDefault()
        {
            string date = DateTime.Now.ToString();
            string des = "Describe the function here.";
            string author = FrameworkSettings.Instance.authorName;

            string version = Application.unityVersion;

            return GetTitle(author,date,des,version);
        }


        public static string GetStandardNameSpaceUsing()
        {
            string a1 = "System";
            string a2 = "System.Collections";
            string a3 = "System.Collections.Generic";
            string a4 = "AirFramework";
            string a5 = "YooAsset";


            List<string> lines = new List<string>();
            lines.Add(a1);
            lines.Add(a2);
                
            lines.Add(a3);
            lines.Add(a4);
            lines.Add(a5);

            StringBuilder builder= new();


            foreach(string line in lines) builder.AppendLine(line);

            return builder.ToString();
            
        }
    }
}
