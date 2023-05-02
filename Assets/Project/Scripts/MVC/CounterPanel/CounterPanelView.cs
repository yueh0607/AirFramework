/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/2 16:31:41
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
namespace MyNamespace
{
	public class CounterPanelView : View
	{
		public AirFramework.TweenPlayer CounterPanel_TweenPlayer;
		public UnityEngine.RectTransform CounterPanel_RectTransform;
		public BindablePort<UnityEngine.Vector3> CounterPanel_RectTransform_Position;
		public UnityEngine.UI.Button Plus_Button;
		public UnityEngine.UI.Button Minus_Button;
		public UnityEngine.UI.Text Monitor_Text;
		public BindablePort<System.String> Monitor_Text_Text;
		public override void InitComponents()
		{
			CounterPanel_TweenPlayer = transform.GetComponent<AirFramework.TweenPlayer>();
			CounterPanel_RectTransform = transform.GetComponent<UnityEngine.RectTransform>();
			CounterPanel_RectTransform_Position = new((value)=>CounterPanel_RectTransform.position=value,()=>CounterPanel_RectTransform.position);
			Plus_Button = transform.Find("Plus").GetComponent<UnityEngine.UI.Button>();
			Minus_Button = transform.Find("Minus").GetComponent<UnityEngine.UI.Button>();
			Monitor_Text = transform.Find("Monitor").GetComponent<UnityEngine.UI.Text>();
			Monitor_Text_Text = new((value)=>Monitor_Text.text=value,()=>Monitor_Text.text);
		}
	}
}
