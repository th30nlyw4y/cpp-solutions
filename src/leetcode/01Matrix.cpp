//
// Created by Petr on 15/01/2023.
//
// https://leetcode.com/problems/01-matrix/

#include <vector>
#include <limits.h>

using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>> &m) {
    int r = m.size();
    if (!r) return m;
    int c = m[0].size();
    vector<vector<int>> ans(r, vector<int>(c, SHRT_MAX));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] == 0) {
                ans[i][j] = 0;
            } else {
                if (i > 0) ans[i][j] = min(ans[i][j], ans[i - 1][j] + 1);
                if (j > 0) ans[i][j] = min(ans[i][j], ans[i][j - 1] + 1);
            }
        }
    }

    for (int i = r - 1; i >= 0; i--) {
        for (int j = c - 1; j >= 0; j--) {
            if (i < r - 1) ans[i][j] = min(ans[i][j], ans[i + 1][j] + 1);
            if (j < c - 1) ans[i][j] = min(ans[i][j], ans[i][j + 1] + 1);
        }
    }
    return ans;
}
