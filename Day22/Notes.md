# Day 22

## Add Two Numbers

Platform:
LeetCode

Language:
C++

Topic:
Linked List

Approach:
Traversed both linked lists simultaneously while maintaining a carry value. Created a new linked list representing the sum digit by digit.

Time Complexity:
O(max(n, m))

Space Complexity:
O(max(n, m))

Key Learning:
Using a dummy node simplifies linked list construction and helps handle carry propagation cleanly.

---

## Course Schedule

Platform:
LeetCode

Language:
Python

Topic:
Graphs, DFS, Topological Sort

Approach:
Used Depth-First Search (DFS) to detect cycles in the prerequisite graph. A cycle indicates that all courses cannot be completed.

Time Complexity:
O(V + E)

Space Complexity:
O(V + E)

Key Learning:
Cycle detection in directed graphs is a fundamental application of DFS and topological sorting.

---

## LRU Cache

Platform:
LeetCode

Language:
C++

Topic:
Design, HashMap, Doubly Linked List

Approach:
Combined a hash map with a doubly linked list to support constant-time get and put operations while maintaining the order of recently used items.

Time Complexity:
Get: O(1)
Put: O(1)

Space Complexity:
O(capacity)

Key Learning:
Choosing complementary data structures can help satisfy strict time complexity requirements in design problems.