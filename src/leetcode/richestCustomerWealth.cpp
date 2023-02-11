//
// Created by Petr on 11/02/2023.
//
// https://leetcode.com/problems/richest-customer-wealth/

#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts) {
    int ans = 0;
    for (int i = 0; i < accounts.size(); i++) {
        int tmp = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            tmp += accounts[i][j];
        }
        ans = max(ans, tmp);
    }
    return ans;
}