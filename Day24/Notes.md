# Day 24

## Minimum Window Substring

Platform:
LeetCode

Language:
Python

Topic:
Sliding Window, HashMap

Approach:
Maintained a dynamic sliding window while tracking the required character frequencies. Shrank the window whenever all required characters were present to obtain the minimum valid substring.

Time Complexity:
O(m + n)

Space Complexity:
O(n)

Key Learning:
Sliding Window combined with frequency maps is an efficient pattern for solving substring optimization problems.

---

## Container With Most Water

Platform:
LeetCode

Language:
C++

Topic:
Arrays, Two Pointers

Approach:
Used two pointers from both ends of the array and moved the pointer with the smaller height to maximize the container area.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
The Two Pointer technique can efficiently solve optimization problems without checking every possible pair.

---

## Word Search II

Platform:
LeetCode

Language:
Python

Topic:
Trie, DFS, Backtracking

Approach:
Built a Trie containing all words and performed DFS with backtracking on the board to efficiently search multiple words simultaneously.

Time Complexity:
Depends on board size and word lengths; Trie significantly reduces unnecessary searches.

Space Complexity:
O(total characters in words)

Key Learning:
Combining Trie with DFS and Backtracking is a powerful technique for solving multiple word search problems efficiently.
