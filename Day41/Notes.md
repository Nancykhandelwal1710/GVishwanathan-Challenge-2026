# Day 41

## Flatten a Multilevel Doubly Linked List

Platform:
LeetCode

Language:
C++

Topic:
Linked List, DFS

Approach:
Used a stack to perform an iterative depth-first traversal. Whenever a node had a child, its child list was processed before the next node, and all child pointers were removed while reconnecting the doubly linked list.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Stacks can effectively simulate recursive DFS, making them useful for flattening hierarchical linked list structures.

---

## Basic Calculator

Platform:
LeetCode

Language:
Python

Topic:
Strings, Stack

Approach:
Traversed the expression while maintaining the current result, sign, and number. Used a stack to save the current result and sign whenever an opening parenthesis was encountered, then restored them after evaluating the enclosed expression.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Stacks are a natural choice for evaluating nested expressions because they preserve the computation state before entering parentheses.

---

## Minimum Number of Pushes to Type Word I

Platform:
LeetCode

Language:
C++

Topic:
Greedy, Strings

Approach:
Assigned characters to keyboard buttons in groups of eight. The first eight characters require one push each, the next eight require two pushes, and so on. Summed the required pushes based on each character's position.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Greedy grouping based on fixed capacities often leads to optimal solutions while keeping the implementation simple.
