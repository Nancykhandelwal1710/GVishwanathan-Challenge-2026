# Day 25

## Jump Game

Platform:
LeetCode

Language:
C++

Topic:
Greedy

Approach:
Worked backwards from the last index and updated the goal whenever a position could reach the current goal.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
Greedy algorithms can simplify reachability problems by solving them in reverse.

---

## Trapping Rain Water

Platform:
LeetCode

Language:
Python

Topic:
Arrays, Two Pointers

Approach:
Maintained left and right pointers along with the maximum heights seen from both sides to calculate trapped water efficiently.

Time Complexity:
O(n)

Space Complexity:
O(1)

Key Learning:
The Two Pointer technique can optimize space while solving array problems involving boundary conditions.

---

## Non-overlapping Intervals

Platform:
LeetCode

Language:
C++

Topic:
Greedy, Intervals

Approach:
Sorted intervals by their start time and greedily removed overlapping intervals while keeping the interval with the smaller end value.

Time Complexity:
O(n log n)

Space Complexity:
O(1)

Key Learning:
Sorting combined with greedy decision-making is a common strategy for interval scheduling problems.
