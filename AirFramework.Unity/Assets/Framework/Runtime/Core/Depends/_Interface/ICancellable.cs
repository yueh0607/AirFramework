namespace AirFramework
{
    public interface ITaskCancelatable
    {
        void OnCancel();

        void OnPause();

        void OnResume();

    }
}
