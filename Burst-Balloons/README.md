# Burst Balloons Problem


## Overview
The "Burst Balloons" problem is a challenging dynamic programming problem that asks for the maximum number of coins one can obtain by bursting balloons wisely. Given a list of balloons, each with a certain number of coins, the task is to find the order of bursting them to maximize the total number of coins collected. The number of coins obtained from bursting a balloon is equal to the product of its value and the values of its adjacent balloons at the time of the burst.

## Problem Statement
Given `n` balloons, indexed from `0` to `n-1`, each balloon is painted with a number on it representing the number of coins you can collect by bursting it. Given the array `nums` which represents the number of coins you will receive from bursting each balloon, return the maximum coins you can collect by bursting the balloons wisely.

## Solution in C++
The provided solution in C++ implements a dynamic programming approach to solve the problem efficiently. The solution involves constructing a 2D DP table where `dp[i][j]` represents the maximum coins that can be obtained by bursting all balloons between `i` and `j`, inclusive.

### File Description
- **File**: `burst_balloons.cpp`
- This file contains the C++ implementation of the dynamic programming solution to the Burst Balloons problem.

## Complexity Analysis
- **Time Complexity**: O(n^3), where `n` is the number of balloons. The cubic time complexity arises from the nested loops required to calculate the maximum coins for each possible subarray of balloons and for each choice of the last balloon to burst.
- **Space Complexity**: O(n^2), due to the 2D dynamic programming table used to store intermediate results and avoid recomputation.

## How to Run
Ensure you have a C++ compiler installed on your system. You can compile and run the program using the following commands:
```bash
g++ -std=c++11 burst_balloons.cpp -o burst_balloons
./burst_balloons
```