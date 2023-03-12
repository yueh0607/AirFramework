# 没名的Framework
Unity3D游戏开发中小型游戏框架
始于2023.1.11  奋力开发ing....

在未开发完成之前仅建议当成工具类使用，而不是一个框架，
现在的版本迭代极快，而且编辑器拓展还不完善，可能存在某些隐藏问题请小心使用

注意目前需要自己导入Odin插件，我不建议大家使用盗版的Odin（CSDN暗示），因为本项目内使用的Odin部分在打包之后不会进入包内，也就是说编辑器里自己用没人知道

后续会给出类似Odin的编辑器插件实现上传到仓库内来解决这个问题

# 已经实现的模块：
- 全局对象池(托管池全局申请/回收，using释放，非托管池创建)
- 全局消息机制 (全局派发/指定派发。支持异步，不支持多线程)
- 生命周期管理(消息驱动，对象池内自动绑定)
- Unity异步编程支持(自定义task支持unity/Addressable异步)
- 回调计时/数器(指定时间回调，时间条件广播,数量回调)
- 日志记录(在未来版本将移除，不再支持日志拦截功能，仅提供少量简化拓展)
- 资源管理（采用Addressable+异步拓展）


# 推荐项目
- [SDHK/WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [OnClick9927/IFramework](https://github.com/OnClick9927/IFramework)
- [eagmetang/ET](https://github.com/egametang/ET)
- [Cysharp/UniTask](https://github.com/Cysharp/UniTask)
