using System;
using System.Collections;
using System.Collections.Generic;

namespace CoFramework.Tasks
{



    public static class AsyncMonitor
    {

        private class AsyncLockComparer : IEqualityComparer<object>
        {
            public new bool Equals(object x, object y)
            {
                return System.Object.ReferenceEquals(x, y);
            }

            public int GetHashCode(object obj)
            {
                return obj.GetHashCode();
            }
        }
        private static readonly HashSet<object> _locked = new HashSet<object>(new AsyncLockComparer());

        /// <summary>
        /// 对该对象加锁，如果已经加锁则引发异常
        /// </summary>
        /// <param name="target"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void Enter(object target)
        {
            if (_locked.Contains(target)) throw new InvalidOperationException("Repeated locking of an object is not allowed");
            _locked.Add(target);
        }
        /// <summary>
        /// 尝试对对象加锁，如果已经加锁则不重复
        /// </summary>
        /// <param name="target"></param>
        public static bool TryEnter(object target)
        {
            if (!_locked.Contains(target))
                _locked.Add(target);
            else return false;
            return true;
        }

        /// <summary>
        /// 对对象解锁，如果未加锁引发异常
        /// </summary>
        /// <param name="target"></param>
        /// <exception cref="InvalidOperationException"></exception>
        public static void Exit(object target)
        {
            if (_locked.Contains(target)) throw new InvalidOperationException("Unlocking unlocked objects is not allowed");
            _locked.Remove(target);
        }
        /// <summary>
        /// 尝试对对象解锁，如果未加锁，则无效果
        /// </summary>
        /// <param name="target"></param>
        public static bool TryExit(object target)
        {
            if (_locked.Contains(target))
                _locked.Remove(target);
            else return false;
            return true;
        }
        /// <summary>
        /// 判断对象是否已经锁定
        /// </summary>
        /// <param name="target"></param>
        /// <returns></returns>
        public static bool IsLocked(object target)
        {
            return _locked.Contains(target);
        }
        /// <summary>
        /// 等待直到对象解锁
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static CoTask WaitUnlocked(object obj)
        {
            var task = CoTask.Create();
            if (!AsyncMonitor.IsLocked(obj))
            {
                task.Finish(ETaskStatus.Succeed);
                return task;
            }
            static IEnumerator WaitUnlockedTask(object obj, CoTask task)
            {
                while (true)
                {
                    if (task.Token.IsCanceld)
                    {
                        task.Finish(ETaskStatus.Failed);
                        yield break;
                    }
                    if (!task.Token.Authorization) yield return null;
                    if (AsyncMonitor.IsLocked(obj))
                    {
                        yield return null;
                    }
                    else
                    {
                        task.Finish(ETaskStatus.Succeed);
                        yield break;
                    }
                }
            }

            var module = Framework.GetModule<TaskModule>();
            module.Mono.StartCoroutine(WaitUnlockedTask(obj, task));
            return task;
        }

        /// <summary>
        /// 异步锁定对象并返回锁定句柄，结合using(await AsyncMonitor.Lock(obj)){}使用
        /// 也允许手动释放句柄
        /// 该操作分为两种情况：
        /// 1.对象未锁定：锁定对象，并执行using内的内容
        /// 2.已经锁定：等待到解锁后重新锁定，执行using内容
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public static async CoTask<LockHandle> Lock(object obj)
        {
            var handle = Framework.GlobalAllocate<LockHandle>();
            await handle.Lock(obj);
            return handle;
        }




        public class LockHandle : IDisposable
        {
            private object target = null;

            /// <summary>
            /// 等待对象解锁并重新锁定
            /// </summary>
            /// <param name="target"></param>
            /// <returns></returns>
            /// <exception cref="InvalidOperationException"></exception>
            public async CoTask Lock(object target)
            {
                if (this.target != null) throw new InvalidOperationException("lock repeatly.");
                this.target = target ?? throw new InvalidOperationException("Null cannot be locked");
                await WaitUnlocked(target);
                AsyncMonitor.TryEnter(target);
            }

            /// <summary>
            /// 解锁并释放句柄
            /// </summary>
            /// <exception cref="InvalidOperationException"></exception>
            public void Unlock()
            {
                if (target == null) throw new InvalidOperationException("Cannot unlock handle repeatly.");
                AsyncMonitor.TryExit(target);
                target = null;
                Framework.GlobalRecycle(this);
            }

            void IDisposable.Dispose()
            {
                Unlock();
            }
        }


    }
}
