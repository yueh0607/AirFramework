using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using UIMark = AirFramework.UIMark;
namespace AirFrameworkEditor
{
    public static class CreateUIFileHandle
    {
        /// <summary> 
        /// ��ָ��·��д��ָ�������ļ������ǣ�����
        /// </summary>
        /// <param panelName="path"></param>
        /// <param panelName="text"></param>
        internal static void CreateFileInFolder(string path, string text)
        {
            string filePath = Application.dataPath + "/" + path.Substring("Assets/".Length);
            File.WriteAllText(filePath, text, System.Text.Encoding.Unicode);
        }


        /// <summary>
        /// ����Mark�������룬�����ļ�
        /// </summary>
        /// <param panelName="marks"></param>
        /// <param panelName="path"></param>
        /// <param panelName="panelName"></param>
        public static void CreateVCByMarks(List<UIMark> marks, string path, string panelName)
        {
            var data = PanelAnalyser.GetData(marks);
            var eventList = data.GetEventList();
            var bind = data.GetBindCode();
            var unbind = data.GetUnBindCode();
            CreateEventController(panelName, path, eventList, bind, unbind);
            CreateUpdateController(panelName, path);
            CreateControllerPanel(panelName, path);
            CreateView(panelName, path, data);


            AssetDatabase.Refresh();
        }

        /// <summary>
        /// �����������¼���C
        /// </summary>
        /// <param panelName="panelName"></param>
        /// <param panelName="path"></param>
        /// <param panelName="eventList"></param>
        internal static void CreateEventController(string panelName, string path, string[] eventList, List<string> bind, List<string> unbind)
        {
            path += $"/{panelName}Controller.Event.cs";
            ControllerGenerator generator = new ControllerGenerator();
            generator.Init(panelName);
            generator.AddEvent("protected override void OnBindEvents()", bind);
            generator.AddEvent("protected override void OnUnBindEvents()", unbind);
            generator.AddCommit("---------------------------------------------------------------------------------------");
            foreach (string eventName in eventList)
            {
                generator.AddEmptyEvent(eventName);
            }
            generator.End();
            CreateFileInFolder(path, generator.GetCode());
        }

        /// <summary>
        /// �����������V��C
        /// </summary>
        /// <param panelName="panelName"></param>
        /// <param panelName="path"></param>
        internal static void CreateUpdateController(string panelName, string path)
        {
            path += $"/{panelName}Controller.UpdateView.cs";
            ControllerGenerator generator = new ControllerGenerator();
            generator.Init(panelName);
            //generator.AddEmptyLine();
            generator.AddCommit("Model<CounterModel>().count.OnValueChanged+=OnUpdateCount;");
            generator.AddEmptyEvent("protected override void OnBindProperty()");
            generator.AddCommit("Model<CounterModel>().count.OnValueChanged-=OnUpdateCount;");
            generator.AddEmptyEvent("protected override void OnUnBindProperty()");
            //generator.AddCommit("������дM��V�ĸ���...");

            generator.End();
            CreateFileInFolder(path, generator.GetCode());
        }

        /// <summary>
        /// �������а��ֶε�V
        /// </summary>
        /// <param panelName="panelName"></param>
        /// <param panelName="path"></param>
        /// <param panelName="fields"></param>
        internal static void CreateView(string panelName, string path, List<MarkData> data)
        {
            path += $"/{panelName}View.cs";
            ViewGenerator generator = new ViewGenerator();
            generator.Init(panelName);

            string[] fields = data.GetViewFieldList();
            foreach (var x in fields)
            {
                generator.AddField(x);
            }

            List<string> initCode = new();
            foreach (var x in data)
            {
                string code = $"{x.ViewFieldName} = transform.Find(\"{x.BuildName}\").GetComponent<{x.FullTypeName}>();";
                initCode.Add(code);
            }
            generator.AddEvent("public override void InitComponents()", initCode);
            generator.End();
            CreateFileInFolder(path, generator.GetCode());
        }

        /// <summary>
        /// ��������Panel�¼���V
        /// </summary>
        /// <param panelName="panelName"></param>
        /// <param panelName="path"></param>
        internal static void CreateControllerPanel(string panelName, string path)
        {
            path += $"/{panelName}Panel.Behaviour.cs";
            ControllerGenerator generator = new ControllerGenerator();
            generator.Init(panelName);

            generator.AddEmptyEvent("public override void OnOpenPanel()");
            generator.AddEmptyEvent("public override void OnClosePanel()");
            generator.AddEvent("public override void OnLoadPanel()", new List<string>() { "View.InitComponents();" });
            generator.AddEmptyEvent("public override void OnUnloadPanel()");
            generator.AddEmptyEvent("public override void OnFocusPanel()");
            generator.AddEmptyEvent("public override void OnLostFocusPanel()");

            generator.End();
            CreateFileInFolder(path, generator.GetCode());
        }
    }
}
