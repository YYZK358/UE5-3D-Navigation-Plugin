# Introduction
This is a UE5 plugin that supports 3D directional patrol navigation.

# Usage

Unzip `V3DNavigation.zip` and place it in your project's Plugins folder.

In the scene, use `V3DNavigtion` to box-select the area to be navigated.

![3D navigation rendering volume](./Image/V3DNavigation.png)

Add the component to the actors that need navigation.

![3D navigation component](./Image/AirPathfindingComponent.png)

Call the functions through the component (the Async version of the patrol function is recommended, as it will not block the main thread).

![3D navigation functions](./Image/Function.png)