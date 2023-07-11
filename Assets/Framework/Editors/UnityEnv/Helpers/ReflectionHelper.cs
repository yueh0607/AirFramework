using AirFramework;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace AirFrameworkEditor
{
    public class ReflectionHelper : MonoBehaviour
    {


        public static List<string> GetMemberStringsByReflection(object obj)
        {
            var fields = FindFields(obj);
            var properties = FindProperty(obj);
            var members = MergeInfos(fields, properties);
            var list = GetMemberString(members);

            return list;
        }

        public static List<string> GetMemberString(List<MemberInfo> members)
        {
            List<string> result = new List<string>();


            foreach (MemberInfo member in members)
            {
                result.Add(member.Name);
            }
            return result;
        }

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
        public static List<FieldInfo> FindFields(object obj)
        {
            Type type = obj.GetType();

            FieldInfo[] fieldsArray = type.GetFields(BindingFlags.Public | BindingFlags.Instance);

            List<FieldInfo> fields = new List<FieldInfo>();

            foreach (FieldInfo p in fieldsArray)
            {
                if (p.IsLiteral || p.IsInitOnly) continue;
                fields.Add(p);
            }

            return fields;
        }

        public static List<PropertyInfo> FindProperty(object obj)
        {
            Type type = obj.GetType();

            PropertyInfo[] pros = type.GetProperties(BindingFlags.Public | BindingFlags.Instance);

            List<PropertyInfo> properties = new List<PropertyInfo>();

            foreach (PropertyInfo p in pros)
            {
                if (p.CanRead && p.CanWrite) properties.Add(p);

            }
           
            return properties;
        }

        public static Type GetFieldOrPropertyTypeByName(string name,object origin)
        {
            return GetFieldOrPropertyTypeByName(name, origin.GetType());
        }
        public static Type GetFieldOrPropertyTypeByName(string name, Type origin)
        {
            var fi = origin.GetField(name);
            var pi = origin.GetProperty(name);
            return fi?.FieldType??pi?.PropertyType;
        }
        public static List<Component> FindAllCompinents(GameObject gameObject)
        {
            Component[] components = gameObject.GetComponents<Component>();

            return components.ToList();
        }
        public static List<string> ComponentsToString(List<Component> components)
        {
            List<string> result = new List<string>();

            foreach (Component comp in components)
            {
                result.Add(comp.GetType().Name);
            }
            return result;
        }
    }
}
