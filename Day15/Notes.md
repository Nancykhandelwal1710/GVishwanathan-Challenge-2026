# Day 15

## Implement Queue using Stacks

Platform:
LeetCode

Language:
Python

Topic:
Stack, Queue, Design

Approach:
Used two stacks to simulate queue operations. One stack is used for input and another stack is used for output order.

Time Complexity:
Push: O(1)
Pop: Amortized O(1)
Peek: Amortized O(1)
Empty: O(1)

Space Complexity:
O(n)

Key Learning:
Two stacks can be used to reverse order and simulate FIFO behavior of a queue.

---

## Kth Largest Element in an Array

Platform:
LeetCode

Language:
C++

Topic:
Heap, Priority Queue

Approach:
Used a max heap to repeatedly extract the largest elements until reaching the k-th largest.

Time Complexity:
O(n log n)

Space Complexity:
O(n)

Key Learning:
Heaps are useful when we need to repeatedly access the largest or smallest element efficiently.

---

## Validate Binary Search Tree

Platform:
LeetCode

Language:
C++

Topic:
Tree, Binary Search Tree, Recursion

Approach:
Used recursion with valid lower and upper bounds for each node.

Time Complexity:
O(n)

Space Complexity:
O(h)

Key Learning:
BST validation requires checking global constraints, not just parent-child relationships.
