using System;
using UnityEngine;

namespace CoFramework.Tasks
{
    [ModuleDepends]
    public class TaskModule : IModule
    {
        private MonoBehaviour mono;
        public MonoBehaviour Mono => mono;
        public void OnCreate(CreateParameters parameters)
        {
            GameObject driver = new GameObject("[Module.CoTask.Driver]");
            GameObject.DontDestroyOnLoad(driver);
            mono = driver.AddComponent<TaskDriver>();
        }

        public event Action UpdateTask = null;

        public void OnDestroy()
        {
            UpdateTask = null;
            GameObject.Destroy(mono.gameObject);
        }

        public void OnUpdate()
        {
            UpdateTask?.Invoke();
        }
    }
}