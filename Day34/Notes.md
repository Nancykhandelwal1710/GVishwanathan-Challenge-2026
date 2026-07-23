# Day 34

## Valid Parentheses

Platform:
LeetCode

Language:
C++

Topic:
Stack

Approach:
Used a stack to store opening brackets. Whenever a closing bracket appeared, verified that it matched the top element of the stack. If not, the string was invalid.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Stacks are ideal for solving balanced parentheses and nested expression problems.

---

## Pascal's Triangle

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Simulation

Approach:
Constructed Pascal's Triangle row by row. Every row begins and ends with 1, while each inner element equals the sum of the two elements directly above it.

Time Complexity:
O(n²)

Space Complexity:
O(n²)

Key Learning:
Many dynamic programming problems build upon Pascal's Triangle since each value depends only on the previous row.

---

## Number of Unique XOR Triplets I

Platform:
LeetCode

Language:
C++

Topic:
Bit Manipulation, Mathematics

Approach:
Leveraged the mathematical property of permutations. For n ≤ 2, the answer equals n. For n ≥ 3, every XOR value in the range [0, 2ᵏ−1] is attainable, where k is the number of bits required to represent n.

Time Complexity:
O(log n)

Space Complexity:
O(1)

Key Learning:
Recognizing bitwise patterns and mathematical properties can reduce an apparently difficult problem to a very efficient solution.
