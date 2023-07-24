using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using AirFramework.Internal;
namespace AirFramework
{
    public static partial class Framework
    {
        #region Time
        public static float DeltaTime 
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            get =>AirEngine.DeltaTime; 
        }

        public static float TimeScale 
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            get => AirEngine.TimeScale; 
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            set => AirEngine.TimeScale = value; 
        }

        public static event Action<float> Update
        {
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            add=> AirEngine.Update += value;
            [MethodImpl(MethodImplOptions.AggressiveInlining)]
            remove => AirEngine.Update -= value;
        }

        public static event Action<Type> InitialReflection
        {
            add=> AirEngine.InitialReflection += value;
            remove=> AirEngine.InitialReflection -= value;
        }
        #endregion


        #region Module
        /// <summary>
        /// 检查是否存在模块，如果不存在则创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void CreateModule(Type type)=>AirEngine.CreateModule(type);
        /// <summary>
        /// 存在时返回模块，不存在时返回null
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static AbstractModule GetModule(Type type)=>AirEngine.GetModule(type);

        /// <summary>
        /// 销毁模块，exThrow为true时，不存在则异常，否则不存在则静默处理
        /// </summary>
        /// <typeparam name="T"></typeparam>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void DestroyModule(Type type, bool exThrow = false)=>AirEngine.DestroyModule(type, exThrow);

        /// <summary>
        /// 检查是否存在模块，如果不存在则创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void CreateModule<T>() where T : AbstractModule => AirEngine.CreateModule(typeof(T));

        /// <summary>
        /// 存在时返回模块，不存在时返回null
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T GetModule<T>() where T : AbstractModule => AirEngine.GetModule<T>();
        /// <summary>
        /// 检查是否存在模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool HasModule<T>() where T : AbstractModule => AirEngine.HasModule<T>();
        /// <summary>
        /// 检查是否存在模块
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool HasModule(Type type) =>AirEngine.HasModule(type);
        /// <summary>
        /// 存在模块时返回，不存在时创建
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="parameters"></param>
        /// <returns></returns>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static T GetOrCreateModule<T>() where T : AbstractModule=>AirEngine.GetOrCreateModule<T>();
        /// <summary>
        /// 销毁模块，exThrow为true时，不存在则异常，否则不存在则静默处理
        /// </summary>
        /// <typeparam name="T"></typeparam>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static void DestroyModule<T>(bool exThrow = false) where T : AbstractModule => AirEngine.DestroyModule(typeof(T), exThrow);
        #endregion


 
    }
}
