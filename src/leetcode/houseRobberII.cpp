//
// Created by Petr on 21/04/2023.
//
// https://leetcode.com/problems/house-robber-ii/

#include <vector>

using namespace std;


int rob(vector<int>& nums) {
    if (nums.size() == 1) { return nums[0]; }

    int x = 0, y = 0, tmp, prev1, prev2;
    prev1 = 0, prev2 = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        tmp = prev1;
        prev1 = max(nums[i] + prev2, prev1);
        prev2 = tmp;
    }
    x = prev1;

    prev1 = 0, prev2 = 0;
    for (int i = 1; i < nums.size(); i++) {
        tmp = prev1;
        prev1 = max(nums[i] + prev2, prev1);
        prev2 = tmp;
    }
    y = prev1;

    return max(x, y);
}