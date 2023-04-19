//
// Created by Petr on 19/04/2023.
//
// https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/

#include <string>
#include "common.h"

using namespace std;

int ans = 0;
void dfs(TreeNode *node, string d, int l) {
    if (node == nullptr) {
        return;
    }
    ans = max(ans, l);
    if (d == "l") {
        dfs(node->left, "r", l + 1);
        dfs(node->right, "l", 1);
    } else {
        dfs(node->right, "l", l + 1);
        dfs(node->left, "r", 1);
    }
}

int longestZigZag(TreeNode *root) {
    dfs(root, "l", 0);
    dfs(root, "r", 0);
    return ans;
}
