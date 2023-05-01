/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/4/30 16:03:00
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
namespace MyNamespace
{

	public partial class CounterPanel :  Controller<CounterPanelView>
	{
		
		public override void OnBindProperty()
		{
			GetModel<CounterPanelModel>().Count.Bind(TView.Monitor_Text_Text);
		}
		
		public override void OnUnBindProperty()
		{
			GetModel<CounterPanelModel>().Count.UnBind(TView.Monitor_Text_Text);
		}
	}
}
