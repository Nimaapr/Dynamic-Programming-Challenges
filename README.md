# Longest Increasing Subsequence

## Problem Description
Given an unsorted array of integers, find the length of the longest increasing subsequence (LIS).

## Solution
This repository contains a solution to the Longest Increasing Subsequence problem implemented in C++. The algorithm used is a dynamic programming approach.

### Algorithm
1. Initialize an array `dp` of the same length as the input array `nums`, and set all elements to `1`. Each element `dp[i]` represents the length of the longest increasing subsequence ending at index `i`.
2. For each pair of indices `i` and `j` (where `j < i`), if `nums[i]` is greater than `nums[j]`, update `dp[i]` to be the maximum of `dp[i]` and `dp[j] + 1`.
3. The length of the LIS is the maximum value in the `dp` array.

## How to Run
Compile the C++ code using a C++ compiler:
```sh
c++ -o LIS LIS.cpp
```

Run the compiled code:
```sh
./LIS
```
