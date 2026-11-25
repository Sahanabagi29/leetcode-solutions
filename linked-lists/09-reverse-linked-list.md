# Reverse Linked List

- **LeetCode Number:** 206
- **Topic:** Linked Lists
- **Difficulty:** Easy
- **Status:** Accepted
- **Type:** Bonus Problem

## Problem Description

Given the head of a singly linked list, reverse the linked list and return the new head.

## Approach

1. Create three pointers: `prev`, `current`, and `next`.
2. Initialize `prev` as NULL and `current` as head.
3. Store the next node in `next`.
4. Change the current node's next pointer to `prev`.
5. Move `prev` to `current`.
6. Move `current` to `next`.
7. Repeat until current becomes NULL.
8. Return `prev` as the new head.

## Example

**Input:** 1 → 2 → 3 → 4 → 5 → NULL

**Output:** 5 → 4 → 3 → 2 → 1 → NULL

## Program Output

```text
Original List: 1 2 3 4 5
Reversed List: 5 4 3 2 1
```

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Result

LeetCode submission: Accepted.

Local C program: Compiled and executed successfully.