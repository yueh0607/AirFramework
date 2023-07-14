using System;
using UnityEngine;

namespace AirFramework
{

    public class TaskModule : AbstractModule
    {
        private MonoBehaviour mono;
        public MonoBehaviour Mono => mono;

        public event Action UpdateTask = null;

        public override void OnCreate()
        {
            GameObject driver = new GameObject("[Module.AsyncTask.Driver]");
            GameObject.DontDestroyOnLoad(driver);
            mono = driver.AddComponent<TaskDriver>();
        }

        public override void Update(float deltaTime)
        {
            UpdateTask?.Invoke();
        }

        protected override void OnDispose()
        {
            UpdateTask = null;
            GameObject.Destroy(mono.gameObject);
        }
    }
}