# Move Zeroes

- **LeetCode Number:** 283
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Status:** Accepted

## Problem Description

Move all zeroes in an array to the end while keeping the order of non-zero elements unchanged.

## Approach

1. Use a variable `j` to track the next position for a non-zero element.
2. Traverse the array using a `for` loop.
3. Copy each non-zero element to position `j`.
4. Fill the remaining positions with zeroes.

## Test Cases

**Input:** [0, 1, 0, 3, 12]  
**Output:** [1, 3, 12, 0, 0]

**Input:** [0]  
**Output:** [0]

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Result

LeetCode submission: Accepted.