using Sirenix.OdinInspector;
using Sirenix.Utilities.Editor;
using System.IO;
using UnityEngine;
namespace AirFrameworkEditor
{

    public class About
    {

        #region 作者
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

        #endregion

        #region 开源
        [Title("Open Source License")]
        [TabGroup("A", "开源")]
        [Multiline(165)]
        [HideLabel]
        [ReadOnly]

        public string license = "                                 Apache License\r\n                           Version 2.0, January 2004\r\n                        http://www.apache.org/licenses/\r\n\r\n   TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION\r\n\r\n   1. Definitions.\r\n\r\n      \"License\" shall mean the terms and conditions for use, reproduction,\r\n      and distribution as defined by Sections 1 through 9 of this document.\r\n\r\n      \"Licensor\" shall mean the copyright owner or entity authorized by\r\n      the copyright owner that is granting the License.\r\n\r\n      \"Legal Entity\" shall mean the union of the acting entity and all\r\n      other entities that control, are controlled by, or are under common\r\n      control with that entity. For the purposes of this definition,\r\n      \"control\" means (i) the power, direct or indirect, to cause the\r\n      direction or management of such entity, whether by contract or\r\n      otherwise, or (ii) ownership of fifty percent (50%) or more of the\r\n      outstanding shares, or (iii) beneficial ownership of such entity.\r\n\r\n      \"You\" (or \"Your\") shall mean an individual or Legal Entity\r\n      exercising permissions granted by this License.\r\n\r\n      \"Source\" form shall mean the preferred form for making modifications,\r\n      including but not limited to software source code, documentation\r\n      source, and configuration files.\r\n\r\n      \"Object\" form shall mean any form resulting from mechanical\r\n      transformation or translation of a Source form, including but\r\n      not limited to compiled object code, generated documentation,\r\n      and conversions to other media types.\r\n\r\n      \"Work\" shall mean the work of authorship, whether in Source or\r\n      Object form, made available under the License, as indicated by a\r\n      copyright notice that is included in or attached to the work\r\n      (an example is provided in the Appendix below).\r\n\r\n      \"Derivative Works\" shall mean any work, whether in Source or Object\r\n      form, that is based on (or derived from) the Work and for which the\r\n      editorial revisions, annotations, elaborations, or other modifications\r\n      represent, as a whole, an original work of authorship. For the purposes\r\n      of this License, Derivative Works shall not include works that remain\r\n      separable from, or merely link (or bind by name) to the interfaces of,\r\n      the Work and Derivative Works thereof.\r\n\r\n      \"Contribution\" shall mean any work of authorship, including\r\n      the original version of the Work and any modifications or additions\r\n      to that Work or Derivative Works thereof, that is intentionally\r\n      submitted to Licensor for inclusion in the Work by the copyright owner\r\n      or by an individual or Legal Entity authorized to submit on behalf of\r\n      the copyright owner. For the purposes of this definition, \"submitted\"\r\n      means any form of electronic, verbal, or written communication sent\r\n      to the Licensor or its representatives, including but not limited to\r\n      communication on electronic mailing lists, source code control systems,\r\n      and issue tracking systems that are managed by, or on behalf of, the\r\n      Licensor for the purpose of discussing and improving the Work, but\r\n      excluding communication that is conspicuously marked or otherwise\r\n      designated in writing by the copyright owner as \"Not a Contribution.\"\r\n\r\n      \"Contributor\" shall mean Licensor and any individual or Legal Entity\r\n      on behalf of whom a Contribution has been received by Licensor and\r\n      subsequently incorporated within the Work.\r\n\r\n   2. Grant of Copyright License. Subject to the terms and conditions of\r\n      this License, each Contributor hereby grants to You a perpetual,\r\n      worldwide, non-exclusive, no-charge, royalty-free, irrevocable\r\n      copyright license to reproduce, prepare Derivative Works of,\r\n      publicly display, publicly perform, sublicense, and distribute the\r\n      Work and such Derivative Works in Source or Object form.\r\n\r\n   3. Grant of Patent License. Subject to the terms and conditions of\r\n      this License, each Contributor hereby grants to You a perpetual,\r\n      worldwide, non-exclusive, no-charge, royalty-free, irrevocable\r\n      (except as stated in this section) patent license to make, have made,\r\n      use, offer to sell, sell, import, and otherwise transfer the Work,\r\n      where such license applies only to those patent claims licensable\r\n      by such Contributor that are necessarily infringed by their\r\n      Contribution(s) alone or by combination of their Contribution(s)\r\n      with the Work to which such Contribution(s) was submitted. If You\r\n      institute patent litigation against any entity (including a\r\n      cross-claim or counterclaim in a lawsuit) alleging that the Work\r\n      or a Contribution incorporated within the Work constitutes direct\r\n      or contributory patent infringement, then any patent licenses\r\n      granted to You under this License for that Work shall terminate\r\n      as of the date such litigation is filed.\r\n\r\n   4. Redistribution. You may reproduce and distribute copies of the\r\n      Work or Derivative Works thereof in any medium, with or without\r\n      modifications, and in Source or Object form, provided that You\r\n      meet the following conditions:\r\n\r\n      (a) You must give any other recipients of the Work or\r\n          Derivative Works a copy of this License; and\r\n\r\n      (b) You must cause any modified files to carry prominent notices\r\n          stating that You changed the files; and\r\n\r\n      (c) You must retain, in the Source form of any Derivative Works\r\n          that You distribute, all copyright, patent, trademark, and\r\n          attribution notices from the Source form of the Work,\r\n          excluding those notices that do not pertain to any part of\r\n          the Derivative Works; and\r\n\r\n      (d) If the Work includes a \"NOTICE\" text file as part of its\r\n          distribution, then any Derivative Works that You distribute must\r\n          include a readable copy of the attribution notices contained\r\n          within such NOTICE file, excluding those notices that do not\r\n          pertain to any part of the Derivative Works, in at least one\r\n          of the following places: within a NOTICE text file distributed\r\n          as part of the Derivative Works; within the Source form or\r\n          documentation, if provided along with the Derivative Works; or,\r\n          within a display generated by the Derivative Works, if and\r\n          wherever such third-party notices normally appear. The contents\r\n          of the NOTICE file are for informational purposes only and\r\n          do not modify the License. You may add Your own attribution\r\n          notices within Derivative Works that You distribute, alongside\r\n          or as an addendum to the NOTICE text from the Work, provided\r\n          that such additional attribution notices cannot be construed\r\n          as modifying the License.\r\n\r\n      You may add Your own copyright statement to Your modifications and\r\n      may provide additional or different license terms and conditions\r\n      for use, reproduction, or distribution of Your modifications, or\r\n      for any such Derivative Works as a whole, provided Your use,\r\n      reproduction, and distribution of the Work otherwise complies with\r\n      the conditions stated in this License.\r\n\r\n   5. Submission of Contributions. Unless You explicitly state otherwise,\r\n      any Contribution intentionally submitted for inclusion in the Work\r\n      by You to the Licensor shall be under the terms and conditions of\r\n      this License, without any additional terms or conditions.\r\n      Notwithstanding the above, nothing herein shall supersede or modify\r\n      the terms of any separate license agreement you may have executed\r\n      with Licensor regarding such Contributions.\r\n\r\n   6. Trademarks. This License does not grant permission to use the trade\r\n      names, trademarks, service marks, or product names of the Licensor,\r\n      except as required for reasonable and customary use in describing the\r\n      origin of the Work and reproducing the content of the NOTICE file.\r\n\r\n   7. Disclaimer of Warranty. Unless required by applicable law or\r\n      agreed to in writing, Licensor provides the Work (and each\r\n      Contributor provides its Contributions) on an \"AS IS\" BASIS,\r\n      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or\r\n      implied, including, without limitation, any warranties or conditions\r\n      of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A\r\n      PARTICULAR PURPOSE. You are solely responsible for determining the\r\n      appropriateness of using or redistributing the Work and assume any\r\n      risks associated with Your exercise of permissions under this License.\r\n\r\n   8. Limitation of Liability. In no event and under no legal theory,\r\n      whether in tort (including negligence), contract, or otherwise,\r\n      unless required by applicable law (such as deliberate and grossly\r\n      negligent acts) or agreed to in writing, shall any Contributor be\r\n      liable to You for damages, including any direct, indirect, special,\r\n      incidental, or consequential damages of any character arising as a\r\n      result of this License or out of the use or inability to use the\r\n      Work (including but not limited to damages for loss of goodwill,\r\n      work stoppage, computer failure or malfunction, or any and all\r\n      other commercial damages or losses), even if such Contributor\r\n      has been advised of the possibility of such damages.\r\n\r\n   9. Accepting Warranty or Additional Liability. While redistributing\r\n      the Work or Derivative Works thereof, You may choose to offer,\r\n      and charge a fee for, acceptance of support, warranty, indemnity,\r\n      or other liability obligations and/or rights consistent with this\r\n      License. However, in accepting such obligations, You may act only\r\n      on Your own behalf and on Your sole responsibility, not on behalf\r\n      of any other Contributor, and only if You agree to indemnify,\r\n      defend, and hold each Contributor harmless for any liability\r\n      incurred by, or claims asserted against, such Contributor by reason\r\n      of your accepting any such warranty or additional liability.\r\n\r\n   END OF TERMS AND CONDITIONS\r\n\r\n   APPENDIX: How to apply the Apache License to your work.\r\n\r\n      To apply the Apache License to your work, attach the following\r\n      boilerplate notice, with the fields enclosed by brackets \"[]\"\r\n      replaced with your own identifying information. (Don't include\r\n      the brackets!)  The text should be enclosed in the appropriate\r\n      comment syntax for the file format. We also recommend that a\r\n      file or class name and description of purpose be included on the\r\n      same \"printed page\" as the copyright notice for easier\r\n      identification within third-party archives.\r\n\r\n   Copyright [yyyy] [name of copyright owner]\r\n\r\n   Licensed under the Apache License, Version 2.0 (the \"License\");\r\n   you may not use this file except in compliance with the License.\r\n   You may obtain a copy of the License at\r\n\r\n       http://www.apache.org/licenses/LICENSE-2.0\r\n\r\n   Unless required by applicable law or agreed to in writing, software\r\n   distributed under the License is distributed on an \"AS IS\" BASIS,\r\n   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\r\n   See the License for the specific language governing permissions and\r\n   limitations under the License.";

