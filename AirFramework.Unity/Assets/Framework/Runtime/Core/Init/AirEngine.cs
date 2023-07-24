using AirFramework.Utility;
using System;
using System.Collections;
using System.Collections.Generic;

namespace AirFramework.Internal
{
    public static class AirEngine
    {
        public static void Initialize(Action<IEnumerator> CoroutineRunner)
        {
            //协程执行器
            coroutineRunner = CoroutineRunner;
            //池管理器
            Framework.CreateModule<PoolManager>();
            //事件管理器-生命管理器
            Framework.CreateModule<MessageManager>();
            //注册驱动更新
            Framework.Message.Operator<IUpdate>().Subscribe(AirEngine.DriveUpdate);
            //部署全局程序反射初始化步骤
            ReflectInitialize();
            //异步任务
            //Framework.CreateModule<TaskModule>();
        }

        #region Driver
        /// <summary>
        /// 上一帧经历的时间
        /// </summary>
        public static float DeltaTime { get; private set; } = 0;
        /// <summary>
        /// 时间流速
        /// </summary>
        public static float TimeScale = 1;
        /// <summary>
        /// 框架Update生命周期
        /// </summary>
        public static event Action<float> Update = null;
        /// <summary>
        /// 框架调用：禁止用户手动进行调用驱动器更新函数
        /// </summary>
        public static void DriveUpdate(float deltaTime)
        {
            AirEngine.DeltaTime = deltaTime * TimeScale;

            _modules.ResetTraversalCount();
            int traversalCount = _modules.TraversalCount;
            for (int i = 0; i < traversalCount; ++i)
            {
                if (_modules.TryDequeue(out AbstractModule module, out Type key))
                {
                    module.Update(DeltaTime);
                    _modules.TryEnqueue(key, module);
                }
            }
            Update?.Invoke(deltaTime);
        }

        private static Action<IEnumerator> coroutineRunner;
        /// <summary>
        /// 开启协程
        /// </summary>
        /// <param name="enumerator"></param>
        public static void StartCoroutine(IEnumerator enumerator)
        {
            coroutineRunner.Invoke(enumerator);
        }


        /// <summary>
        /// 初始反射操作
        /// </summary>
        public static event Action<Type> InitialReflection
        {
            add
            {
                InitialReflectionBehaviourList.Add(value);
            }
            remove
            {
                InitialReflectionBehaviourList.Remove(value);
            }
        }
        private static List<Type> AllTypes = null;
        private static List<Action<Type>> InitialReflectionBehaviourList = new List<Action<Type>>();
        private static void ReflectInitialize()
        {
            ReflectionProcess.RegisterProcess();
            if (InitialReflectionBehaviourList.Count == 0) return;
            AllTypes = ReflectionHelper.GetTypesFromAllAssemblies();
            for (int j = 0; j < InitialReflectionBehaviourList.Count; j++)
            {
                for (int i = 0; i < AllTypes.Count; i++)
                {
                    InitialReflectionBehaviourList[j](AllTypes[i]);
                }
            }
            AllTypes.Clear();
            InitialReflectionBehaviourList.Clear();
            AllTypes = null;
            InitialReflectionBehaviourList = null;
        }

        #endregion

        #region Module

        private static readonly DynamicDictionary<Type, AbstractModule> _modules = new DynamicDictionary<Type, AbstractModule>();

        /// <summary>
        /// 检查是否存在模块，如果不存在则创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public static void CreateModule(Type type)
        {
            if (!type.IsSubclassOf(typeof(AbstractModule)) || type.IsAbstract || type.IsInterface) throw new InvalidOperationException($"The module must be a specific type that implements {typeof(AbstractModule).FullName}");
            if (_modules.ContainsKey(type)) return;
            _modules.Enqueue(type, (AbstractModule)Activator.CreateInstance(type));
            _modules[type].OnCreate();
        }

        /// <summary>
        /// 存在时返回模块，不存在时返回null
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static AbstractModule GetModule(Type type)
        {
            if (!type.IsSubclassOf(typeof(AbstractModule))
                || type.IsAbstract || type.IsInterface)
                throw new InvalidOperationException($"The module must be a specific type that implements {typeof(AbstractModule).FullName}");
            if (!_modules.ContainsKey(type)) return null;
            return _modules[type];
        }

        /// <summary>
        /// 销毁模块，exThrow为true时，不存在则异常，否则不存在则静默处理
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public static void DestroyModule(Type type, bool exThrow = false)
        {
            if (!type.IsSubclassOf(typeof(AbstractModule))
                || type.IsAbstract || type.IsInterface)
                throw new InvalidOperationException($"The module must be a specific type that implements {typeof(AbstractModule).FullName}");
            if (!_modules.ContainsKey(type))
            {
                if (exThrow)
                    throw new NullReferenceException("Destroying non-existent _modules is not allowed");
                else return;
            }
            _modules[type].Dispose();
            _modules.Remove(type);
        }

        /// <summary>
        /// 检查是否存在模块，如果不存在则创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public static void CreateModule<T>() where T : AbstractModule => CreateModule(typeof(T));

        /// <summary>
        /// 存在时返回模块，不存在时返回null
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : AbstractModule => (T)GetModule(typeof(T));
        /// <summary>
        /// 检查是否存在模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static bool HasModule<T>() where T : AbstractModule => _modules.ContainsKey(typeof(T));
        /// <summary>
        /// 检查是否存在模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static bool HasModule(Type type) => _modules.ContainsKey(type);

        /// <summary>
        /// 存在模块时返回，不存在时创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="parameters"></param>
        /// <returns></returns>
        public static T GetOrCreateModule<T>() where T : AbstractModule
        {
            T module = GetModule<T>();
            if (module == null) CreateModule<T>();
            module = GetModule<T>();
            return module;
        }
        /// <summary>
        /// 销毁模块，exThrow为true时，不存在则异常，否则不存在则静默处理
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public static void DestroyModule<T>(bool exThrow = false) where T : AbstractModule => DestroyModule(typeof(T), exThrow);


        #endregion





    }
}
