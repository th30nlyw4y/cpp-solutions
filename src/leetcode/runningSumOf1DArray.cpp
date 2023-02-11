//
// Created by Petr on 11/02/2023.
//
// https://leetcode.com/problems/running-sum-of-1d-array/

#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}
