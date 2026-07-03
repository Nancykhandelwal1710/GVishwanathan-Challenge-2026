# Day 14

## Longest Substring Without Repeating Characters

Platform:
LeetCode

Language:
Python

Topic:
Strings, Sliding Window

Approach:
Used the sliding window technique with a hash map to track the most recent occurrence of each character.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Sliding Window is an efficient technique for solving substring and subarray problems involving continuous ranges.

---

## Island Perimeter

Platform:
LeetCode

Language:
C++

Topic:
Matrix, Simulation

Approach:
Calculated the perimeter by adding four sides for each land cell and subtracting shared edges with adjacent land cells.

Time Complexity:
O(m × n)

Space Complexity:
O(1)

Key Learning:
Grid traversal problems often become simpler by counting contributions from each cell individually.

---

## House Robber

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Maintained two variables representing the maximum profit up to the previous house and the house before it.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Dynamic Programming can often be optimized from arrays to constant space by storing only the necessary previous states.
