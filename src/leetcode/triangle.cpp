//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/triangle/

#include <vector>

using namespace std;

int minimumTotal(vector<vector<int>> &triangle) {
    vector<int> ans(triangle.back());
    for (int i = triangle.size() - 2; i >= 0; i--) {
        for (int j = 0; j < triangle[i].size(); j++) {
            ans[j] = min(ans[j], ans[j + 1]) + triangle[i][j];
        }
    }
    return ans[0];
}
