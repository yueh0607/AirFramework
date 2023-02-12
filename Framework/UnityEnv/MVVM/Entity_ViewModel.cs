namespace AirFramework
{
    /// <summary>
    /// 在VM层内，用户只需要进行数据绑定，非特殊情况下不建议做其他操作
    /// </summary>
    public class ViewModel : Entity
    {
        public View view;
        public Model model;
        

        public void OnBindProperty()
        {
            
        }
        
    }


}
