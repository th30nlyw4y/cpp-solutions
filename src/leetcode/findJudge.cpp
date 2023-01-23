//
// Created by Petr on 23/01/2023.
//
// https://leetcode.com/problems/find-the-town-judge/

#include <vector>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust) {
    vector<int> res(n + 1);
    for (vector<int> pair: trust) {
        res[pair[0]]--;
        res[pair[1]]++;
    }
    for (int i = 0; i < n + 1; i++) {
        if (res[i] == n - 1) return i;
    }
    return -1;
}