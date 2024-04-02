# GAM575 - Real-Time Software Development II
## Description
GAM575 focused on real-time software development with asset conversion. Topics included offline data conversion, asset packing, data-driven application behavior, hierarchy base scene management, profiling and debugging large opaque data, runtime formats for low-level drivers, and advanced visualization techniques.

## Project Descriptions
* GAM475 Systems Refactor (PA1, PA2, and PA3)
  * Google Protocol Buffers
    * Serialization
    * Deserialization
    * Nested Messages
  * Improved Math Library
    *  Rework GAM475 Math Library
    *  Add Quaternions
* Model Viewer (PA4 and PA5)
  * Model Converter
    * Takes GLTF models with textures and converts them into a protobuf file
    * Converted data includes verts, norms, uv, index buffers, texture, and bounding sphere
    * Models converted include small poly count, large poly count, and multi-mesh
  * Viewer
    * Reads binary file created by Model Converter
    * Loads data into graphics memory
    * Displays four models and various shapes (pyramid, sphere, cube)
* Animation Engine (PA6)
  * Animation Converter
    * Exported binary file includes information such as frames per second, number of frames, number of bones, etc.
    * Exports 4 Animations (Walk, Run, Die Left, and Side-Side Step Right)
  * Animation Display
    * Displays five skeletons
      * 1 main skeleton 
      * 4 skeletons in each corner showing each animation
    * Animations can be played, paused, move forward, move in reverse, move faster, and move slower. The main skeleton's animation can switch between the four available animations.

## Instructions To View Animation Engine
* Open PA6
* Run ConverterAnim.sln
* Run Engine.sln
* The following scene is rendered:
  ![image](https://github.com/Waachel/GAM575/assets/12739252/32dc82d1-1c71-4756-9078-b4e3bc081f90)
* Controls:
  * G to play
  * P to pause
  * F to play forwards
  * B to play in reverse
  * L to slow down animation
  * N to return to normal speed
  * T to speed up animation
  * To switch the main animation:
    * W to play walking animation
    * D to play die left animation
    * S to play side-step animation
    * R to play running animation

* Click here to view a [full walkthrough](https://youtu.be/VfEmdJL82Gg) of my Animation Engine
