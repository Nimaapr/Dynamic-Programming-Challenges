#include <iostream>
#include <vector>
#include <algorithm>

int lengthOfLIS(const std::vector<int>& nums) {
    std::vector<int> tails;
    for (std::vector<int>::const_iterator num = nums.begin(); num != nums.end(); ++num) {
        // Use lower_bound to find the insertion point
        std::vector<int>::iterator it = std::lower_bound(tails.begin(), tails.end(), *num);
        if (it == tails.end()) {
            tails.push_back(*num);
        } else {
            *it = *num;
        }
    }
    return tails.size();
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
    nums.push_back(18);

    int result = lengthOfLIS(nums);
    std::cout << "Length of Longest Increasing Subsequence: " << result << std::endl;
    return 0;
}
