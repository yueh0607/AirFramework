/*******************************************************
 * Code Generated By AirFramework
 * DateTime : 2023/8/2 14:04:37
 * UVersion : 2021.3.24f1c1
 *******************************************************/

namespace AirFramework.MV.RefBuild.Cache
{
    public class CounterPanel : UnityEngine.MonoBehaviour
    {
        public UnityEngine.CanvasGroup CounterPanel_CanvasGroup { get; set; } = default;
        public AirFramework.MV.RefBuild.BindableProperty<System.Single> CounterPanel_CanvasGroup_alpha { get; set; } = default;


        public void InitRefs()
        {
            CounterPanel_CanvasGroup = GetComponent<UnityEngine.CanvasGroup>();
            CounterPanel_CanvasGroup_alpha = new AirFramework.MV.RefBuild.BindableProperty<System.Single>(() => CounterPanel_CanvasGroup.alpha, (x) => CounterPanel_CanvasGroup.alpha = x, false);

        }


        private void Awake()
        {
            InitRefs();
        }

    }

}
