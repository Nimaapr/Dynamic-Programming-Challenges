#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minDifficulty(vector<int>& jobDifficulty, int d) {
    int n = jobDifficulty.size();
    if (n < d) return -1;

    vector<vector<int>> dp(d, vector<int>(n, INT_MAX));
    
    dp[0][0] = jobDifficulty[0];
    for (int i = 1; i < n; ++i) {
        dp[0][i] = max(dp[0][i - 1], jobDifficulty[i]);
    }

    for (int day = 1; day < d; ++day) {
        for (int i = day; i < n; ++i) {
            int maxDifficulty = 0;
            for (int j = i; j >= day; --j) {
                maxDifficulty = max(maxDifficulty, jobDifficulty[j]);
                dp[day][i] = min(dp[day][i], dp[day - 1][j - 1] + maxDifficulty);
            }
        }
    }

    return dp[d - 1][n - 1];
}

int main() {
    vector<int> jobDifficulty = {6, 5, 4, 3, 2, 1}; // Example job difficulties
    int d = 2; // Example number of days

    cout << "Minimum Difficulty: " << minDifficulty(jobDifficulty, d) << endl;

    return 0;
}
