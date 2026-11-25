# Valid Anagram

- **LeetCode Problem:** 242
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Status:** Accepted

## Problem Description

Given two strings `s` and `t`, check whether `t` is an anagram of `s`.

Two strings are anagrams if they contain the same characters with the same frequency.

## Approach

1. Create an integer array of size 26 and initialize it to zero.
2. Traverse the first string and increase the count of each character.
3. Traverse the second string and decrease the count of each character.
4. Check whether all array elements are zero.
5. If all are zero, return true; otherwise, return false.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input | Output |
|---|---|
| anagram, nagaram | true |
| rat, car | false |

## Result

Successfully executed locally and accepted on LeetCode.