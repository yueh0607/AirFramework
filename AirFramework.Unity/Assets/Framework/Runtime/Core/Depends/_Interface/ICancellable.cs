using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public interface ITaskCancelatable
    {
        void OnCancel();

        void OnPause();

        void OnResume();

    }
}
