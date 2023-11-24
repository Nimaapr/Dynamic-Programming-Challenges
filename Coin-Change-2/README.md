# Coin Change 2

## Overview
The "Coin Change 2" problem is a classic algorithmic challenge that involves finding the number of different ways to make up a certain amount of money with a given set of coin denominations. This problem is typically solved using dynamic programming to efficiently explore all possible combinations.

## Problem Statement
Given an unlimited supply of coins of given denominations, the goal is to find out the number of ways to make a change for a specific amount. This is different from the classic Coin Change problem, which focuses on the minimum number of coins needed.

## Implementation in C++
The provided C++ solution uses dynamic programming to efficiently calculate the number of ways to make change. The key points of the implementation are:
- A dynamic programming array that stores the number of ways to make up each amount up to the target.
- Iterative updates to the array for each coin denomination.

## File Description
- `coin_change_2.cpp`: Contains the implementation of the Coin Change 2 algorithm.

## Requirements
- C++ Compiler (GCC or any standard C++11 compiler)

## Compilation and Execution
To compile and run the program, follow these steps:
1. Open a terminal or command prompt.
2. Navigate to the directory containing `coin_change_2.cpp`.
3. Compile the program:
   ```bash
   g++ -std=c++11 coin_change_2.cpp -o coin_change_2
   ```
4. Run the executable:
    ```bash
    ./coin_change_2
    ```