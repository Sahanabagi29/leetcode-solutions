# Best Time to Buy and Sell Stock

- **LeetCode Problem:** 121
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Status:** Accepted

## Problem Description

Given an array of stock prices, find the maximum profit by buying on one day and selling on a future day.

If no profit is possible, return 0.

## Approach

1. Initialize `minPrice` with the first day's price.
2. Initialize `maxProfit` to 0.
3. Traverse the prices array.
4. Update `minPrice` whenever a lower price is found.
5. Calculate the profit by subtracting the minimum price from the current price.
6. Update `maxProfit` if the calculated profit is greater.
7. Return the maximum profit.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Test Cases

| Input | Output |
|---|---|
| [7,1,5,3,6,4] | 5 |
| [7,6,4,3,1] | 0 |

## Result

Successfully executed locally and accepted on LeetCode.