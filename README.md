# AirFramework
基于 Unity3D 的 中小型 弱连网 单机游戏 框架
始于2023.1.11  奋力开发ing....

在未开发完成之前仅建议当成工具类使用，而不是一个框架，
现在的版本迭代极快，而且编辑器拓展还不完善，可能存在某些隐藏问题请小心使用

# 模块与功能：
- 全局对象池(托管池全局申请/回收，using释放，非托管池创建，计时回收，基类管理)
- 协变约束全局消息系统 (全局广播，指定派发，异步消息，语法约束，生命管理)
- 单线程异步(tasklike+pool，有很强GC控制)
- 通用工具(BindableProperty，IOCContainer，TimerCaller，CountCaller，FuncCreator,UnsafeHandler等)
- 资源管理（采用YooAsset+AsyncExtension）
- MVC-代码生成(V层自动生成，C层自动生成绑定常用事件代码)
- UI管理(栈，无限层级)
- 天然的有限状态机(基于对象池IPoolable的生命派发)

# 开源许可
- Apache 2.0 LICENSE

# 引用项目
- [tuyoogame/YooAsset](https://github.com/tuyoogame/YooAsset)  （Apache-2.0 LICENSE）

# 推荐项目
- [SDHK/WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [OnClick9927/IFramework](https://github.com/OnClick9927/IFramework)
- [eagmetang/ET](https://github.com/egametang/ET)
- [Cysharp/UniTask](https://github.com/Cysharp/UniTask)

