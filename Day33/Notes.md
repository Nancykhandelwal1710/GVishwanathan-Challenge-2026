# Day 33

## Valid Palindrome

Platform:
LeetCode

Language:
C++

Topic:
Strings, Two Pointers

Approach:
Used two pointers starting from both ends of the string. Ignored non-alphanumeric characters and compared the remaining characters after converting them to lowercase.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
The Two Pointer technique efficiently processes strings from both directions without requiring an additional modified string.

---

## Roman to Integer

Platform:
LeetCode

Language:
Python

Topic:
Strings, HashMap

Approach:
Mapped every Roman symbol to its integer value. Subtracted a value when it appeared before a larger value; otherwise, added it to the result.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Comparing adjacent symbols provides a simple way to handle subtractive Roman numeral combinations such as IV, IX, XL, and CM.

---

## Maximize Active Section with Trade II

Platform:
LeetCode

Language:
C++

Topic:
Binary Search, Segment Tree, Run-Length Encoding

Approach:
Compressed the binary string into consecutive runs and identified each valid one-block surrounded by zero-blocks. For every query, binary search located the first and last valid candidates. Boundary gains were calculated using their clipped zero-block lengths, while a segment tree returned the maximum gain among fully contained candidates.

Time Complexity:
O(n + q log n)

Space Complexity:
O(n)

Key Learning:
Combining run-length encoding, binary search, and range maximum queries makes it possible to answer a large number of substring optimization queries efficiently.
