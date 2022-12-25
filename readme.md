# Prod-Gen

 Just practicing C++ through adjusting 2D arrays to make landscapes. If I add anything in the future to this, I will be following from: [this site](https://www.scratchapixel.com/lessons/procedural-generation-virtual-worlds/procedural-patterns-noise-part-1/creating-simple-2D-noise). It's a cool resource.
 
## methods.cpp

 Methods to create and print a 2D array.

## builder.cpp

 This file contains methods that can do many things related to creating and then adjusting values in a 2D space. For example, convol takes an array and then smooths out all the of the values to get slighter gradients. That was inspired by this video: [by 3Blue1Brown](https://www.youtube.com/watch?v=KuXjwB4LzSA&t=488s&ab_channel=3Blue1Brown). I also learned that this isn't the best way to do this as it is computationally intensive. It is more used for blurring pictures. Interpolation is used when doing procedural generation way more [info](https://www.scratchapixel.com/lessons/procedural-generation-virtual-worlds/procedural-patterns-noise-part-1/creating-simple-2D-noise) so I might try a basic form of that next.
