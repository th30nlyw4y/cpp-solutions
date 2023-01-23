//
// Created by Petr on 10/01/2023.
//
// https://leetcode.com/problems/flood-fill/

#include <vector>

using namespace std;

void dfs(vector<vector<int>> &image, int x, int y, int oldColor, int newColor) {
    if (image[x][y] == oldColor) {
        image[x][y] = newColor;
        if (x > 0) dfs(image, x - 1, y, oldColor, newColor);
        if (y > 0) dfs(image, x, y-1, oldColor, newColor);
        if (x < image.size() - 1) dfs(image, x + 1, y, oldColor, newColor);
        if (y < image[0].size() - 1) dfs(image, x, y + 1, oldColor, newColor);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
    int oldColor = image[sr][sc];
    if (oldColor != newColor) dfs(image, sr, sc, oldColor, newColor);
    return image;
}

