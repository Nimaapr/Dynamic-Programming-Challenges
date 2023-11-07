# Longest Increasing Subsequence

## Problem Description
Given an unsorted array of integers, find the length of the longest increasing subsequence (LIS).

## Solutions
This repository contains two solutions to the Longest Increasing Subsequence problem implemented in C++.

### LIS.cpp (Dynamic Programming Approach)
The `LIS.cpp` file contains a dynamic programming solution.

#### Algorithm
1. Initialize an array `dp` of the same length as the input array `nums`, and set all elements to `1`. Each element `dp[i]` represents the length of the longest increasing subsequence ending at index `i`.
2. For each pair of indices `i` and `j` (where `j < i`), if `nums[i]` is greater than `nums[j]`, update `dp[i]` to be the maximum of `dp[i]` and `dp[j] + 1`.
3. The length of the LIS is the maximum value in the `dp` array.

### LIS_NlogN.cpp (Efficient Binary Search Approach)
The `LIS_NlogN.cpp` file contains an efficient solution using binary search.

#### Algorithm
This algorithm improves upon the dynamic programming approach by using a binary search to find the insertion point for each number. This reduces the time complexity from O(n^2) to O(n log n).

1. Create an empty array `tails`.
2. For each number in the input array, use `std::lower_bound` to find the insertion point in `tails`.
3. If the insertion point is at the end of `tails`, append the number.
4. Otherwise, replace the element at the insertion point with the current number.
5. The size of the `tails` array represents the length of the longest increasing subsequence.

## How to Run
Compile the C++ code using a C++ compiler:
```sh
c++ -o LIS LIS.cpp
```

Run the compiled code:
```sh
./LIS
```
