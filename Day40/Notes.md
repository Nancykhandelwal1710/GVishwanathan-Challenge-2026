# Day 40

## Shortest Palindrome

Platform:
LeetCode

Language:
C++

Topic:
Strings, KMP

Approach:
Reversed the string and constructed a new string using the original string, a separator, and the reversed string. Applied the KMP prefix function to determine the longest palindromic prefix, then added the remaining reversed characters to the front.

Time Complexity:
O(n)

Space Complexity:
O(n)

Key Learning:
The KMP prefix function can be used beyond pattern matching to efficiently identify the longest palindromic prefix.

---

## Delete Node in a Linked List

Platform:
LeetCode

Language:
Python

Topic:
Linked List

Approach:
Copied the value from the next node into the current node and bypassed the next node, effectively deleting it without access to the head pointer.

Time Complexity:
O(1)

Space Complexity:
O(1)

Key Learning:
Some linked list problems require modifying node contents instead of changing pointers from the head.

---

## Smallest Palindromic Rearrangement II

Platform:
LeetCode

Language:
C++

Topic:
Strings, Greedy, Combinatorics

Approach:
Counted character frequencies and built the left half of the palindrome greedily. At each position, temporarily selected each possible character in lexicographical order and used combinatorial counting to determine how many palindromic permutations remained. Chose the character that contained the k-th permutation and repeated until the palindrome was complete.

Time Complexity:
O(26 × n)

Space Complexity:
O(26)

Key Learning:
Combining greedy construction with combinatorial counting makes it possible to generate the k-th lexicographical permutation without enumerating every valid palindrome.
