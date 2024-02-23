# Maximum Profit in Job Scheduling

## Overview
This project includes a Python solution for the "Maximum Profit in Job Scheduling" problem, which aims to find the maximum profit from scheduling non-overlapping jobs. Each job has a start time, an end time, and a profit for completing the job. The challenge is to schedule jobs in a way that maximizes total profit without job overlap.

## Problem Statement
Given three arrays `startTime`, `endTime`, and `profit`, representing the start time, end time, and profit of `n` jobs respectively, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time ranges.

## Python Solution
- **File**: `maximum_profit_job_scheduling.py`
- The solution sorts jobs by their end times and dynamically updates the maximum profit that can be achieved by the end of each job, considering all previously completed jobs.

## Complexity Analysis
- **Time Complexity**: O(n log n), where `n` is the number of jobs. The primary contributor to the time complexity is the sorting of jobs and the binary search for inserting profits into the dynamic list.
- **Space Complexity**: O(n), used for storing the sorted jobs and the dynamic programming list tracking maximum profit by job end time.

## Usage
To run the solution, use the following command:
```bash
python maximum_profit_job_scheduling.py
```