# 开发中...也就是说可能存在各种bug，某些时候正在改甚至有编译错误。可以参考但不要使用
# AirFramework 
始于2023.1.11，自用的小框架

# 模块与功能：
- **对象池** (全局申请/回收，计时，using释放模式，非托管池工厂)
- **事件系统** (基于观察者模式+委托，支持指定对象派发，全局派发，通过协变泛型匹配实现了类型安全，支持异步，支持禁用事件，支持动态事件挂载)
- **单线程异步**(完美的协程取消暂停支持和自动适配，取消令牌非传染式自动传递，支持拓展取消令牌，支持异步自旋锁，支持异步流程令牌捕获)
- **通用工具**(各种插值函数，格式化的脚本创建，ID生成器，定时器....)
- **资源管理**（基于YooAsset的再封装，详情参考tuyoogame/YooAsset）
- **MVE-代码生成**(引用生成工具，适配大量Mono事件监听，数据绑定，Model管理，极简生命周期和结构)
- **UI管理**(自由UI，栈管理，分层，定时销毁)
- **有限状态机**(天然轻量级状态机)
- **Tween补间动画**(双向可调整的播放速度,多种循环方式，Ease曲线30+种，异步拓展，手动曲线配置)
- **热更新**(基于HybridCLR无感热更新方案的接入，有极高的效率，适配了部分便于使用的工具和规范，对接YooAsset)
- **配表工具**(读取Excel生成常量Model代码，支持表格查错，float，Vector2，Vector3，Type，Array等的表格配置)
- **序列化**(基于MemoryPack的SourceGenerator在编译时生成序列化，效率极高)
# 开源许可
- [Apache 2.0 LICENSE](https://github.com/yueh0607/AirFramework/blob/main/LICENSE)

# 外源项目
- [tuyoogame/YooAsset - 强大的资源管理方案](https://github.com/tuyoogame/YooAsset)
- [Cysharp/MemoryPack - 强大的序列化方案](https://github.com/Cysharp/MemoryPack)
- [focus-creative-games/HybridCLR - 高效的无感热更方案](https://github.com/focus-creative-games/hybridclr)
- [KumoKyaku/KCP - 高效的KCP协议](https://github.com/KumoKyaku/KCP)
  [JanKallman/EPPlus - Excel读写工具](https://github.com/JanKallman/EPPlus)
