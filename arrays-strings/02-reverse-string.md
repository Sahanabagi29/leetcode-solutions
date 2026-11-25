
# Reverse String

- **Problem Number:** 344
- **Difficulty:** Easy
- **Topic:** Strings
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/reverse-string/

## Problem Description

Write a function that reverses a string by modifying the given character array in-place.

## Approach

1. Initialize `start` to 0.
2. Initialize `end` to the last index.
3. Swap the characters at `start` and `end`.
4. Increment `start` and decrement `end`.
5. Repeat until `start` is greater than or equal to `end`.

## Time Complexity

O(n) – Each character is visited at most once.

## Space Complexity

O(1) – No additional array is used.

## Test Cases

**Test Case 1**

Input: hello

Output: olleh

**Test Case 2**

Input: Hannah

Output: hannaH

## Result

Successfully solved and submitted on LeetCode.

Status: Accepted
