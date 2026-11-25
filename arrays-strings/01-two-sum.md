
# Two Sum

- **Problem Number:** 1
- **Difficulty:** Easy
- **Topic:** Arrays
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/two-sum/

## Problem Description

Given an array of integers and a target value, find the indices of two numbers whose sum is equal to the target.

## Approach

1. Use two nested for loops.
2. The first loop selects one number.
3. The second loop selects another number after the first number.
4. Check whether their sum is equal to the target.
5. If the sum matches, return both indices.

## Time Complexity

O(n²) – Two nested loops are used.

## Space Complexity

O(1) – Constant extra space, excluding the returned array.

## Test Cases

**Test Case 1**

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

**Test Case 2**

Input: nums = [3,2,4], target = 6

Output: [1,2]

## Result

Successfully solved and submitted on LeetCode.

Status: Accepted
