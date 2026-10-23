# 简介
这是一个Unreal 插件，支持三维方向的巡逻导航
# 使用方法

将V3DNavigation.zip解压后放入项目插件文件夹

在场景中使用V3DNavigtion框选所需导航的区域

![3d导航渲染体积](./Image/V3DNavigation.png)

为需要导航的actor添加组件

![3d导航组件](./Image/AirPathfindingComponent.png)

通过组件调用函数（推荐使用Async版本的巡逻函数，不会阻塞主线程）

![3d导航函数](./Image/Function.png)