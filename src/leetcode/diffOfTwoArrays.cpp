//
// Created by Petr on 03/05/2023.
//
// https://leetcode.com/problems/find-the-difference-of-two-arrays/

#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> n1(nums1.begin(), nums1.end()), n2(nums2.begin(), nums2.end());
    vector<vector<int>> ans(2);

    for (int n: n1) {
        if (n2.find(n) != n2.end()) {
            continue;
        }
        ans[0].push_back(n);
    }

    for (int n: n2) {
        if (n1.find(n) != n1.end()) {
            continue;
        }
        ans[1].push_back(n);
    }

    return ans;
}