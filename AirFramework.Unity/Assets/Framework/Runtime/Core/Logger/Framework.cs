using AirFramework.Internal;

namespace AirFramework
{
    public partial class Framework
    {
        public static ILogger Log => AirEngine.Logger;
    }
}
