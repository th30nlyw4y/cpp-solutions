//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums) {
    if (nums.size() < 2) return 1;
    int ans = 1, tmp = nums[0], dCnt = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != tmp) {
            ans++;
            tmp = nums[i];
            nums[i - dCnt] = nums[i];
        } else {
            dCnt++;
        }
    }
    return ans;
}
