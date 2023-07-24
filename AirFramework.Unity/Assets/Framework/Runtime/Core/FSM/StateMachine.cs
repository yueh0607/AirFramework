namespace AirFramework
{

    public abstract class AbstractState : PoolableObject, IUpdate
    {
        private StateMachine machine = null;
        public StateMachine Machine
        {
            get
            {
                return machine;
            }
            internal set
            {
                machine = value;
            }
        }
        public abstract void OnEnterState();
        public abstract void OnExitState();
        public abstract void OnStayState(float deltaTime);

        public override void OnAllocate() { }

        public override void OnRecycle()
        {
            OnExitState();
            machine = null;
        }

        void IUpdate.Update(float deltaTime)
        {
            OnStayState(deltaTime);
        }
    }

    public class StateMachine : PoolableObject
    {
        public object Current { get; private set; } = default;
        public void Move<T>() where T : class
        {
            typeof(T).IfAbstractThrowException();
            if (Current != default)
            {
                Framework.Pool.Recycle(Current);
            }
            Current = Framework.Pool.Allocate<T>();
        }
        public void MoveState<T>() where T : AbstractState
        {
            typeof(T).IfAbstractThrowException();
            if (Current != default)
            {
                Framework.Pool.Recycle(Current);
            }

            var state = Framework.Pool.Allocate<T>();
            Current = state;
            state.Machine = this;
            state.OnEnterState();
        }

        public override void OnAllocate()
        {

        }

        public override void OnRecycle()
        {
            Current = default;
        }
    }
}
