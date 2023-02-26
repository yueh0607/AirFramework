using Sirenix.OdinInspector;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace AirFramework.Editor
{

    public class LogSettings
    {

        #region Config
        RuntimeConfig config;

        public LogSettings(RuntimeConfig c)
        {
            config = c;
            //调试器记录开关
            log_recorder = c.logger_log_enable;
            warning_recorder = c.logger_warn_enable;
            error_recorder = c.logger_error;
            exception_recorder= c.logger_exception;

        }
        void SaveFile()
        {
            //调试器记录开关
            config.logger_log_enable = log_recorder;
            config.logger_warn_enable = warning_recorder;
            config.logger_error = error_recorder;
            config.logger_exception = exception_recorder;

        }

        #endregion


        #region Recorder
        [BoxGroup("File Write Mode")]
        [EnumToggleButtons]
        [LabelText("Log Record Mode")]
        [OnValueChanged("SaveFile")]
        public LogState log_recorder = LogState.Simple;


        [EnumToggleButtons]
        [BoxGroup("File Write Mode")]
        [LabelText("Warning Record Mode")]
        [OnValueChanged("SaveFile")]
        public LogState warning_recorder = LogState.Simple;


        [EnumToggleButtons]
        [BoxGroup("File Write Mode")]
        [OnValueChanged("SaveFile")]
        [LabelText("Error Record Mode")]
        public LogState error_recorder = LogState.All;


        [EnumToggleButtons]
        [BoxGroup("File Write Mode")]
        [OnValueChanged("SaveFile")]
        [LabelText("Exception Record Mode")]
        public LogState exception_recorder = LogState.All;




        [BoxGroup("File Write Mode")]
        [HorizontalGroup("File Write Mode/A")]
        [GUIColor(0, 1, 0)]
        [Button]

        public void ResetAll()
        {
            log_recorder = LogState.Simple;
            warning_recorder = LogState.Simple;
            error_recorder = LogState.All;
            exception_recorder = LogState.All;
            SaveFile();
        }
        [BoxGroup("File Write Mode")]
        [GUIColor(0, 1, 0)]
        [Button]
        [HorizontalGroup("File Write Mode/A")]
        
        public void DisableAll()
        {
            log_recorder = LogState.None;
            warning_recorder = LogState.None;
            error_recorder = LogState.None;
            exception_recorder = LogState.None;
            SaveFile();
        }
        [BoxGroup("File Write Mode")]
        [GUIColor(0, 1, 0)]
        [Button]
        [HorizontalGroup("File Write Mode/A")]

        public void EnableAll()
        {
            log_recorder = LogState.All;
            warning_recorder = LogState.All;
            error_recorder = LogState.All;
            exception_recorder = LogState.All;
            SaveFile();
        }


        #endregion


        #region Manage
        [BoxGroup("Log Manage")]
        [TableList(AlwaysExpanded = true,IsReadOnly =true)]
 
        [HideLabel]
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

                //Debug.Log(file.Name);
                var delta = DateTime.Now - DateTime.Parse(file.Name.Replace(".txt",""));
                if(delta.TotalDays>days)
                {
                    file.Delete();
                }
            }
            datas = ReadLogs();
        }

        [BoxGroup("Log Manage")]
        [Button]
        [HorizontalGroup("Log Manage/A")]
        [GUIColor(0,1,0)]
        [LabelText("Delete Over 3 Days")]
        public void DelThree()
        {
            DeleDays(3);
        }
        [BoxGroup("Log Manage")]
        [Button]
        [HorizontalGroup("Log Manage/A")]
        [LabelText("Delete Over 7 Days")]
        [GUIColor(0, 1, 0)]
        public void DelSeven()
        {
            DeleDays(7);
        }
        [BoxGroup("Log Manage")]
        [HorizontalGroup("Log Manage/A")]
        [Button]
        [LabelText("Delete Over 30 Days")]
        [GUIColor(0, 1, 0)]
        public void DelMon()
        {
            DeleDays(30);
        }
        [BoxGroup("Log Manage")]
        [Button]
        [LabelText("Delete Over 90 Days")]
        [HorizontalGroup("Log Manage/A")]
        [GUIColor(0, 1, 0)]
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
            //[GUIColor(0.6f,0.7f,0.7f)]
            public void Open()
            {
                Application.OpenURL(Application.persistentDataPath + "/Log/" + logs.name);
            }
        }
        #endregion
    }
}