        [TabGroup("A", "开源")]
        [Button("Copy License")]
        public void Copy()
        {
            Clipboard.Copy(license);
        }

        #endregion

        #region 框架设置

        [TabGroup("A", "框架设置")]
        [LabelText("默认用户名")]
        [OnValueChanged("SaveSetting")]
        public string authorName="UserName";

        [TabGroup("A", "框架设置")]
        [LabelText("默认命名空间")]
        [OnValueChanged("SaveSetting")]
        public string nameSpaceName= "MyNamespace";

        public About() => ReadSetting();
        void ReadSetting()
        {
            authorName = FrameworkSettings.Instance.authorName;
            nameSpaceName = FrameworkSettings.Instance.defaultNamespace;
            InitSystemInfo();
        }
        void SaveSetting()
        {
            FrameworkSettings.Instance.authorName= authorName;
            FrameworkSettings.Instance.defaultNamespace = nameSpaceName;
        }


        #endregion

        #region 系统

        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("设备名称")]
        public string ComputerName;
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("设备类型")]
        public string ComputerType; // 设备的类型，如台式机、笔记本、服务器等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("设备型号")]
        public string ComputerModel; // 设备的具体型号，如ThinkPad T480、MacBook Pro 13-inch等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("显卡名称")]
        public string CardName; // 设备所使用的显卡名称，如NVIDIA GeForce GTX 1060、Intel HD Graphics 620等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("显存大小")]
        public string CardMemory; // 显卡的显存大小，单位可以是GB或MB。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("内存大小")]
        public string MemorySize; // 设备的内存大小，单位可以是GB或MB。


        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("CPU型号")]
        public string CPUModel; // 设备所使用的处理器型号，如Intel Core i7-8700K、AMD Ryzen 5 3600等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("CPU核心数")]
        public int CPUCores; // 处理器的核心数，例如4核心、6核心、8核心等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("CPU频率")]
        public string CPUFrequency; // 处理器的基础频率，单位可以是GHz或MHz。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("硬盘型号")]
        public string HardDriveModel; // 设备所使用的硬盘型号，如Samsung 970 EVO Plus、WD Blue等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("硬盘容量")]
        public string HardDriveSize; // 硬盘的容量，单位可以是TB、GB或MB。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("操作系统")]
        public string OperatingSystem; // 设备所运行的操作系统，如Windows 10、macOS等。
        
        [TabGroup("A", "系统信息")]
        [DisplayAsString]
        [LabelText("屏幕尺寸")]
        public string ScreenSize; // 设备的屏幕尺寸，单位可以是英寸或厘米。
        [TabGroup("A", "系统信息")]

        [DisplayAsString]
        [LabelText("屏幕分辨率")]
        public string ScreenResolution; // 屏幕的分辨率，例如1920x1080、2560x1440等。



        public void InitSystemInfo()
        {
            // 初始化设备名称
            ComputerName = SystemInfo.deviceName;

            // 初始化设备类型
            if (SystemInfo.deviceType == DeviceType.Desktop)
            {
                ComputerType = "台式机";
            }
            else if (SystemInfo.deviceType == DeviceType.Handheld)
            {
                ComputerType = "手持设备";
            }
            else if (SystemInfo.deviceType == DeviceType.Console)
            {
                ComputerType = "游戏机";
            }
            else if (SystemInfo.deviceType == DeviceType.Unknown)
            {
                ComputerType = "未知设备";
            }
            else
            {
                ComputerType = "笔记本电脑";
            }

            // 初始化设备型号
            ComputerModel = SystemInfo.deviceModel;

            // 初始化显卡名称
            CardName = SystemInfo.graphicsDeviceName;

            // 初始化显存大小
            CardMemory = SystemInfo.graphicsMemorySize.ToString() + " MB";

            // 初始化内存大小
            MemorySize = (SystemInfo.systemMemorySize / 1024).ToString() + " GB";

            // 初始化处理器型号
            CPUModel = SystemInfo.processorType;

            // 初始化处理器核心数
            CPUCores = SystemInfo.processorCount;

            // 初始化处理器频率
            CPUFrequency = SystemInfo.processorFrequency.ToString() + " MHz";

            // 初始化硬盘型号
            HardDriveModel = SystemInfo.deviceModel;

            // 初始化硬盘容量
            long totalSize = 0;
            foreach (DriveInfo drive in DriveInfo.GetDrives())
            {
                if (drive.IsReady)
                {
                    totalSize += drive.TotalSize;
                }
            }
            HardDriveSize = (totalSize / (1024 * 1024 * 1024)).ToString() + " GB";

            // 初始化操作系统
            OperatingSystem = SystemInfo.operatingSystem;

            // 初始化屏幕尺寸
            ScreenSize = Screen.currentResolution.width.ToString() + " x " + Screen.currentResolution.height.ToString();

            // 初始化屏幕分辨率
            ScreenResolution = Screen.currentResolution.width.ToString() + " x " + Screen.currentResolution.height.ToString();
        }




        [TabGroup("A", "系统信息")]
        [LabelText("")]
        [Button("Open PersistentDataPath")]
        public void OpenPersistentPath()
        {
            Application.OpenURL(Application.persistentDataPath);
        }
        
        [TabGroup("A", "系统信息")]
        [LabelText("")]
        [Button("Open DataPath")]
        public void OpenDataPath()
        {
            Application.OpenURL(Application.dataPath);
        }
        
        [TabGroup("A", "系统信息")]
        [LabelText("")]
        [Button("Open StreamingAssetPath")]
        public void OpenStreamingPath()
        {
            Application.OpenURL(Application.streamingAssetsPath);
        }
        
        [TabGroup("A", "系统信息")]
        [LabelText("")]
        [Button("Open LogFilePath")]
        public void OpenLogPath()
        {
            Application.OpenURL(Application.consoleLogPath);
        }

        
        [TabGroup("A", "系统信息")]
        [LabelText("")]
        [Button("Open TemporaryCachePath")]
        public void OpenCahcePath()
        {
            Application.OpenURL(Application.temporaryCachePath);
        }
        #endregion



    }
}
