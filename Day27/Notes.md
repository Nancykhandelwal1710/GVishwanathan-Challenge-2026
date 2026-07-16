# Day 27

## Longest Increasing Subsequence

Platform:
LeetCode

Language:
Python

Topic:
Dynamic Programming, Binary Search

Approach:
Maintained a list representing the smallest possible tail of increasing subsequences and updated it using binary search.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Key Learning:
Binary Search can optimize Dynamic Programming solutions by efficiently maintaining candidate subsequences.

---

## Edit Distance

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Built a DP table where each state represented the minimum operations required to convert one prefix into another using insertion, deletion, and replacement.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
Dynamic Programming is highly effective for solving string transformation problems with multiple possible operations.

---

## Sliding Window Maximum

Platform:
LeetCode

Language:
C++

Topic:
Sliding Window, Monotonic Queue

Approach:
Maintained a deque containing useful indices in decreasing order of values, allowing constant-time retrieval of the maximum element for each window.

Time Complexity:
O(n)

Space Complexity:
O(k)

Key Learning:
A Monotonic Queue is an efficient data structure for solving sliding window optimization problems in linear time.
