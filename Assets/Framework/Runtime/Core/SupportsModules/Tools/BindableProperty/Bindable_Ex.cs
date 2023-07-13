namespace AirFramework
{
    public static class Bindable_Ex
    {
        //string
        public static void Bind<T>(this BindableBase<T> binder, BindableBase<string> target)
        {
            binder.OnValueChanged += (oldV, newV) => target.Value = newV.ToString();
        }
        public static void UnBind<T>(this BindableBase<T> binder, BindableBase<string> target)
        {
            binder.OnValueChanged += (oldV, newV) => target.Value = newV.ToString();
        }



    }
}
