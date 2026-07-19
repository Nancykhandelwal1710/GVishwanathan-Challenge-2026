# Day 30

## Palindrome Partitioning II

Platform:
LeetCode

Language:
Python

Topic:
Dynamic Programming, Strings

Approach:
Precomputed palindrome substrings using Dynamic Programming and then calculated the minimum cuts required for every prefix of the string.

Time Complexity:
O(n²)

Space Complexity:
O(n²)

Key Learning:
Preprocessing repeated computations often simplifies Dynamic Programming solutions and significantly improves efficiency.

---

## Largest Rectangle in Histogram

Platform:
LeetCode

Language:
C++

Topic:
Monotonic Stack

Approach:
Used a monotonic increasing stack to efficiently determine the maximum rectangle area for each histogram bar.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Monotonic stacks provide an elegant linear-time solution for nearest smaller element and histogram-related problems.

---

## N-Queens

Platform:
LeetCode

Language:
Python

Topic:
Backtracking

Approach:
Placed queens row by row while tracking occupied columns and diagonals to prune invalid configurations.

Time Complexity:
O(N!)

Space Complexity:
O(N²)

Key Learning:
Backtracking systematically explores all valid possibilities while pruning infeasible states to reduce unnecessary computation.
