# Binary Search

- LeetCode Number: 704
- Topic: Basic Algorithms
- Difficulty: Easy
- Status: Accepted

## Problem Description
Search for a target element in a sorted array. Return its index if found; otherwise, return -1.

## Approach
1. Set `low` to the first index.
2. Set `high` to the last index.
3. Calculate the middle index.
4. If the middle element equals the target, return its index.
5. If the target is greater, search the right half.
6. If the target is smaller, search the left half.
7. If the element is not found, return -1.

## Test Cases

**Input:** nums = [-1,0,3,5,9,12], target = 9  
**Output:** 4

**Input:** nums = [-1,0,3,5,9,12], target = 2  
**Output:** -1

## Complexity
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Result
LeetCode submission: Accepted.