# Day 26

## Median of Two Sorted Arrays

Platform:
LeetCode

Language:
Python

Topic:
Binary Search

Approach:
Applied binary search on the smaller array to partition both arrays into left and right halves such that all left elements were smaller than all right elements.

Time Complexity:
O(log(min(m, n)))

Space Complexity:
O(1)

Key Learning:
Binary Search can be extended beyond searching for values to optimize partitions and solve complex array problems efficiently.

---

## Word Break

Platform:
LeetCode

Language:
C++

Topic:
Dynamic Programming

Approach:
Used Dynamic Programming where each state represented whether the substring up to that position could be segmented using words from the dictionary.

Time Complexity:
O(n²)

Space Complexity:
O(n)

Key Learning:
Dynamic Programming is highly effective for string segmentation and decision-making problems.

---

## Binary Tree Maximum Path Sum

Platform:
LeetCode

Language:
C++

Topic:
Trees, DFS

Approach:
Performed a post-order DFS to calculate the maximum contribution from each subtree while updating the global maximum path sum.

Time Complexity:
O(n)

Space Complexity:
O(h)

Key Learning:
Tree Dynamic Programming combines recursion with local and global state updates to solve optimization problems on trees.
