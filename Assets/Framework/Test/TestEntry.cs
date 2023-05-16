/***********************************************************************************
 * Author      : yueh0607
 * Version     : 2021.3.22f1c1
 * Date        : 2023/5/14 17:42:46
 * Description : Describe the function here.
************************************************************************************/


using System;
using System.Collections;
using System.Collections.Generic;
using AirFramework;

namespace MyNamespace
{
    [FrameworkInitialize]
    public class TestEntry : Unit
    {

        public TestEntry() 
        { 
            LoadAsync();
        }
        public async void LoadAsync()
        {
            await Framework.Res.InitializePackage();

            //await Framework.MVC.Show<Cube>();
            //await Async.Delay(3);

            //await Framework.MVC.Hide<Cube>();

            //await Async.Delay(3);

            await Framework.Models.LoadAllAsync();
            await Framework.UI.Open<CounterPanel>();

            await Async.Delay(3);
            await Framework.UI.Close<CounterPanel>();
            await Framework.Models.SaveAllAsync();
        }


        protected override void OnDispose()
        {
            
        }
    }
}

