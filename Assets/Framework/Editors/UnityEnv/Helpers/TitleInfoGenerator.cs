/***********************************************************************************
 * Author      : YueZhenpeng                            
 * Version     : Unity2021.1.2f1c1
 * Date        : 2023/4/25
 * Description : �������ɴ����ע
 ************************************************************************************/



using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace AirFrameworkEditor
{
    public static class TitleInfoGenerator
    {
        /// <summary>
        /// Ĭ�ϵ��滻����
        /// </summary>
        public const string Sign = "#SIGN#";
        /// <summary>
        /// ��ȡ̧ͷ�ַ���
        /// </summary>
        /// <param name="author"></param>
        /// <param name="date"></param>
        /// <param name="description"></param>
        /// <param name="version"></param>
        /// <returns></returns>
        public static string GetTitle(string author, string date, string description, string version)
        {
            string line1 = "/***********************************************************************************";
            string line2 = "************************************************************************************/";
            string a1 = $" * Author      : {Sign}".Replace(Sign, author);
            string a2 = $" * Version     : {Sign}".Replace(Sign, version);
            string a3 = $" * Date        : {Sign}".Replace(Sign, date);
            string a4 = $" * Description : {Sign}".Replace(Sign, description);

            List<string> lines = new List<string>();

            lines.Add(line1);
            lines.Add(a1);
            lines.Add(a2);
            lines.Add(a3);
            lines.Add(a4);
            lines.Add(line2);


            StringBuilder builder = new();

            foreach (string line in lines)
            {
                builder.AppendLine(line);
            }

            return builder.ToString();
        }

        /// <summary>
        /// ��ȡĬ�ϵ�̧ͷ
        /// </summary>
        /// <returns></returns>

        public static string GetTitleDefault()
        {
            string date = DateTime.Now.ToString();
            string des = "Describe the function here.";
            string author = FrameworkSettings.Instance.authorName;

            string version = Application.unityVersion;

            return GetTitle(author, date, des, version);
        }

        /// <summary>
        /// ��ȡ��׼�������ռ��ı�������ֱ��ʹ��CodeGen����using
        /// </summary>
        /// <returns></returns>
        public static List<string> GetStandardNameSpaceUsing()
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
            return lines;

        }
    }
}
