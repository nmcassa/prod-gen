# Prod-Gen

 Implementing different procedural generation ideas (that come to my head, no perlin or simplex), just to get better at c++

## builder.cpp

 The build method goes about creating a base layer where are spaces are 80% likely to be filled by a 1. Then each layer is built by checking spots around a number and giving it a higher chance to increment by one depending on how many #'s there are around it.