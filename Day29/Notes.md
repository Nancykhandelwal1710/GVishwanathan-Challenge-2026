# Day 29

## Count of Smaller Numbers After Self

Platform:
LeetCode

Language:
Python

Topic:
Binary Search, Ordered List

Approach:
Traversed the array from right to left while maintaining a sorted list. Binary search determined the insertion position, which also represented the number of smaller elements to the right.

Time Complexity:
O(n²)

Space Complexity:
O(n)

Key Learning:
Maintaining a sorted structure with binary search simplifies rank-based queries, though more advanced structures like Fenwick Trees can further optimize performance.

---

## Maximum Profit in Job Scheduling

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming, Binary Search

Approach:
Sorted jobs by start time and used Dynamic Programming with binary search to efficiently find the next compatible job.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Key Learning:
Combining sorting, binary search, and Dynamic Programming is an effective strategy for solving weighted interval scheduling problems.

---

## Burst Balloons

Platform:
LeetCode

Language:
Python

Topic:
Interval Dynamic Programming

Approach:
Used interval DP by assuming each balloon as the last one to burst within a range and computing the maximum coins for every interval.

Time Complexity:
O(n³)

Space Complexity:
O(n²)

Key Learning:
Interval Dynamic Programming solves optimization problems by considering all possible partition points within a subarray.
