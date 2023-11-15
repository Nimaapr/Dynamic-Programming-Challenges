# 0/1 Knapsack Problem

## Problem Description
The 0/1 Knapsack Problem is a classic problem in combinatorial optimization. You are given a set of items, each with a weight and a value, and a knapsack with a maximum capacity. The goal is to determine the most valuable combination of items to include in your knapsack without exceeding the weight capacity.

## Solution
This repository contains a C++ implementation of the dynamic programming solution for the 0/1 Knapsack Problem.

### Algorithm
The algorithm uses a 2D table `dp` where each entry `dp[i][w]` represents the maximum value that can be achieved with the first `i` items and a knapsack capacity of `w`. The algorithm fills this table in a bottom-up manner and yields the maximum value that can be put in a knapsack of capacity `W`.

The time complexity of the algorithm is `O(nW)`, where `n` is the number of items and `W` is the maximum capacity of the knapsack.

## How to Run
Compile the C++ code using a C++ compiler:
```sh
c++ -o Knapsack Knapsack.cpp
```

Run the compiled code:
```sh
./Knapsack
```
