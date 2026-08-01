# Day 43

## Longest Common Subsequence

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Built a 2D DP table where each cell represents the length of the longest common subsequence between prefixes of the two strings. If the current characters matched, extended the previous subsequence; otherwise, took the maximum of excluding one character from either string.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
LCS is one of the most fundamental Dynamic Programming problems and forms the basis for many advanced string algorithms.

---

## Minimum Deletions to Make Array Divisible

Platform:
LeetCode

Language:
Python

Topic:
Greedy, Mathematics

Approach:
Computed the GCD of all elements in `numsDivide`. Sorted `nums` and found the first element that divides the GCD. Its index represents the minimum deletions required.

Time Complexity:
O(n log n)

Space Complexity:
O(1)

Key Learning:
Computing the GCD transforms multiple divisibility conditions into a single condition, greatly simplifying the solution.

---

## Predict the Winner

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming, Game Theory

Approach:
Used Dynamic Programming where `dp[i][j]` stores the maximum score difference the current player can achieve over the opponent for the subarray `nums[i...j]`. The first player can win if the final score difference is non-negative.

Time Complexity:
O(n²)

Space Complexity:
O(n²)

Key Learning:
Many game theory problems can be solved by modeling the score difference between players instead of tracking individual scores.
