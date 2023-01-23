//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/single-number/

#include <vector>

using namespace std;

int singleNumber(vector<int> &nums) {
    int res = 0;
    for (int num: nums) {
        res ^= num;
    }
    return res;
}
