//
// Created by Petr on 02/05/2023.
//
// https://leetcode.com/problems/maximum-subarray/

#include <vector>
#include <limits.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int mx = INT_MIN, curr = 0;
    for (int n: nums) {
        curr += n;
        mx = max(mx, curr);
        if (curr < 0) { curr = 0; }
    }
    return mx;
}
