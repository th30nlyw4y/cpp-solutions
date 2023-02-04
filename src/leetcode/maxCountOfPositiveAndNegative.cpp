//
// Created by Petr on 04/02/2023.
//
// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

#include <algorithm>
#include <vector>

using namespace std;

int maximumCount(vector<int> &nums) {
    auto p = equal_range(nums.begin(), nums.end(), 0);
    return max(distance(nums.begin(), p.first), distance(p.second, nums.end()));
}