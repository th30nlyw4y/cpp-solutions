//
// Created by Petr on 18/01/2023.
//
// https://leetcode.com/problems/maximum-sum-circular-subarray/

#include <vector>

using namespace std;

int maxSubarraySumCircular(vector<int> &nums) {
    int sum = 0, maxSum = -3 * 10e4, minSum = 3 * 10e4, maxTmp = 0, minTmp = 0;
    for (int num: nums) {
        maxTmp += num;
        maxSum = max(maxSum, maxTmp);
        maxTmp = max(maxTmp, 0);

        minTmp += num;
        minSum = min(minSum, minTmp);
        minTmp = min(minTmp, 0);

        sum += num;
    }
    return (sum == minSum ? maxSum : max(maxSum, sum - minSum));
}
