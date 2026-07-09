# Day 20

## Number of Islands

Platform:
LeetCode

Language:
C++

Topic:
Graphs, DFS

Approach:
Traversed the grid using Depth-First Search (DFS). Whenever an unvisited land cell was found, DFS marked the entire connected island as visited and increased the island count.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
DFS is a fundamental technique for identifying connected components in graphs and grid-based problems.

---

## Decode Ways

Platform:
LeetCode

Language:
Python

Topic:
Dynamic Programming

Approach:
Used Dynamic Programming with two variables to track the number of valid decodings while processing the string from left to right.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Many Dynamic Programming problems can be optimized from arrays to constant space by keeping only the required previous states.

---

## Pacific Atlantic Water Flow

Platform:
LeetCode

Language:
Python

Topic:
Graphs, DFS

Approach:
Performed DFS starting from the Pacific and Atlantic boundaries separately, then found the cells reachable from both oceans.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
Instead of exploring paths from every cell, reversing the traversal direction can significantly reduce computation in graph problems.
