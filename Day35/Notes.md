# Day 35

## Longest Palindromic Substring

Platform:
LeetCode

Language:
C++

Topic:
Strings, Two Pointers

Approach:
Expanded around every character as the center of a palindrome. Considered both odd-length and even-length palindromes and kept track of the longest valid substring.

Time Complexity:
O(n²)

Space Complexity:
O(1)

Key Learning:
Expanding around the center is a simple and efficient alternative to Dynamic Programming for palindrome problems.

---

## Zigzag Conversion

Platform:
LeetCode

Language:
C++

Topic:
Strings, Simulation

Approach:
Simulated the zigzag traversal by maintaining the current row and direction. Appended each character to its corresponding row and finally concatenated all rows.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Many string problems become straightforward by simulating the required process instead of trying to derive a direct formula.

---

## Number of Unique XOR Triplets II

Platform:
LeetCode

Language:
C++

Topic:
Bit Manipulation, Hashing

Approach:
Used the bounded value range (nums[i] ≤ 1500) to efficiently compute all distinct XOR values achievable from valid triplets while avoiding redundant computations.

Time Complexity:
Efficient for n ≤ 1500

Space Complexity:
Depends on the number of unique XOR values stored.

Key Learning:
Bitwise problems often become manageable by leveraging value constraints and storing only unique XOR results.
