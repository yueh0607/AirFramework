# AirFramework
Unity3D游戏开发中小型游戏框架
始于2023.1.11  奋力开发ing....

# 已经实现的模块：
- 全局对象池(托管池全局申请/回收，using释放，非托管池创建)
- 全局消息机制 (全局派发/指定派发。支持自定义异步，暂不支持多线程)
- 生命周期管理(消息驱动，对象池内自动绑定)
- Unity异步编程支持(自定义task支持unity/Acdressable异步)
- 回调计时/数器(指定时间回调，时间条件广播,数量回调)
- 日志调试(按日期保存文件，Unity原生Log日志拦截，异常拦截记录，支持新的简介Log拓展)
- 资源管理（采用Addressable+异步拓展，需要自行导入）
# 未来可能实现/支持的内容(排序不代表优先级)：
- MVVM编程规范/UI管理器
- 热更新与Hotfix (HybirdCLR or xlua or ILRuntime)
- 简单网络模块(TCP/UDP/HTTP/Photon等简易支持)
- 代码状态机/行为树
- csv/json/binary/excel等序列化
- SDK管理器与快捷接入
- 游戏AI创建支持(深度学习/机器学习)
- 多语言管理
- 按键绑定/触控/手势管理
- 类DoTween模块
- 音效管理器
- 编辑器拓展

# 参考与推荐项目
- [SDHK/WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [OnClick9927/IFramework](https://github.com/OnClick9927/IFramework)
- [eagmetang/ET](https://github.com/egametang/ET)
- [Cysharp/UniTask](https://github.com/Cysharp/UniTask)
