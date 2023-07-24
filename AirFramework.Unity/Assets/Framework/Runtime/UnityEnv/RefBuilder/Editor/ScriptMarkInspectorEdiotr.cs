using AirFramework.Utility.RefBuild;
using AirFramework.Utility;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
namespace AirFramework.EngineEditor
{

    [CustomEditor(typeof(ScriptMark))]

    public class ScriptMarkEditor : Editor
    {
        SerializedProperty buildTarget;
        SerializedProperty buildProperty;


        private void OnEnable()
        {
            buildProperty = serializedObject.FindProperty($"{nameof(ScriptMark.buildProperty)}");
            buildTarget = serializedObject.FindProperty($"{nameof(ScriptMark.buildTarget)}");
        }


        int propertyMask = 0;
        int componentIndex = 0;
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            //反射组件
            var components = ReflectionHelper.FindAllComponents(((ScriptMark)serializedObject.targetObject).gameObject);
            components.RemoveAll((x) => x.GetType() == typeof(ScriptMark));
            //生成选项
            List<string> comStr = ReflectionHelper.ComponentsToString(components);
            //序列化选项恢复
            string current = ((Component)buildTarget.objectReferenceValue)?.GetType().Name;
            componentIndex = Math.Clamp(comStr.IndexOf(current), 0, components.Count - 1);

            componentIndex = EditorGUILayout.Popup("组件标记", componentIndex, comStr.ToArray());

            buildTarget.objectReferenceValue = components[componentIndex];
            //展示属性
            // EditorGUILayout.PropertyField(buildTarget, new GUIContent("组件标记"));





            //反射可读写的成员变量
            List<string> pros = ReflectionHelper.GetMemberStringsByReflection(buildTarget.objectReferenceValue);
            string property = buildProperty.stringValue;

            //分割为选择
            List<string> options = MaskHelper.SplitToMaskOptions(property);
            //解析为映射id
            List<int> index = MaskHelper.GetIndexFromString(pros, options);
            //获取掩码
            propertyMask = MaskHelper.GetMaskFromIndex(index);
            //展示列表
            propertyMask = EditorGUILayout.MaskField("属性标记", propertyMask, pros.ToArray());

            //存储mask
            index = MaskHelper.GetIndexFromMask(propertyMask, pros.Count);
            var newOption = MaskHelper.GetStringFromIndex(pros, index);
            var newStr = MaskHelper.MergeToMaskString(newOption);

            buildProperty.stringValue = newStr;

            serializedObject.ApplyModifiedProperties();
        }




    }
}
