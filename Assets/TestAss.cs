using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using YooAsset;

public class TestAss : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(InitializeYooAsset());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator InitializeYooAsset()
    {
        Framework.Res.Initialize();
        var initParameters = new HostPlayModeParameters();
        initParameters.QueryServices = new QueryStreamingAssetsFileServices();
        initParameters.DefaultHostServer = "http://127.0.0.1/CDN1/Android/v1.0";
        initParameters.FallbackHostServer = "http://127.0.0.1/CDN2/Android/v1.0";
        yield return Framework.Res.DefaultPackage.InitializeAsync(initParameters);
        var handle = Framework.Res.LoadSync<GameObject>("MyEntity");
        GameObject.Instantiate(handle.GetAssetObject<GameObject>());
        handle.Release();
    }
}
