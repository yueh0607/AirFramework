# AirFramework
Unity3D游戏开发中小型游戏框架

# 整体特点：
- 较低学习成本：每个模块的超级管理器均采用单例模式，根据IDE提示通过Framework.XXXX一键调用，无效记忆各种复杂API。
- 敏捷使用语法：每个模块均支持大量静态拓展方法，拥有一定渐进式学习过程，是对超级管理器API的简化而非功能性的拓展。
- 严格性能控制：严格控制运行时GC产出(尤其是循环产出的GC)，虽然针对中小型游戏对性能要求不十分严格，但是并不敷衍，且留有上升余地。
- 严谨编程规范：旨在通过Framework为用户确立一个严谨易学的编程规范，并对在规范内的编程系统化管理。

始于2023.1.11  奋力开发ing....

# 已经实现的模块：
- 全局对象池
- 全局消息机制 
- 生命周期管理
- Unity异步编程支持
- 回调计时器
- 日志调试
- 资源管理（采用Addressable，需要自行导入）
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
- [WorldTreeFramework](https://github.com/SDHK/WorldTreeFramework)
- [IFramework](https://github.com/OnClick9927/IFramework)
- [ET](https://github.com/egametang/ET)
