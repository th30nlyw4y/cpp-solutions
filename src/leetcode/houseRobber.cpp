//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/house-robber/

#include <vector>

using namespace std;

int rob(vector<int> &nums) {
    if (!nums.size()) return 0;
    int prev1 = 0, prev2 = 0, tmp;
    for (int num: nums) {
        tmp = prev1;
        prev1 = max(prev2 + num, prev1);
        prev2 = tmp;
    }
    return prev1;
}