#include <iostream>
#include <vector>
#include <algorithm>

int lengthOfLIS(std::vector<int>& nums) {
    if (nums.empty()) return 0;

    std::vector<int> dp(nums.size(), 1);
    int maxLength = 1;

    for (size_t i = 1; i < nums.size(); ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        maxLength = std::max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    std::vector<int> nums;
    nums.push_back(10);
    nums.push_back(9);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(7);
    nums.push_back(101);
    nums.push_back(18);  // You can change this to any sequence you like.

    int result = lengthOfLIS(nums);
    std::cout << "Length of Longest Increasing Subsequence: " << result << std::endl;

    return 0;
}
