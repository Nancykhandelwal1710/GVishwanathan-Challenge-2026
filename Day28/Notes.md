# Day 28

## Regular Expression Matching

Platform:
LeetCode

Language:
Python

Topic:
Dynamic Programming, Recursion

Approach:
Used recursion with memoization to efficiently match strings while handling '.' and '*' wildcard characters.

Time Complexity:
O(m × n)

Space Complexity:
O(m × n)

Key Learning:
Memoization eliminates repeated computations, making recursive solutions efficient for complex pattern-matching problems.

---

## Merge K Sorted Lists

Platform:
LeetCode

Language:
C++

Topic:
Heap, Linked List

Approach:
Maintained a min-heap containing the current smallest node from each linked list and repeatedly extracted the minimum element.

Time Complexity:
O(N log k)

Space Complexity:
O(k)

Key Learning:
Priority Queues are highly effective for merging multiple sorted data streams efficiently.

---

## Design Twitter

Platform:
LeetCode

Language:
Python

Topic:
Design, HashMap, Heap

Approach:
Used hash maps to maintain tweets and follow relationships, and a heap to retrieve the 10 most recent tweets efficiently.

Time Complexity:
Post: O(1)
Follow/Unfollow: O(1)
Feed: O(10F log 10)

Space Complexity:
O(T + F)

Key Learning:
Design problems require selecting appropriate data structures to balance efficiency across multiple operations.
