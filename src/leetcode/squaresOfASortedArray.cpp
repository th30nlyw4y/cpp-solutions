//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/squares-of-a-sorted-array/

#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int l = 0, r = nums.size() - 1, i = nums.size() - 1;
    vector<int> ans(nums.size());
    while (l <= r) {
        int lSquare = nums[l] * nums[l], rSquare = nums[r] * nums[r];
        if (lSquare < rSquare) {
            ans[i] = rSquare;
            r--;
        } else {
            ans[i] = lSquare;
            l++;
        }
        i--;
    }
    return ans;
}
