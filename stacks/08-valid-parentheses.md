# Valid Parentheses

- **LeetCode Number:** 20
- **Topic:** Stacks
- **Difficulty:** Easy
- **Status:** Accepted

## Problem Description

Determine whether the given string contains valid parentheses. Every opening bracket must have a matching closing bracket in the correct order.

## Approach

1. Create an empty stack.
2. Traverse the string character by character.
3. Push opening brackets into the stack.
4. For a closing bracket, check whether the stack is empty.
5. Check whether the top opening bracket matches the closing bracket.
6. If they match, pop the opening bracket.
7. If they do not match, return false.
8. Finally, if the stack is empty, return true.

## Test Cases

| Input | Output |
|---|---|
| `()` | true |
| `()[]{}` | true |
| `(]` | false |
| `([])` | true |
| `([)]` | false |

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Result

LeetCode submission: Accepted.