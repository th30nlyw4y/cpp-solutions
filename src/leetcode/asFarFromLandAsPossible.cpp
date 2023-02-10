//
// Created by Petr on 10/02/2023.
//
// https://leetcode.com/problems/as-far-from-land-as-possible/

#include <vector>
#include <queue>

using namespace std;

int maxDistance(vector<vector<int>> &grid) {
    int ans = -1, n = grid.size();
    if (n == 1) return ans;
    queue<pair<int, int>> landCells;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j]) landCells.push({i, j});
        }
    }
    while (!landCells.empty()) {
        int currToCheck = landCells.size();
        while (currToCheck--) {
            pair<int, int> cell = landCells.front();
            // Top
            if (cell.first > 0 && !grid[cell.first - 1][cell.second]) {
                grid[cell.first - 1][cell.second] = 1;
                landCells.push({cell.first - 1, cell.second});
            }
            // Left
            if (cell.second > 0 && !grid[cell.first][cell.second - 1]) {
                grid[cell.first][cell.second - 1] = 1;
                landCells.push({cell.first, cell.second - 1});
            }
            // Bottom
            if (cell.first < n - 1 && !grid[cell.first + 1][cell.second]) {
                grid[cell.first + 1][cell.second] = 1;
                landCells.push({cell.first + 1, cell.second});
            }
            // Right
            if (cell.second < n - 1 && !grid[cell.first][cell.second + 1]) {
                grid[cell.first][cell.second + 1] = 1;
                landCells.push({cell.first, cell.second + 1});
            }
            landCells.pop();
        }
        ans++;
    }
    return ans ? ans : -1;
}
