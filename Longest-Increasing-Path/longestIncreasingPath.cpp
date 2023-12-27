#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to find the longest increasing path in a matrix
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.empty()) return 0; // Return 0 if matrix is empty
        int m = matrix.size(), n = matrix[0].size(); // Get matrix dimensions
        vector<vector<int>> dp(m, vector<int>(n, 0)); // DP array to store lengths of increasing paths
        int longest = 0; // Variable to store the longest path length

        // Iterate through each cell in the matrix
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                longest = max(longest, dfs(matrix, dp, i, j)); // Update longest path using DFS

        return longest; // Return the length of the longest path
    }

private:
    vector<int> dirs = {0, 1, 0, -1, 0}; // Directions array for exploring adjacent cells

    // DFS function to explore all paths starting from (i, j)
    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j) {
        if (dp[i][j] != 0) return dp[i][j]; // Return already computed path length for (i, j)
        int max_len = 1, m = matrix.size(), n = matrix[0].size(); // Initialize max path length for this cell

        // Explore all 4 adjacent cells
        for (int k = 0; k < 4; ++k) {
            int x = i + dirs[k], y = j + dirs[k + 1]; // Get coordinates of adjacent cell
            // Skip if out of bounds or not an increasing path
            if (x < 0 || x >= m || y < 0 || y >= n || matrix[x][y] <= matrix[i][j]) continue;
            int len = 1 + dfs(matrix, dp, x, y); // Calculate length of path via this adjacent cell
            max_len = max(max_len, len); // Update maximum length
        }

        dp[i][j] = max_len; // Store computed maximum length in DP array
        return max_len; // Return maximum length for this cell
    }
};

int main() {
    vector<vector<int>> matrix = {
        {9, 9, 4},
        {6, 6, 8},
        {2, 1, 1}
    };
    Solution solution;
    cout << "Longest Increasing Path: " << solution.longestIncreasingPath(matrix) << endl;
    return 0;
}
