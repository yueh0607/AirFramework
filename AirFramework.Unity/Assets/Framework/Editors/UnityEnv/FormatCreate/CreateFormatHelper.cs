using AirFramework;
using UnityEditor;

namespace AirEditor
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

namespace {FrameworkSettings.Instance.defaultNamespace}
{{
    public class #NAME#
    {{
        
    }}
}}

");

        }



        [MenuItem("Assets/Create/Format/Model Script", false, 0)]
        public static void CreateModelScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"
        using AirFramework;

        namespace {FrameworkSettings.Instance.defaultNamespace}
        {{
            public class #NAME# : {typeof(IModel).FullName}
            {{

            }}
        }}

        ");

        }
        [MenuItem("Assets/Create/Format/Mono Script", false, 0)]
        public static void CreateMonoScript()
        {

            FileCreateHelper.CreateScriptWithTitle(@$"
using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace {FrameworkSettings.Instance.defaultNamespace}
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

namespace {FrameworkSettings.Instance.defaultNamespace}
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

namespace {FrameworkSettings.Instance.defaultNamespace}
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

namespace {FrameworkSettings.Instance.defaultNamespace}
{{
    public interface #NAME#
    {{
        
    }}
}}
");
        }



        [MenuItem("Assets/Create/Format/Event Script", false, 0)]
        public static void CreateEventScript()
        {
            FileCreateHelper.CreateScriptWithTitle(@$"
namespace AirFramework
{{
    public interface #NAME# : ISendEvent, IMessageReceiver
    {{
        void #NAME#();
    }}
    public class #NAME#Handler : LifeCycleHandler<#NAME#>
    {{
        public override void OnLifeCycleRegister(#NAME# item)
        {{

            item.Operator<#NAME#>().Subscribe(item.#NAME#);
        }}

        public override void OnLifeCycleUnRegister(#NAME# item)
        {{
            item.Operator<#NAME#>().UnSubscribe(item.#NAME#);
        }}
    }}
}}

");
        }
    }
}






