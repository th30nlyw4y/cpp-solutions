//
// Created by Petr on 22/01/2023.
//
// https://leetcode.com/problems/remove-element/

#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val) {
    int valCnt = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            valCnt++;
        } else {
            nums[i - valCnt] = nums[i];
            ans++;
        }
    }
    return ans;
}
