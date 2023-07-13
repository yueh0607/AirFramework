using System;
using System.Collections.Generic;

namespace CoFramework.Events
{
    public static class Extensions_Condition
    {
        private static Queue<ConditionMotor> pool = new Queue<ConditionMotor>();
        public class ConditionMotor
        {
            /// <summary>
            /// 最大对象池缓存数量
            /// </summary>
            public static uint MaxCount { get; set; } = 100;
            private EventModule Module { get; set; } = null;

            internal static ConditionMotor Create()
            {
                if (pool.TryDequeue(out var motor)) return motor;
                else return new ConditionMotor();
            }
            internal static void Recycle(ConditionMotor motor)
            {
                motor.action = null;
                motor.removeWhen = null;
                motor.invokeWhen = null;
                if (pool.Count < ConditionMotor.MaxCount) pool.Enqueue(motor);
            }

            public ConditionMotor() => Module = Framework.GetModule<EventModule>();

            private void Update(float x)
            {
                if (invokeWhen == null ? true : invokeWhen())
                {
                    action?.Invoke();
                }
                if (removeWhen == null ? false : removeWhen())
                {
                    Module.Operator<IUpdate>().UnSubscribe(Update);
                    Recycle(this);
                }
            }
            internal ConditionMotor SetUpdateInvoke(Action action)
            {
                this.action = action;
                Module.Operator<IUpdate>().Subscribe(Update);
                return this;
            }
            private void LateUpdate()
            {
                if (invokeWhen == null ? true : invokeWhen())
                {
                    action?.Invoke();
                }
                if (removeWhen == null ? false : removeWhen())
                {
                    Module.Operator<ILateUpdate>().UnSubscribe(LateUpdate);
                    Recycle(this);
                }
            }

            internal ConditionMotor SetLateUpdateInvoke(Action action)
            {
                this.action = action;
                Module.Operator<ILateUpdate>().Subscribe(LateUpdate);
                return this;
            }

            private void FixedUpdate()
            {
                if (invokeWhen == null ? true : invokeWhen())
                {
                    action?.Invoke();
                }
                if (removeWhen == null ? false : removeWhen())
                {
                    Module.Operator<ILateUpdate>().UnSubscribe(FixedUpdate);
                    Recycle(this);
                }
            }

            internal ConditionMotor SetFixedUpdateInvoke(Action action)
            {
                this.action = action;
                Module.Operator<ILateUpdate>().Subscribe(FixedUpdate);
                return this;
            }


            private Action action = null;
            private Func<bool> removeWhen = null;
            private Func<bool> invokeWhen = null;


            /// <summary>
            /// 在条件成熟时移除注册
            /// </summary>
            /// <param name="rm"></param>
            /// <returns></returns>
            public ConditionMotor RemoveWhen(Func<bool> rm)
            {
                removeWhen = rm;
                return this;
            }
            /// <summary>
            /// 在条件成熟时执行事件
            /// </summary>
            /// <param name="im"></param>
            /// <returns></returns>
            public ConditionMotor InvokeWhen(Func<bool> im)
            {
                invokeWhen = im;
                return this;
            }
        }



        public static ConditionMotor Invoke(this ICoVarOperator<IUpdate> oper, Action action)
        {
            var motor = ConditionMotor.Create();
            return motor.SetUpdateInvoke(action);
        }
        public static ConditionMotor Invoke(this ICoVarOperator<ILateUpdate> oper, Action action)
        {
            var motor = ConditionMotor.Create();
            return motor.SetUpdateInvoke(action);
        }
        public static ConditionMotor Invoke(this ICoVarOperator<IFixedUpdate> oper, Action action)
        {
            var motor = ConditionMotor.Create();
            return motor.SetUpdateInvoke(action);
        }
    }
}
