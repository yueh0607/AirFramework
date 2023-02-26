# AirFramework(Tentative name)
Unity3D游戏开发中小型游戏框架
始于2023.1.11  奋力开发ing....

在未开发完成之前仅建议当成工具类使用，而不是一个框架，
现在的版本迭代极快，而且编辑器拓展还不完善，可能存在某些隐藏问题请小心使用

注意目前需要自己导入Odin插件，我不建议大家使用盗版的Odin，因为本项目内使用的Odin部分在打包之后不会进入包内，也就是说编辑器里自己用没人知道

后续会给出类似Odin的编辑器插件实现上传到仓库内来解决这个问题，现阶段请不要在CSDN下载盗版的Odin，233，这里为了避嫌也不给出Odin了

# 已经实现的模块：
- 全局对象池(托管池全局申请/回收，using释放，非托管池创建)
- 全局消息机制 (全局派发/指定派发。支持自定义异步，暂不支持多线程)
- 生命周期管理(消息驱动，对象池内自动绑定)
- Unity异步编程支持(自定义task支持unity/Acdressable异步)
- 回调计时/数器(指定时间回调，时间条件广播,数量回调)
- 日志记录(按日期保存文件，Unity原生Log日志拦截，异常拦截记录，支持新的懒人Log拓展方式)
- 资源管理（采用Addressable+异步拓展）

# 未来可能实现/支持的内容(排序不代表优先级，放在这里防止我忘)：
- MVVM编程规范/UI管理器
- 热更新与Hotfix (HybirdCLR or xlua or ILRuntime)
- 简单网络模块(TCP/UDP/HTTP/Photon等简易支持)
- 代码状态机/行为树
- csv/json/binary/excel/string等序列化
- SDK管理器与快捷接入
- 游戏AI创建支持(深度学习/机器学习)
- 多语言管理
- 按键绑定/触控/手势管理
- 类DoTween模块
- 音效管理器
- 编辑器拓展

# 推荐项目
- [SDHK/WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [OnClick9927/IFramework](https://github.com/OnClick9927/IFramework)
- [eagmetang/ET](https://github.com/egametang/ET)
- [Cysharp/UniTask](https://github.com/Cysharp/UniTask)
