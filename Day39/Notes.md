# Day 39

## Minimum Path Sum

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming, Matrix

Approach:
Updated the grid in-place by storing the minimum path sum to reach each cell. The first row and first column were initialized separately, and every remaining cell was updated using the minimum of its top and left neighbors.

Time Complexity:
O(m × n)

Space Complexity:
O(1)

Key Learning:
Dynamic Programming can often be optimized by modifying the input matrix directly instead of maintaining a separate DP table.

---

## Add Binary

Platform:
LeetCode

Language:
Python

Topic:
Strings, Simulation

Approach:
Traversed both binary strings from right to left while maintaining a carry. Computed the binary sum digit by digit and reversed the final string to obtain the correct answer.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Binary addition follows the same carry mechanism as decimal addition, making it straightforward to simulate using string traversal.

---

## Smallest Palindromic Rearrangement I

Platform:
LeetCode

Language:
C++

Topic:
Strings, Counting

Approach:
Counted the frequency of each character. Constructed the left half of the palindrome using half of each character's occurrences in lexicographical order, placed the odd-frequency character (if any) in the middle, and mirrored the left half to build the smallest possible palindrome.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Frequency counting combined with lexicographical ordering is an efficient technique for constructing the smallest valid palindrome.
