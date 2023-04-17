//
// Created by Petr on 17/04/2023.
//
// https://leetcode.com/problems/permutations/

#include <vector>
#include <algorithm>

using namespace std;

void rearrange(vector<int> &nums, vector<vector<int>> &ans, vector<int> &tmp) {
    if (tmp.size() == nums.size()) {
        ans.push_back(tmp);
        return;
    }
    for (int n: nums) {
        if (find(tmp.begin(), tmp.end(), n) != tmp.end()) {
            continue;
        }
        tmp.push_back(n);
        rearrange(nums, ans, tmp);
        tmp.pop_back();
    }
}

vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> tmp;
    rearrange(nums, ans, tmp);
    return ans;
}
