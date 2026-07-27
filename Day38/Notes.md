# Day 38

## Spiral Matrix

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Matrix

Approach:
Maintained four boundaries (top, bottom, left, and right) and traversed the matrix layer by layer in spiral order until all elements were visited.

Time Complexity:
O(m × n)

Space Complexity:
O(1)

Key Learning:
Using boundary pointers is an effective technique for matrix traversal problems and avoids the need for additional visited arrays.

---

## Climbing Stairs

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Recognized the recurrence relation identical to the Fibonacci sequence. Stored only the last two computed values to achieve constant space.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Many dynamic programming problems can be optimized by retaining only the previous states instead of an entire DP array.

---

## Maximum Product of Two Elements in an Array

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Sorting

Approach:
Sorted the array and selected the two largest elements. Computed the required value using the formula (a − 1) × (b − 1).

Time Complexity:
O(n log n)

Space Complexity:
O(1)

Key Learning:
Sometimes sorting provides the simplest and most readable solution when the input size is relatively small.
