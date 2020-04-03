# I will take this potato chip ... and eat it!
## Problem Statement
Light Yagami has an undirecetd tree where each vertex has a *luck* value which is either **0** or **1**. For any path joining 2 vertices, its *fortune* is the XOR of all the luck values of the vertices lying in the path. The path is called *lucky* if the path's fortune is **1**. Since Light is busy eating potato chips, can you help him find the length of the longest lucky path?

## Input
The first line of input consists of a positive integer `n` (`2` <= `n` <= `2 x 10^6`), which is the total number of vertices of the tree. The next `n-1` lines each contain 2 positive integers `u` and `v` (`1` <= `u, v` <= `n`) which denotes an edge between vertices `u` and `v`. The next line contains `n` space separated integers `luck[i]` (`luck[i] ∈ {0, 1}`) which denotes the luck value of vertex `i`.

## Output
Output the length of the longest lucky path, or more formally the maximum length among all paths in the tree such that the XOR of all luck values of the vertices belonging to the path is **1**.

## Sample test cases
**Input: **


**Output: **


**Input: **


**Output**
