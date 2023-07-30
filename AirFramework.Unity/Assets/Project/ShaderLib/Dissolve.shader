Shader "Custom/Dissolve"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _NoiseMap ("NoiseMap", 2D) = "white" {}
        _Color_First ("DissolveColorFirst", Color) = (1, 0, 0, 1)
        _Color_Second ("DissolveColorSecond", Color) = (1, 0, 0, 1)

        _Width ("LineWidth", Range(0,1)) = 0
        _Value ("Amount", Range(0,1)) = 0
        _Diffuse("Diffuse", Color) = (1, 1, 1, 1)
    }
    SubShader
    {
        Tags 
        { 
            "RenderType"="Opaque"  
            "LightMode"="ForwardBase" 
        }
        LOD 100

        Pass
        {
            Tags 
            {
                "LightMode" = "ForwardBase"
            }
            //内部裸露，要开启双面渲染
            Cull Off
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // 让雾效生效
            #pragma multi_compile_fog

            #include "UnityCG.cginc"
            #include "Lighting.cginc"
            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                //添加Normal的传递
                float3 normal: NORMAL;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
                //自定义的法线信息
                float3 worldNormal : TEXCOORD1; // 添加了 worldNormal 属性

            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            sampler2D _NoiseMap;

            // 将 _Value 声明在全局范围
            float _Value ;
            float _Width ;
            float4 _Color_First;
            float4 _Color_Second;


            fixed4 _Diffuse;

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.worldNormal = normalize(UnityObjectToWorldNormal(v.normal));
                UNITY_TRANSFER_FOG(o, o.vertex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                //计算灰度值
                float gray = dot(tex2D(_NoiseMap, i.uv).rgb, float3(0.299, 0.587, 0.114));
                //剔除完全消融像素
                clip(gray - _Value);

                //获取环境光的属性并标准化
                fixed3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz;
                //标准化世界坐标下光源的光照方向
                fixed3 worldLightDir = normalize(_WorldSpaceLightPos0.xyz);
                //计算漫反射光照
                fixed3 diffuse = _LightColor0.rgb * _Diffuse.rgb * saturate(dot(i.worldNormal, worldLightDir));

                //计算点是否在过渡区域以及混合系数
                fixed t = 1 - smoothstep(0.0, _Width, gray - _Value);
                //根据混合系数计算消融颜色
                fixed3 dissolveColor = lerp(_Color_First, _Color_Second, t);
                dissolveColor = pow(dissolveColor, 5);


                fixed3 origin = tex2D(_MainTex,i.uv);
                // 最终颜色 = (环境光 + 漫反射光照 ) 和消融色的插值
                fixed3 finalColor =lerp(origin+ ambient + diffuse,dissolveColor,t *step(0.0001, _Value));

                // 应用雾效
                UNITY_APPLY_FOG(i.fogCoord, finalColor);
                return fixed4(finalColor, 1.0);
            }
            ENDCG
        }

        Pass
{
    Tags { "LightMode" = "ShadowCaster" }

    Name "shadowCaster"

    CGPROGRAM
    

    struct v2f
    {
        //frag需要的shadowCaster信息，包括位置、bias、depth等
        V2F_SHADOW_CASTER;
        //noise map的纹理坐标
        float2 uv0 : TEXCOORD0;
    };

    v2f vert(appdata_base v)
    {
        v2f o;
        //完成：
        //1.UnityClipSpaceShadowCasterPos：根据模型空间pos和normal，计算裁剪空间阴影位置，与光照配置中的NormalBias有关（unity_LightShadowBias.z==NormalBias）
        //2.UnityApplyLinearShadowBias：增加裁剪空间中Z值。与光照参数中的Bias、UNITY_NEAR_CLIP_VALUE、UNITY_REVERSED_Z有关
        TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
        //根据缩放和偏移计算noise map纹理坐标
        o.uv0 = TRANSFORM_TEX(v.texcoord, _NoiseMap);

        return o;
    }

    fixed4 frag(v2f i) : SV_Target
    {
        //采样noise,与阈值比较，未通过不显示阴影
        fixed3 noise = tex2D(_NoiseMap, i.uv0).rgb;
        clip(noise.r - _DissolveThreshold);
        //平行光、聚光灯情况下返回 0（黑色）
        //点光源情况下调用UnityEncodeCubeShadowDepth得到cubemap shadow值
        SHADOW_CASTER_FRAGMENT(i)
    }

    ENDCG
}
}



}