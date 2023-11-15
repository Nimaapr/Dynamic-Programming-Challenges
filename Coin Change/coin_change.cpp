#include <iostream>
#include <vector>
#include <climits>

int coinChange(std::vector<int>& coins, int amount) {
    std::vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    
    for (size_t j = 0; j < coins.size(); ++j) {
        int coin = coins[j];
        for (int i = coin; i <= amount; ++i) {
            if (dp[i - coin] != INT_MAX) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    std::vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);  // You can change this to any denominations you like.
    int amount = 11;  // You can change this to any amount you like.
    
    int result = coinChange(coins, amount);
    if (result != -1) {
        std::cout << "Minimum coins required: " << result << std::endl;
    } else {
        std::cout << "No solution exists." << std::endl;
    }
    
    return 0;
}
