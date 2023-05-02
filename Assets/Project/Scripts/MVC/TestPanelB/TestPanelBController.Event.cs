/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/2 15:28:35
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
namespace MyNamespace
{
	public partial class TestPanelB : Controller<TestPanelBView>
	{
		public override void OnBindEvents()
		{
			TView.Plus_Button.Bind(Plus_Button_OnClick);
			TView.Minus_Button.Bind(Minus_Button_OnClick);
		}
		public override void OnUnBindEvents()
		{
			TView.Plus_Button.UnBind(Plus_Button_OnClick);
			TView.Minus_Button.UnBind(Minus_Button_OnClick);
		}
		
		private void Plus_Button_OnClick()
		{
			
		}
		
		private void Minus_Button_OnClick()
		{
			
		}
	}
}
