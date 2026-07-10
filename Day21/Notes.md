# Day 21

## Find All Anagrams in a String

Platform:
LeetCode

Language:
Python

Topic:
Sliding Window, HashMap

Approach:
Maintained a sliding window of the same length as the pattern and compared character frequencies using hash maps.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Sliding Window combined with frequency counting efficiently solves substring matching problems.

---

## Clone Graph

Platform:
LeetCode

Language:
C++

Topic:
Graphs, DFS

Approach:
Used Depth-First Search with a hash map to clone each node only once while preserving graph connections.

Time Complexity:
O(V + E)

Space Complexity:
O(V)

Key Learning:
Hash maps are essential for cloning graphs and avoiding duplicate node creation during traversal.

---

## Rotting Oranges

Platform:
LeetCode

Language:
C++

Topic:
Graphs, Breadth-First Search (BFS)

Approach:
Started BFS from all rotten oranges simultaneously and spread the infection level by level until no fresh oranges remained.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
Multi-source BFS is an effective technique for problems where multiple starting points spread simultaneously.
