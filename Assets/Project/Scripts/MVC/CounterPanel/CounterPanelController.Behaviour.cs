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
	public partial class CounterPanel: Controller<CounterPanelView>
	{
		
		public override void OnLoad()
		{
			base.OnLoad();
			//Write ... here
		}
		
		public override void OnUnload()
		{
			base.OnUnload();
			//Write ... here
		}
		
		public async override AsyncTask OnShow()
		{
			await Async.Complete();
		}
		
		public async override AsyncTask OnHide()
		{
			await Async.Complete();
		}
	}
}
