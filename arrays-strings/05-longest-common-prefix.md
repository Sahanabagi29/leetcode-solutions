# Longest Common Prefix

- LeetCode Number: 14
- Topic: Arrays & Strings
- Difficulty: Easy
- Status: Accepted

## Problem Description
Find the longest common prefix among an array of strings. If there is no common prefix, return an empty string.

## Approach
1. Take the first string as the reference.
2. Compare each character with the same position in the other strings.
3. If a character does not match, stop.
4. Return the common prefix.

## Test Cases

**Input:** ["flower", "flow", "flight"]  
**Output:** "fl"

**Input:** ["dog", "racecar", "car"]  
**Output:** ""

## Complexity
- Time Complexity: O(n * m)
- Space Complexity: O(1)

## Result
LeetCode submission: Accepted.