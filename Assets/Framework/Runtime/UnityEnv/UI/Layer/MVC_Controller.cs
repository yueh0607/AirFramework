using System;

namespace AirFramework
{
    /// <summary>
    /// 在VM层内，用户只需要进行数据绑定，非特殊情况下不建议做其他操作
    /// </summary>
    public abstract class Controller : UnitGameObject<Controller>
    {
        public abstract void OnOpenPanel();


        public abstract void OnClosePanel();

        public abstract void OnLoadPanel();

        public abstract void OnUnloadPanel();

        protected abstract void OnBindProperty();
        protected abstract void OnUnBindProperty();
        protected abstract void OnBindEvents();
        protected abstract void OnUnBindEvents();

        protected override void OnAllocateObject()
        {


            OnBindEvents();
            OnBindProperty();
        }
        protected override void OnRecycleObject()
        {
            OnUnBindEvents();
            OnUnBindProperty();
        }
        protected K Model<K>() where K : Model
        {
            return Framework.UI.Models.Get<K>();
        }
    }
    public abstract class Controller<T> : Controller where T : View
    {
        public Controller()
        {
            if (typeof(T).IsAbstract) throw new InvalidOperationException("Abstract classes cannot be used as generic parameters for this class");
        }
        public T View { get; set; }

        protected override void OnAllocateObject()
        {
            View = base.gameObject.AddComponent<T>();
            base.OnAllocateObject();

        }
        protected override void OnRecycleObject()
        {
            View = null;
            base.OnRecycleObject();
        }
    }

}
