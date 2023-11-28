# Minimum Difficulty of a Job Schedule

## Overview
The "Minimum Difficulty of a Job Schedule" project is a C++ implementation of a dynamic programming solution to determine the least difficulty of scheduling a set of jobs over a given number of days. The difficulty of each job is predefined, and the goal is to schedule the jobs in a way that minimizes the total difficulty.

## Problem Statement
Given an array of integers where each integer represents the difficulty of a job, and an integer \(d\) representing the number of days, the task is to find the minimum difficulty of a job schedule. The jobs must be done in order and all jobs must be completed, with exactly one job being assigned to one day.

## Implementation Details

- **File**: `minDifficulty.cpp`
- The solution uses dynamic programming to iteratively compute the minimum total difficulty for each subset of jobs up to each day.
- **Complexity**:
  - **Time Complexity**: O(d \times n^2), where \(d\) is the number of days and \(n\) is the number of jobs.
  - **Space Complexity**: O(d \times n), due to the 2D dynamic programming array.

## Compilation and Execution
Ensure you have a C++ compiler installed, then compile and run the program as follows:
```bash
g++ -std=c++11 minimum_difficulty_job_schedule.cpp -o minimum_difficulty_job_schedule
./minimum_difficulty_job_schedule
```