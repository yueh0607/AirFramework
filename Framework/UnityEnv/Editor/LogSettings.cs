using Sirenix.OdinInspector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;

namespace AirFramework.Editor
{

    public class LogSettings
    {


        #region Recorder

        public enum LogState
        {
            /// <summary>
            /// 不会记录
            /// </summary>

            None,
            /// <summary>
            /// 只记录内容
            /// </summary>

            Simple,
            /// <summary>
            /// 完全日志，带有堆栈跟踪
            /// </summary>

            All
        }



        [BoxGroup("日志文件写入模式")]
        [EnumToggleButtons]
        [LabelText("日志记录")]
        public LogState log_recorder = LogState.Simple;


        [EnumToggleButtons]
        [BoxGroup("日志文件写入模式")]
        [LabelText("警告记录")]
        public LogState warning_recorder = LogState.Simple;


        [EnumToggleButtons]
        [BoxGroup("日志文件写入模式")]
        [LabelText("错误记录")]
        public LogState error_recorder = LogState.All;


        [EnumToggleButtons]
        [BoxGroup("日志文件写入模式")]
        [LabelText("异常记录")]
        public LogState exception_recorder = LogState.All;





        [BoxGroup("日志文件写入模式")]
        [HorizontalGroup("日志文件写入模式/A")]
        [GUIColor(0, 1, 0)]
        [Button]

        public void ResetAll()
        {
            log_recorder = LogState.Simple;
            warning_recorder = LogState.Simple;
            error_recorder = LogState.All;
            exception_recorder = LogState.All;
        }
        [BoxGroup("日志文件写入模式")]
        [GUIColor(0, 1, 0)]
        [Button]
        [HorizontalGroup("日志文件写入模式/A")]

        public void DisableAll()
        {
            log_recorder = LogState.None;
            warning_recorder = LogState.None;
            error_recorder = LogState.None;
            exception_recorder = LogState.None;
        }
        [BoxGroup("日志文件写入模式")]
        [GUIColor(0, 1, 0)]
        [Button]
        [HorizontalGroup("日志文件写入模式/A")]

        public void EnableAll()
        {
            log_recorder = LogState.All;
            warning_recorder = LogState.All;
            error_recorder = LogState.All;
            exception_recorder = LogState.All;
        }


        #endregion
   

        [TableList(AlwaysExpanded = true)]
        [LabelText("日志管理")]
        public List<LogColumn> datas = ReadLogs();


        private static List<LogColumn> ReadLogs()
        {
            string path = Application.persistentDataPath + "/Log/";
            DirectoryInfo dirs = new DirectoryInfo(path);
            FileInfo[] files = dirs.GetFiles();
            List<LogColumn> logs = new List<LogColumn>();

            foreach (var info in files)
            {
                LogColumn column = new LogColumn();

                using (var x = new StreamReader(info.OpenRead()))
                {


                    var text = new TextAsset(x.ReadToEnd());
                    text.name = info.Name;
                    column.logs = text;
                }
                logs.Add(column);
            }
            return logs;
        }
        private void DeleDays(int days)
        {
            string path = Application.persistentDataPath + "/Log/";
            DirectoryInfo dirs = new DirectoryInfo(path);
            FileInfo[] files = dirs.GetFiles();
            

            foreach(var file in files)
            {

                Debug.Log(file.Name);
                var delta = DateTime.Now - DateTime.Parse(file.Name.Replace(".txt",""));
                if(delta.TotalDays>days)
                {
                    file.Delete();
                }
            }
            datas = ReadLogs();
        }


        [ButtonGroup("删除日志")]
        [LabelText("Over 3 Days")]
        public void DelThree()
        {
            DeleDays(3);
        }


        [ButtonGroup("删除日志")]
        [LabelText("Over 7 Days")]
        public void DelSeven()
        {
            DeleDays(7);
        }
        [ButtonGroup("删除日志")]
        [LabelText("Over 30 Days")]
        public void DelMon()
        {
            DeleDays(30);
        }
        [ButtonGroup("删除日志")]
        [LabelText("Over 90 Days")]
        public void DelTMon()
        {
            DeleDays(90);
        }
        [Serializable]
        public class LogColumn
        {

            [HideLabel]


            public TextAsset logs;
            [LabelText("Open File")]

            [Button]
            public void Open()
            {
                Application.OpenURL(Application.persistentDataPath + "/Log/" + logs.name);
            }
        }
    }
}
