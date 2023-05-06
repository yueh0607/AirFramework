/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/6 12:23:04
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
