//
// Created by Petr on 26/01/2023.
//
// https://leetcode.com/problems/sort-array-by-parity/

#include <vector>

using namespace std;

vector<int> sortArrayByParity(vector<int> &nums) {
    int lastEven = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (!(nums[i] % 2)) swap(nums[lastEven++], nums[i]);
    }
    return nums;
}

