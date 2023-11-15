#include <iostream>
#include <vector>
#include <algorithm>

int knapsack(std::vector<int>& values, std::vector<int>& weights, int capacity) {
    int n = values.size();
    std::vector<std::vector<int> > dp(n+1, std::vector<int>(capacity+1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (weights[i-1] <= w) {
                dp[i][w] = std::max(dp[i-1][w], values[i-1] + dp[i-1][w-weights[i-1]]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    std::vector<int> values;
    std::vector<int> weights;

    values.push_back(60);
    weights.push_back(10);

    values.push_back(100);
    weights.push_back(20);

    values.push_back(120);
    weights.push_back(30);  // You can change these to any values and weights you like.

    int capacity = 50;  // You can change this to any capacity you like.

    int result = knapsack(values, weights, capacity);
    std::cout << "Maximum value in knapsack: " << result << std::endl;

    return 0;
}
