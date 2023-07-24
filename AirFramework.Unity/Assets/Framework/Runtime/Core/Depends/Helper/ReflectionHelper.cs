
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace AirFramework.Utility
{
    public static class ReflectionHelper
    {

        public static bool HasInterface(this Type type, Type _interface)
        {
            return _interface.IsAssignableFrom(type);
        }

        /// <summary>
        /// 判断是否派生于某泛型类,参数为 typeof(XXX<>)
        /// </summary>
        /// <param name="genericType"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public static bool IsSubclassOfRawGeneric(this Type type, Type genericType)
        {
            while (type != null && type != typeof(object))
            {
                var currentType = type.IsGenericType ? type.GetGenericTypeDefinition() : type;
                if (genericType == currentType)
                    return true;
                type = type.BaseType;
            }
            return false;
        }

        /// <summary>
        /// 获取父类及更高的类的指定泛型类信息,例如获取父类  xxx<T>需要给出xxx<>，不存在返回null
        /// </summary>
        /// <param name="type"></param>
        /// <param name="genericType"></param>
        /// <returns></returns>
        public static Type GetRawGeneric(this Type type, Type genericType)
        {

            while (type != null && type != typeof(object))
            {
                var currentType = type.IsGenericType ? type.GetGenericTypeDefinition() : type;
                if (genericType == currentType) return currentType.MakeGenericType(type.GetGenericArguments());
                type = type.BaseType;
            }
            return null;
        }

        /// <summary>
        /// 反射获取对象的公开实例字段，以及可读可写的属性
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static List<string> GetMemberStringsByReflection(object obj)
        {
            var fields = FindFields(obj);
            var properties = FindProperty(obj);
            var members = MergeInfos(fields, properties);
            var list = GetMemberString(members);

            return list;
        }
        /// <summary>
        /// 通过成员列表获取成员名列表
        /// </summary>
        /// <param name="members"></param>
        /// <returns></returns>
        public static List<string> GetMemberString(List<MemberInfo> members)
        {
            List<string> result = new List<string>();


            foreach (MemberInfo member in members)
            {
                result.Add(member.Name);
            }
            return result;
        }

        /// <summary>
        /// 合并属性字段列表为成员列表
        /// </summary>
        /// <param name="f1"></param>
        /// <param name="p1"></param>
        /// <returns></returns>
        public static List<MemberInfo> MergeInfos(List<FieldInfo> f1, List<PropertyInfo> p1)
        {
            List<MemberInfo> members = new List<MemberInfo>();
            foreach (FieldInfo f2 in f1)
            {
                members.Add(f2);
            }
            foreach (PropertyInfo p2 in p1)
            {
                members.Add(p2);
            }
            return members;
        }

        /// <summary>
        /// 获取全部公开实例字段
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static List<FieldInfo> FindFields(object obj)
        {
            return FindFields(obj.GetType());
        }

        public static List<FieldInfo> FindFields(Type type)
        {
            FieldInfo[] fieldsArray = type.GetFields(BindingFlags.Public | BindingFlags.Instance);

            List<FieldInfo> fields = new List<FieldInfo>();

            foreach (FieldInfo p in fieldsArray)
            {
                if (p.IsLiteral || p.IsInitOnly) continue;
                fields.Add(p);
            }

            return fields;
        }

        /// <summary>
        /// 获取对象的全部公开实例可读可写属性
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static List<PropertyInfo> FindProperty(object obj)
        {
            return FindProperty(obj.GetType());
        }
        public static List<PropertyInfo> FindProperty(Type type)
        {
            PropertyInfo[] pros = type.GetProperties(BindingFlags.Public | BindingFlags.Instance);
            List<PropertyInfo> properties = new List<PropertyInfo>();
            foreach (PropertyInfo p in pros)
            {
                if (p.CanRead && p.CanWrite) properties.Add(p);
            }
            return properties;
        }

        /// <summary>
        /// 通过名字获取属性或字段
        /// </summary>
        /// <param name="name"></param>
        /// <param name="origin"></param>
        /// <returns></returns>
        public static Type GetFieldOrPropertyTypeByName(string name, object origin)
        {
            return GetFieldOrPropertyTypeByName(name, origin.GetType());
        }
        /// <summary>
        /// 通过名字获取属性或字段
        /// </summary>
        /// <param name="name"></param>
        /// <param name="origin"></param>
        /// <returns></returns>
        public static Type GetFieldOrPropertyTypeByName(string name, Type origin)
        {
            var fi = origin.GetField(name);
            var pi = origin.GetProperty(name);
            return fi?.FieldType ?? pi?.PropertyType;
        }
        /// <summary>
        /// 找到物体全部的组件
        /// </summary>
        /// <param name="gameObject"></param>
        /// <returns></returns>
        public static List<Component> FindAllComponents(GameObject gameObject)
        {
            Component[] components = gameObject.GetComponents<Component>();

            return components.ToList();
        }

        /// <summary>
        /// 从T类型列表到类名字符串列表的转换
        /// </summary>
        /// <param name="components"></param>
        /// <returns></returns>
        public static List<string> ComponentsToString<T>(List<T> components)
        {
            List<string> result = new List<string>();

            foreach (T comp in components)
            {
                result.Add(comp.GetType().Name);
            }
            return result;
        }


        public static List<Type> GetTypesFromAllAssemblies(Func<Type, bool> condition=null)
        {
            List<Type> result = new List<Type>();
            Assembly[] ass = AppDomain.CurrentDomain.GetAssemblies();
            for (int i = 0; i < ass.Length; i++)
            {
                var assType = ass[i].GetTypes();
                foreach (var type in assType)
                {
                    if (condition==null||condition(type))
                    {
                        result.Add(type);
                    }
                }
            }
            return result;
        }
    }
}
