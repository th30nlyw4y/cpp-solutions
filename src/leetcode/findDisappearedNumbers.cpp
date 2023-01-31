//
// Created by Petr on 31/01/2023.
//
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (i != nums[i] - 1) {
            while (nums[nums[i] - 1] != nums[i]) {
                swap(nums[nums[i] - 1], nums[i]);
            }
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (i != nums[i] - 1) {
            ans.push_back(i + 1);
        }
    }
    return ans;
}
