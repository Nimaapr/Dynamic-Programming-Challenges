from bisect import bisect_left

def jobScheduling(startTime, endTime, profit):
    """Finds the maximum profit achievable by scheduling non-overlapping jobs.

    Args:
        startTime: List of start times.
        endTime: List of end times.
        profit: List of profits.

    Returns:
        The maximum achievable profit.
    """

    # Sort jobs by end time in ascending order
    jobs = sorted(zip(startTime, endTime, profit), key=lambda x: x[1])

    # Initialize dp table with the base case of no jobs
    dp = [[0, 0]]  # [endTime, maximum profit up to that endTime]

    for start, end, profit in jobs:
        # Find the index of the rightmost job that ends before this job starts
        index = bisect_left(dp, [start + 1]) - 1

        # If adding this job results in better profit, update dp table 
        if dp[index][1] + profit > dp[-1][1]:
            dp.append([end, dp[index][1] + profit])

    return dp[-1][1]  # Return the maximum profit

# Example usage
startTime = [1, 3, 4, 3, 6]
endTime = [3, 5, 6, 8, 7]
profit = [50, 40, 60, 70, 50]
print(jobScheduling(startTime, endTime, profit))
