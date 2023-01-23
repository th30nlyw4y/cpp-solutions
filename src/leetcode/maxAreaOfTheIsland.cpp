//
// Created by Petr on 10/01/2023.
//
// https://leetcode.com/problems/max-area-of-island/

#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grid, int x, int y, int &area) {
    if (grid[x][y] == 1) {
        area++;
        grid[x][y] = 0;
        if (x > 0) dfs(grid, x - 1, y, area);
        if (y > 0) dfs(grid, x, y - 1, area);
        if (x < grid.size() - 1) dfs(grid, x + 1, y, area);
        if (y < grid[0].size() - 1) dfs(grid, x, y + 1, area);
    }
}

int maxAreaOfIsland(vector<vector<int>> &grid) {
    int ans = 0;
    for (int x = 0; x < grid.size(); x++) {
        for (int y = 0; y < grid[0].size(); y++) {
            int area = 0;
            dfs(grid, x, y, area);
            if (area > ans) ans = area;
        }
    }
    return ans;
}
