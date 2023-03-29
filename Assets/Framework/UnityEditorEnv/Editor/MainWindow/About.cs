using Sirenix.OdinInspector;
using Sirenix.Utilities.Editor;
using UnityEngine;

namespace AirFrameworkEditor
{

    public class About
    {

        [TabGroup("A", "作者")]
        [DisplayAsString]
        [LabelText("作者")]
        [InlineButton("CopyName", "Copy")]
        public string author = "yueh0607";
        [TabGroup("A", "作者")]
        [DisplayAsString]
        [InlineButton("CopyQQ", "Copy")]
        public string QQ = "2781466615";


        [TabGroup("A", "作者")]
        [InlineButton("OpenGithub", "Open")]
        [DisplayAsString]

        public string GitHub = "https://github.com/yueh0607/AirFramework";
        [TabGroup("A", "作者")]
        [DisplayAsString]
        [InlineButton("OpenCSDN", "Open")]

        public string CSDN = "https://blog.csdn.net/qq_46273241";
        [TabGroup("A", "作者")]
        [DisplayAsString]
        [InlineButton("OpenBili", "Open")]
        public string Bilibili = "https://space.bilibili.com/493858666";



        public void CopyQQ() => Clipboard.Copy(QQ);
        public void CopyName() => Clipboard.Copy(author);
        public void OpenBili() => OpenURL(Bilibili);

        public void OpenGithub() => OpenURL(GitHub);

        public void OpenCSDN() => OpenURL(CSDN);




        private static void OpenURL(string x) => Application.OpenURL(x);


        [Title("Open Source License")]
        [TabGroup("A", "开源")]
        [Multiline(18)]
        [HideLabel]
        [ReadOnly]

        public string license = "MIT License\r\n\r\nCopyright (c) 2023 yueh\r\n\r\nPermission is hereby granted, free of charge, to any person obtaining a copy\r\nof this software and associated documentation files (the \"Software\"), to deal\r\nin the Software without restriction, including without limitation the rights\r\nto use, copy, modify, merge, publish, distribute, sublicense, and/or sell\r\ncopies of the Software, and to permit persons to whom the Software is\r\nfurnished to do so, subject to the following conditions:\r\n\r\nThe above copyright notice and this permission notice shall be included in all\r\ncopies or substantial portions of the Software.\r\n\r\nTHE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\r\nIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\r\nFITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\r\nAUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\r\nLIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\r\nOUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\r\nSOFTWARE.";

        [TabGroup("A", "开源")]
        [Button("Copy License")]
        public void Copy()
        {
            Clipboard.Copy(license);
        }



        [TabGroup("A", "介绍")]
        [DisplayAsString]
        [HideLabel]

        public string words1 = "暂无";
        [TabGroup("A", "介绍")]
        [DisplayAsString]
        [HideLabel]

        public string words2 = "";

    }
}
