using UnityEditor;

namespace AirFramework.Editor
{
    public class CreateFormatHelper
    {

        [MenuItem("Assets/Create/Format/C# Script", false, 0)]
        public static void CreateCsharpScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"
using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace {FrameworkSettings.instance.defaultNamespace}
{{
    public class #NAME#
    {{
        
    }}
}}

");

        }



        //        [MenuItem("Assets/Create/Format/Model Script", false, 0)]
        //        public static void CreateModelScript()
        //        {
        //            FileCreateHelper.CreateScriptWithTitle(@$"
        //using AirFramework;

        //namespace {FrameworkSettings.instance.defaultNamespace}
        //{{
        //    public class #NAME# : {nameof(IModel)}
        //    {{

        //    }}
        //}}

        //");

        //        }
        [MenuItem("Assets/Create/Format/Mono Script", false, 0)]
        public static void CreateMonoScript()
        {

            FileCreateHelper.CreateScriptWithTitle(@$"
using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace {FrameworkSettings.instance.defaultNamespace}
{{
    public class #NAME# : MonoBehaviour
    {{
        private void Awake()
        {{
            
        }}
        private void Start()
        {{
            
        }}
        private void Update()
        {{
            
        }}
    }}
}}

");


        }

        [MenuItem("Assets/Create/Format/Unit Script", false, 0)]
        public static void CreateUnitScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"
using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace {FrameworkSettings.instance.defaultNamespace}
{{
    public class #NAME# : Unit
    {{
        protected override void OnDispose()
        {{
            
        }}
    }}
}}

");
        }



        [MenuItem("Assets/Create/Format/PooloableObject Script", false, 0)]
        public static void CreatePoolScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"
using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace {FrameworkSettings.instance.defaultNamespace}
{{
    public class #NAME# : PoolableObject
    {{
        public override void OnAllocate()
        {{
            
        }}
        public override void OnRecycle()
        {{
            
        }}
    }}
}}

");
        }





        [MenuItem("Assets/Create/Format/Interface Script", false, 0)]
        public static void CreateInterfaceScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"

namespace {FrameworkSettings.instance.defaultNamespace}
{{
    public interface #NAME#
    {{
        
    }}
}}
");
        }

    }
}






