# Day 31

## Sudoku Solver

Platform:
LeetCode

Language:
C++

Topic:
Backtracking, Recursion

Approach:
Used recursive backtracking to fill each empty cell. For every empty position, tried digits from 1 to 9 and placed a digit only if it satisfied Sudoku row, column, and 3×3 subgrid constraints. If a placement led to a dead end, the algorithm backtracked and tried the next possible digit until a valid solution was found.

Time Complexity:
O(9^n) (Worst Case)

Space Complexity:
O(n)

Key Learning:
Backtracking systematically explores possible solutions while pruning invalid states early. Constraint checking at every step greatly reduces the search space and is the key to efficiently solving combinatorial problems like Sudoku.
