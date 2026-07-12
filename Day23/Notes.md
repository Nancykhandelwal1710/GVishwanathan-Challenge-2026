# Day 23

## Coin Change

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Built a DP array where each position stores the minimum number of coins needed to make that amount. Updated the answer by considering every available coin.

Time Complexity:
O(amount × number of coins)

Space Complexity:
O(amount)

Key Learning:
Dynamic Programming efficiently solves optimization problems by reusing solutions to smaller subproblems.

---

## Serialize and Deserialize Binary Tree

Platform:
LeetCode

Language:
Python

Topic:
Trees, DFS, Design

Approach:
Used preorder traversal with null markers to serialize the tree and recursively rebuilt it during deserialization.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Tree serialization preserves structure by recording null nodes along with actual values.

---

## Perfect Squares

Platform:
LeetCode

Language:
Python

Topic:
Dynamic Programming

Approach:
Computed the minimum number of perfect squares required for every value from 1 to n using previously calculated results.

Time Complexity:
O(n√n)

Space Complexity:
O(n)

Key Learning:
Many optimization problems can be solved efficiently by building solutions incrementally with Dynamic Programming.
