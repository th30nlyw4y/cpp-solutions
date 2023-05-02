//
// Created by Petr on 02/05/2023.
//
// https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    unordered_map<int, int> tmp;
    for (int i = 0; i < nums.size(); i++) {
        if (tmp.find(target - nums[i]) != tmp.end()) {
            ans.push_back(tmp[target - nums[i]]);
            ans.push_back(i);
            break;
        }
        tmp[nums[i]] = i;
    }
    return ans;
}
