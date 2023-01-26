//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/move-zeroes/

#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums) {
    int lastNonZero = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i]) swap(nums[lastNonZero++], nums[i]);
    }
}
