# Coin Change Problem

## Problem Description
The Coin Change Problem is a classic algorithmic problem that explores the different ways to make change for a particular amount of money, given a set of coin denominations. The goal is to find the combination that requires the fewest number of coins.

## Solution
This repository contains a solution to the Coin Change Problem implemented in C++. The algorithm used is a dynamic programming approach, where we build up a solution by solving for smaller sub-problems.

### Algorithm
1. Create an array `dp` of size `amount + 1` initialized with a large number (`INT_MAX`). This array will store the minimum number of coins required to make change for amounts from `0` to `amount`.
2. `dp[0]` is set to `0` as the minimum number of coins required for amount `0` is `0`.
3. For each coin denomination, and for each amount from `1` to `amount`, we update `dp[amount]` with the minimum number of coins required.
4. If `dp[amount]` is still a large number (`INT_MAX`), then there is no solution. Otherwise, `dp[amount]` will have the minimum number of coins required.

## How to Run
Compile the C++ code using a C++ compiler:
```sh
c++ -o Coin_Change Coin_Change.cpp
