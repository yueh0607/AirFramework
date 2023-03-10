namespace AirFramework
{

    public class MVVMGroup:Entity
    {
        /// <summary>
        /// 模型
        /// </summary>
        public Model Model { get; set; }
        /// <summary>
        /// 视图模型
        /// </summary>
        public ViewModel ViewModel { get; set; }
        /// <summary>
        /// 视图
        /// </summary>
        public View View { get; set; }
    }
}
