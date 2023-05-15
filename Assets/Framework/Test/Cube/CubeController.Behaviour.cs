/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 17:31:39
 * Description : Describe the function here.
************************************************************************************/

using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;
using YooAsset;
using UnityEngine;
namespace MyNamespace
{
	public partial class Cube: Controller<CubeView>
	{
		Tween scaleTween;
		Tween posTween;
		public override void OnLoad()
		{
			base.OnLoad();
			scaleTween = TView.Cube_TweenPlayer.GetTween(TView.Cube_Transform_LocalScale, Vector3.zero, Vector3.one);
			posTween = Tween.CreateFromPool(Vector3.zero, Vector3.one * 10, TView.Cube_Transform_Position);
			posTween.SetCurve(EaseCurve.InOutBounce);
			posTween.SetDuration(3f);
		}
		
		public override void OnUnload()
		{
			base.OnUnload();
			scaleTween.Dispose();
			posTween.Dispose();
		}
		


		public async AsyncTask DoScale()
		{
            TView.Cube_Transform_LocalScale.Value = Vector3.zero;
            scaleTween.SetDirection(PlayDirection.Forward);
            await scaleTween.PlayAsync();
        }
		public async AsyncTask DoPos()

		{
			TView.Cube_Transform_Position.Value = Vector3.zero;
			posTween.SetDirection(PlayDirection.Forward);
			await posTween.PlayAsync();
		}
        public async AsyncTask DoScaleBack()
        {

            scaleTween.SetDirection(PlayDirection.Backward);
            await scaleTween.PlayAsync();
        }
        public async AsyncTask DoPosBack()

        {

            posTween.SetDirection(PlayDirection.Backward);
            await posTween.PlayAsync();
        }


        public async override AsyncTask OnShow()
		{
			await Async.WaitAll(DoScale(),DoPos());
		}
		
		public async override AsyncTask OnHide()
		{
            await Async.WaitAll(DoScaleBack(), DoPosBack());
        }
	}
}
