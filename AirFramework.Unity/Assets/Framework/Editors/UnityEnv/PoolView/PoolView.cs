using AirFramework;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace AirEditor
{
    public class PoolView : EditorWindow
    {
        [MenuItem("PoolView", menuItem = "AirFramework/PoolView")]
        static void Open()
        {
            var win = GetWindow<PoolView>();
            win.Show();
        }


        const float space = 0.0f;

        string text = string.Empty, text2 = string.Empty;

        List<WeakReference> rented = new List<WeakReference>(), alive = new List<WeakReference>();

        private void Update()
        {
            if (!Application.isPlaying) return;
            rented.Clear(); alive.Clear();
            Framework.Pool.ForeachPools((x) =>
            {
                x.RemoveDeadObj();
            });
            Framework.Pool.ForeachPools((x) =>
            {
                rented.AddRange(x.GetAllRented());
            });
            Framework.Pool.ForeachPools((x) =>
            {
                alive.AddRange(x.GetAllAlive());
            });
        }

        Vector2 pos1 = Vector2.zero, pos2 = Vector2.zero;
        private void OnGUI()
        {
            //float width = position.size.x;
            //float sp = position.size.y * space;

            //GUILayout.BeginHorizontal();
            //DrawInputTextField(ref text);
            //DrawInputTextField(ref text2);
            //GUILayout.EndHorizontal();

            //Color color = Handles.color;
            //Handles.color = Color.grey;
            //Handles.
            //DrawLine(new Vector2(width / 2, sp), new Vector2(width / 2, this.position.size.y - sp), 1);
            //Handles.color = color;

            if (!Application.isPlaying) return;
            //GUILayout.BeginHorizontal();
            GUILayout.Label("Pool");
            DrawList(alive, ref pos1);
            GUILayout.Label("Rented");
            DrawList(rented, ref pos2);
            //GUILayout.EndHorizontal();
        }

        private GUIStyle TextFieldRoundEdge;
        private GUIStyle TextFieldRoundEdgeCancelButton;
        private GUIStyle TextFieldRoundEdgeCancelButtonEmpty;
        private GUIStyle TransparentTextField;
        /// <summary>
        /// 绘制输入框，放在OnGUI函数里
        /// </summary>
        private void DrawInputTextField(ref string m_InputSearchText)
        {
            if (TextFieldRoundEdge == null)
            {
                TextFieldRoundEdge = new GUIStyle("SearchTextField");
                TextFieldRoundEdgeCancelButton = new GUIStyle("SearchCancelButton");
                TextFieldRoundEdgeCancelButtonEmpty = new GUIStyle("SearchCancelButtonEmpty");
                TransparentTextField = new GUIStyle(EditorStyles.whiteLabel);
                TransparentTextField.normal.textColor = EditorStyles.textField.normal.textColor;
            }

            //获取当前输入框的Rect(位置大小)
            Rect position = EditorGUILayout.GetControlRect();
            //设置圆角style的GUIStyle
            GUIStyle textFieldRoundEdge = TextFieldRoundEdge;
            //设置输入框的GUIStyle为透明，所以看到的“输入框”是TextFieldRoundEdge的风格
            GUIStyle transparentTextField = TransparentTextField;
            //选择取消按钮(x)的GUIStyle
            GUIStyle gUIStyle = (m_InputSearchText != "") ? TextFieldRoundEdgeCancelButton : TextFieldRoundEdgeCancelButtonEmpty;

            //输入框的水平位置向左移动取消按钮宽度的距离
            position.width -= gUIStyle.fixedWidth;
            //如果面板重绘
            if (Event.current.type == EventType.Repaint)
            {
                //根据是否是专业版来选取颜色
                GUI.contentColor = (EditorGUIUtility.isProSkin ? Color.black : new Color(0f, 0f, 0f, 0.5f));
                //当没有输入的时候提示“请输入”
                if (string.IsNullOrEmpty(m_InputSearchText))
                {
                    textFieldRoundEdge.Draw(position, new GUIContent("请输入"), 0);
                }
                else
                {
                    textFieldRoundEdge.Draw(position, new GUIContent(""), 0);
                }
                //因为是“全局变量”，用完要重置回来
                GUI.contentColor = Color.white;
            }
            Rect rect = position;
            //为了空出左边那个放大镜的位置
            float num = textFieldRoundEdge.CalcSize(new GUIContent("")).x - 2f;
            rect.width -= num;
            rect.x += num;
            rect.y += 1f;//为了和后面的style对其

            m_InputSearchText = EditorGUI.TextField(rect, m_InputSearchText, transparentTextField);
            //绘制取消按钮，位置要在输入框右边
            position.x += position.width;
            position.width = gUIStyle.fixedWidth;
            position.height = gUIStyle.fixedHeight;
            if (GUI.Button(position, GUIContent.none, gUIStyle) && m_InputSearchText != "")
            {
                m_InputSearchText = "";
                //用户是否做了输入
                GUI.changed = true;
                //把焦点移开输入框
                GUIUtility.keyboardControl = 0;
            }
        }


        private void DrawList(List<WeakReference> refs, ref Vector2 pos)
        {
            pos = GUILayout.BeginScrollView(pos);
            GUILayout.BeginVertical();
            foreach (WeakReference weakRef in refs)
            {
                if (weakRef.IsAlive)
                {
                    string str = weakRef.Target.GetType().Name;
                    Unit unit = weakRef.Target as Unit;
                    if (unit != null) str += $" (ID={unit.ID})";
                    GUILayout.TextArea(str);
                }
            }
            GUILayout.EndVertical();
            GUILayout.EndScrollView();
        }
    }
}
