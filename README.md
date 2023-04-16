# 没名的缝合怪Framework
Unity3D游戏开发中小型游戏框架
始于2023.1.11  奋力开发ing....

在未开发完成之前仅建议当成工具类使用，而不是一个框架，
现在的版本迭代极快，而且编辑器拓展还不完善，可能存在某些隐藏问题请小心使用

注意目前需要自己导入Odin插件，我不建议大家使用盗版的Odin（CSDN暗示），因为本项目内使用的Odin部分在打包之后不会进入包内，也就是说编辑器里自己用没人知道(疯狂暗示)

后续会给出类似Odin的编辑器插件实现上传到仓库内来解决这个问题

# 已经实现的模块：
- 基类全局对象池(托管池全局申请/回收，using释放，非托管池创建，计时回收，基类管理)
- 协变约束全局消息系统 (全局广播，指定派发，异步消息，语法约束，生命管理)
- 单线程异步(tasklike+pool， 强GC控制)
- 通用工具(BindableProperty，IOCContainer，TimerCaller，CountCaller，FuncCreator,UnsafeHandler等)
- 资源管理（采用YooAsset+AsyncExtension)）
- MVC-UI代码生成(V层自动生成，C层自动生成绑定常用事件代码)

# 推荐项目
- [SDHK/WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [OnClick9927/IFramework](https://github.com/OnClick9927/IFramework)
- [eagmetang/ET](https://github.com/egametang/ET)
- [Cysharp/UniTask](https://github.com/Cysharp/UniTask)
