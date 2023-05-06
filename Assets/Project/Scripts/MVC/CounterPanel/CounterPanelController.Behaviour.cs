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
	public partial class CounterPanel: Controller<CounterPanelView>
	{
		Tween hideTween;
		public override void OnLoad()
		{
			base.OnLoad();
			hideTween = TView.CounterPanel_TweenPlayer.GetTween<float>(
				TView.CounterPanel_CanvasGroup_Alpha, 0, 1);
		}
		
		public override void OnUnload()
		{
			base.OnUnload();
			//Write ... here
			hideTween.Dispose();
		}
		
		public async override AsyncTask OnShow()
		{
			await Async.Complete();

            await hideTween.SetDirection(PlayDirection.Forward).PlayAsync();
            TView.CounterPanel_CanvasGroup_Interactable.Value = true;

        }
		
		public async override AsyncTask OnHide()
		{
			await Async.Complete();
            TView.CounterPanel_CanvasGroup_Interactable.Value = false;
            await hideTween.SetDirection(PlayDirection.Backward).PlayAsync();
        }
	}
}
