# Day 36

## Reverse Integer

Platform:
LeetCode

Language:
C++

Topic:
Mathematics

Approach:
Extracted digits one by one using modulo and rebuilt the reversed number. Used a long long variable to detect integer overflow before returning the result.

Time Complexity:
O(log₁₀ n)

Space Complexity:
O(1)

Key Learning:
Overflow checks are essential when reversing integers because the reversed value may exceed the 32-bit integer range.

---

## String to Integer (atoi)

Platform:
LeetCode

Language:
C++

Topic:
Strings

Approach:
Skipped leading spaces, determined the sign, parsed consecutive digits, and handled overflow by returning INT_MAX or INT_MIN whenever necessary.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Carefully handling edge cases such as spaces, signs, invalid characters, and overflow is crucial in string parsing problems.

---

## Maximum Product of Two Digits

Platform:
LeetCode

Language:
C++

Topic:
Mathematics, Brute Force

Approach:
Extracted all digits of the number into an array and checked every pair of digits to find the maximum product.

Time Complexity:
O(k²), where k is the number of digits

Space Complexity:
O(k)

Key Learning:
When the input size is very small (maximum 10 digits), a brute-force approach is both simple and efficient.
