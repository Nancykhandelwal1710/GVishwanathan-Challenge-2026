# Day 37

## 4Sum

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Sorting, Two Pointers

Approach:
Sorted the array and fixed the first two numbers. Then used the Two Pointer technique to find the remaining two numbers while skipping duplicate values to avoid repeated quadruplets.

Time Complexity:
O(n³)

Space Complexity:
O(1)

Key Learning:
The Two Pointer approach can be extended from 2Sum and 3Sum to solve higher-order sum problems efficiently after sorting.

---

## Swap Nodes in Pairs

Platform:
LeetCode

Language:
C++

Topic:
Linked List

Approach:
Used a dummy node to simplify edge cases. Swapped adjacent nodes by updating pointers without modifying the values stored in the nodes.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Dummy nodes make linked list manipulation much simpler by handling head-related edge cases uniformly.

---

## Maximum Product of Three Numbers

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Sorting, Greedy

Approach:
Sorted the array and compared two possible products: the product of the three largest numbers and the product of the two smallest (possibly negative) numbers with the largest number.

Time Complexity:
O(n log n)

Space Complexity:
O(1)

Key Learning:
Negative numbers can significantly affect the maximum product, so considering both positive and negative combinations is essential.
