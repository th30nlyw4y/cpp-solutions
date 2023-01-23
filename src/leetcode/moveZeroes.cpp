//
// Created by Petr on 08/01/2023.
//
// https://leetcode.com/problems/move-zeroes/

#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums) {
    for (int i = 0, nonZeroIndex = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[nonZeroIndex], nums[i]);
            nonZeroIndex++;
        }
    }
}
