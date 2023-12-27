# Longest Increasing Path in a Matrix

## Overview
This C++ project implements a solution to the "Longest Increasing Path in a Matrix" problem. It involves finding the longest strictly increasing path through adjacent, non-diagonally connected cells in a matrix. Each step of the path must have a greater value than the previous step.

## Problem Statement
Given an `m x n` integer matrix, return the length of the longest increasing path in the matrix. From each cell, you can either move to four directions: left, right, up, or down. You cannot move diagonally, and you cannot move outside the boundary of the matrix.

## Implementation
- **File**: `longest_increasing_path.cpp`
- The implementation uses Depth-First Search (DFS) combined with dynamic programming for efficient path length calculation.
- A 2D dynamic programming table is used to store the length of the longest path starting from each cell, thus avoiding redundant computations.

## Complexity
- **Time Complexity**: O(mn), where `m` is the number of rows and `n` is the number of columns in the matrix. Each cell is visited once.
- **Space Complexity**: O(mn) for the dynamic programming table and the recursion stack.

## Compilation and Execution
To compile and run the program, you will need a C++ compiler like GCC or Clang. Use the following command to compile:
```bash
g++ -std=c++11 longest_increasing_path.cpp -o longest_increasing_path
```
To run the compiled program, use:
```bash
./longest_increasing_path
```