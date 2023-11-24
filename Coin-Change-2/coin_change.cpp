#include <iostream>
#include <vector>

using namespace std;

int change(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1);
    dp[0] = 1;

    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            dp[i] += dp[i - coin];
        }
    }

    return dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5}; // Example coin denominations
    int amount = 11; // Example amount

    cout << "Number of ways to make change: " << change(amount, coins) << endl;

    return 0;
}
