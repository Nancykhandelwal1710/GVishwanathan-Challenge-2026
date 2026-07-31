# Day 42

## Convert Sorted List to Binary Search Tree

Platform:
LeetCode

Language:
C++

Topic:
Linked List, Binary Search Tree, Divide and Conquer

Approach:
Copied the linked list into an array, then recursively selected the middle element as the root to construct a height-balanced Binary Search Tree.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
Converting a linked list to an array simplifies random access, making recursive BST construction straightforward.

---

## Sum Root to Leaf Numbers

Platform:
LeetCode

Language:
Python

Topic:
Binary Tree, DFS

Approach:
Performed a Depth-First Search while carrying the current number formed along the path. Whenever a leaf node was reached, added the complete number to the answer.

Time Complexity:
O(n)

Space Complexity:
O(h)

Key Learning:
DFS can efficiently propagate path-specific information without requiring extra data structures.

---

## Minimum Number of Pushes to Type Word II

Platform:
LeetCode

Language:
C++

Topic:
Greedy, Strings

Approach:
Counted the frequency of each character, sorted frequencies in descending order, and assigned the most frequent characters to positions requiring the fewest key presses.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Greedy assignment based on frequency minimizes the total typing cost and is a common optimization strategy in scheduling and encoding problems.
