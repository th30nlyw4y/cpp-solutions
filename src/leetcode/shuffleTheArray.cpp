//
// Created by Petr on 06/02/2023.
//
// https://leetcode.com/problems/shuffle-the-array/

#include <vector>

using namespace std;

// Basic solution, O(n) space
vector<int> shuffleV1(vector<int> &nums, int n) {
    vector<int> ans;
    int l = 0, r = n;
    while (l < n) {
        ans.push_back(nums[l]);
        ans.push_back(nums[r]);
        l++;
        r++;
    }
    return ans;
}

// Complex solution, O(1) space
vector<int> shuffle(vector<int> &nums, int n) {
    int tenOnes = (1 << 10) - 1;
    for (int i = n; i < 2 * n; i++) {
        nums[i - n] |= (nums[i] << 10);
    }
    for (int i = n - 1; i >= 0; --i) {
        nums[2 * i + 1] = nums[i] >> 10;
        nums[2 * i] = nums[i] & tenOnes;
    }
    return nums;
}
