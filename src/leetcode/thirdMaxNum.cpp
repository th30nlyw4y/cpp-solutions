//
// Created by Petr on 30/01/2023.
//
// https://leetcode.com/problems/third-maximum-number/

#include <vector>
#include <limits.h>

using namespace std;

int thirdMax(vector<int> &nums) {
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return max(nums[0], nums[1]);
    long long int mx1 = LONG_MIN, mx2 = LONG_MIN, mx3 = LONG_MIN;
    for (int num: nums) {
        if (mx1 == num || mx2 == num || mx3 == num) continue;
        if (num > mx1) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = num;
        } else if (num > mx2) {
            mx3 = mx2;
            mx2 = num;
        } else if (num > mx3) {
            mx3 = num;
        }
    }
    return mx3 == LONG_MIN ? mx1 : mx3;
}
