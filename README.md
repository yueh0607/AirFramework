# AirFramework
始于2023.1.11，自用的小框架

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
- [Apache 2.0 LICENSE](https://github.com/yueh0607/AirFramework/blob/main/LICENSE)


